#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[50] = {0};
    int n;
    scanf("%d",&n);
    if (n >= 1 && n <= 50){
        for (int i = 0; i < n; i++){
            scanf("%d",&num[i]);
        }
        for (int i = 0; i < n; i++){
            int check = 0;
            if (num[i] == 1){
                printf("NO ");
            }
            else if (num[i] == 2){
                printf("YES ");
            }
            else {
                for (int j = num[i]-1; j > 1; j--){
                    if (num[i]%j == 0){
                        check = 1;
                        printf("NO ");
                        break;
                    }
                }
                if (check == 0){
                    printf("YES ");
                }
            }
        }
    }

    return 0;
}

