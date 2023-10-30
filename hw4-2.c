#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bank[6][3] = {{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000},{566,221,7000}};
    int count;
    int acc,pass;
    scanf("%d",&count);
    for (int i = 0; i < count; i++){
        int error = 0;
        scanf("%d%d",&acc,&pass);
        for (int j = 0; j < 6; j++){
            error = 1;
            if (acc == bank[j][0] && pass == bank[j][1]){
                error = 0;
                printf("%d\n",bank[j][2]);
                break;
            }
        }
        if (error == 1){
            printf("error\n");
        }
    }

    return 0;
}

