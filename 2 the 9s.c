#include <stdio.h>
#include <string.h>

int main(void){
	
	while (1){
		
		char arr[1001];
		scanf("%s",arr);
		
		if (strcmp(arr,"0")==0){
			break;
		}
		
		int number=0;
		for (int i=0;arr[i]!='\0';i++){
			number+=arr[i]-'0';
		}
		
		if (number%9!=0){
			printf("%s is not a multiple of 9.\n",arr);
		}else {
			
			int deg=1;
			while (number>9){
				int next=0;
				while (number>0){
					next+=number%10;
					number=number/10;
				}
				number=next;
				deg++;
			}
			
			printf("%s is a multiple of 9 and has 9-degree %d.\n",arr,deg);
			
		}
		
	}
	
	return 0;
}
