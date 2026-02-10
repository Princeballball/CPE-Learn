#include <stdio.h>

int main(void){
	
	int n;
	
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		
		long long x,y;
		scanf("%lld %lld",&x,&y);
		
		long long a,b;
		if ((x+y)%2!=0){
			printf("impossible\n");
		}else{
			a=(x+y)/2;
			b=(x-y)/2;
			if (a<0 || b<0){
				printf("impossible\n");
			}else if (a<b){
				printf("%lld %lld\n",b,a);
			}else{
				printf("%lld %lld\n",a,b);
			}
		}
		
	
	}
	
	return 0;
}
