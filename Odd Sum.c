#include <stdio.h>

int main(void){

    int n,num=1;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        
        int first,sec,count=0;
        scanf("%d %d",&first,&sec);

        for (int j=sec;j>=first;j--){
            if (j%2==1){
                count=count+j;
            }
        }

        printf("Case %d: %d",num,count);

        num++;

    }

    return 0;
}
