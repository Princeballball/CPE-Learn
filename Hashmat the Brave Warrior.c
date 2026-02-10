#include <stdio.h>

int main(void){
	
	int n,m;
	while (scanf("%d %d",&n,&m)==2){
		if (n-m<0){
			printf("%d\n",-(n-m));
		}else{
			printf("%d\n",n-m);
		}
	}
	
	return 0;
}
