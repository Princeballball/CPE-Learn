#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n;
	while (scanf("%d",&n)==1){
		
		int arr[n],jolly[n-1];
		
		for (int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for (int i=0;i<n-1;i++){
			jolly[i]=abs(arr[i+1]-arr[i]);
		}
		
		int com;
		
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n-1;j++){
				if (jolly[i]>jolly[j]){
					com=jolly[i];
					jolly[i]=jolly[j];
					jolly[j]=com;
				}
			}
		}
		
		int index=0,se=1;
		for (int i=0;i<n-1;i++){
			if (jolly[i]!=index+1){
				se=0;
				break;
			}
			index++;
		}
		
		if (se){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
		
	}
	
	return 0;
}
