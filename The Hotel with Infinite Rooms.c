#include <stdio.h>

int main(void){
	
	int n,m;
	while (scanf("%d %d",&n,&m)==2){
		
		int date=1;
		
		while (date<=m){
			date=date+n;
			if (date>m){
				break;
			}
			n=n+1;
		}
		
		printf("%d\n",n);
		
	}
	
	return 0;
}
