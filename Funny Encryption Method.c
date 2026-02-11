#include <stdio.h>

int main(void){

	int times;
	scanf("%d",&times);
	   
	for (int k=0;k<times;k++){
		
		int n;
		scanf("%d",&n);
		int two[1000],sixteen[1000];
		int dec=n,hex=0;
		int i=0,j=0,count_two=0,count_sixteen=0;
		
		while (dec>0){
			if (dec%2==1){
				count_two++;
			}
			two[i]=dec%2;
			dec=dec/2;
			i++;
		}
		
		while (n>0){

            int pow=1,base=16;
            for (int g=1;g<=j;g++){
                pow=pow*base;
            }
            hex+=n%10*pow;
            n=n/10;
            j++;
        }
        
        int s=0;
        while (hex>0){
			if (hex%2==1){
				count_sixteen++;
			}
			sixteen[s]=hex%2;
			hex=hex/2;
			s++;
		}
		printf("%d %d\n",count_two,count_sixteen);
	}

    return 0;
}
