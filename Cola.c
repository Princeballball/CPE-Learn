#include <stdio.h>

int main(void){

    int n;

    while (scanf("%d",&n)==1){

        int empty=n,drink=n;

        while (empty>=3){
            drink++;
            empty=empty-3+1;
        }

        if (empty==2){
            drink++;
        }

        printf("%d\n",drink);

    }

    return 0;
}
