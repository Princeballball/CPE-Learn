#include <stdio.h>

int main(void){

    long long n,m;
    while (scanf("%lld %lld",&n,&m)==2){

        long long ok=0,temp=n;
        
        if (n<2 || m<2){
        	printf("Boring!\n");
        	continue;
		}
        
        while (n!=1){
            if (n%m!=0){
                ok=0;
                break;
            }else {
                n=n/m;
                ok=1;
            }
        }

        if (!ok){
            printf("Boring!\n");
        }else {

            printf("%lld",temp);
            while (temp!=1){
                printf(" %lld",temp/m);
                temp=temp/m;
            }
		
			printf("\n");
        }

    }

    return 0;
}
