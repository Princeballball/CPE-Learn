#include <stdio.h>

int main(void){

    int n,m;

    while (scanf("%d %d",&n,&m)==2){
        int org_n=n,org_m=m;
        if (n>m){
            int rem=n;
            n=m;
            m=rem;
        }
        
        int arr[m-n+1],index=0;

        for (int i=n;i<=m;i++){
            int count=1,op=i;
            while (op!=1){
                if(op%2==1){
                    op=op*3+1;
                    count++;
                }else{
                    op=op/2;
                    count++;
                }
            }
            arr[index]=count;
            index++;
        }

        int max=0;
        for (int i=0;i<m-n+1;i++){
            if (arr[i]>max){
                max=arr[i];
            }
        }

        printf("%d %d %d\n",org_n,org_m,max);

    }

    return 0;
}
