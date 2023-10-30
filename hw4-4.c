#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int count;
    int data[10][10] = {{0}};
    int max, boy, girl;
    scanf("%d", &count);
    assert( count >= 1 && count <= 10);
    for(int i = 0; i < count; i++){
        for(int j = 0; j < count; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    for(int k = 0; k < count; k++){
        max = 0;
        boy = 0;
        girl = 0;
        for(int i = 0; i < count; i++){
            for(int j = 0; j < count; j++){
                if(data[i][j] > max){
                    max = data[i][j];
                }
            }
        }

        for(int i = 0; i < count; i++){
            for(int j = 0; j < count; j++){
                if(data[i][j] == max){
                    boy = i;
                    girl = j;
                    printf("boy %d pair with girl %d\n", (boy + 1), (girl + 1));
                }
            }
        }

        for(int i = 0; i < count; i++){
            for(int j = 0; j < count; j++){
                if(i == boy || j == girl){
                    data[i][j] = 0;
                }
             }
        }
    }
    return 0;
}
