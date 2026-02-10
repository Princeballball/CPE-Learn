#include <stdio.h>

int main(void){

    int n;

    scanf("%d",&n);

    for (int i=0;i<n;i++){
        
        int many;

        scanf("%d",&many);
        int arr[many];

        for (int j=0;j<many;j++){
            scanf("%d",&arr[j]);
        }

        int com=-1;

        for (int j=0;j<many;j++){
            for (int k=j+1;k<many;k++){
                if (arr[j]>arr[k]){
                    com=arr[j];
                    arr[j]=arr[k];
                    arr[k]=com;
                }
            }
        }

        int dis=0,ans;

            int c=many/2;
            for (int j=0;j<many;j++){
                if (arr[j]-arr[c]<0){
                    ans=-(arr[j]-arr[c]);
                }else{
                    ans=arr[j]-arr[c];
                }
                dis=ans+dis;
            }
        

        printf("%d\n",dis);

    }

    return 0;
}
