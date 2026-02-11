#include <stdio.h>
#include <string.h>

int main(void){

    long long n;
    while (1){

        scanf("%lld",&n);
        if (n==0){
            break;
        }

        int arr[1000];
        int i=0;

        while (n>0){
            arr[i]=n%2;
            n=n/2;
            i++;
            
        }
        
        int count=0;
		printf("The parity of ");
        for (int j=i-1;j>=0;j--){
            if (arr[j]==1){
                count++;
            }
            printf("%d",arr[j]);
        }
        printf(" is %d (mod 2).\n",count);

    }

    return 0;
}
