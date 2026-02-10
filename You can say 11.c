#include <stdio.h>

int main(void){

    long long n;

    while (1){
    	scanf("%lld",&n);

	    if (n==0){
	        break;
        }

        if (n%11==0){
            printf("%d is a multiple of 11.\n",n);
        }else{
            printf("%d is not a multiple of 11.\n",n);
        }

	}

     

    return 0;
}
