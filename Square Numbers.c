#include <stdio.h>

int main(void){
	
	int n,m;
	
	while (scanf("%d %d",&n,&m)==2){
		if (n==0 && m==0){
			break;
		}
		
		int a=1,count=0;
		while (1){
			if (n<=a*a && a*a<=m){
				count++;
				a++;
			}else if (a*a>m){
				break;
			}else{
				a++;
			}
		} 
		
		printf("%d\n",count);
		
	}
	
	return 0;
}
