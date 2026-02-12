#include <stdio.h>

int main(void){

    float first_x,first_y,second_x,second_y,third_x,third_y,fourth_x,fourth_y;
    while (scanf("%f %f %f %f %f %f %f %f",&first_x,&first_y,&second_x,&second_y,&third_x,&third_y,&fourth_x,&fourth_y)==8){

        float ans_x,ans_y,dis_x,dis_y;

        dis_x=second_x-first_x;
        dis_y=third_y-fourth_y;

        ans_x=fourth_x-dis_x;
        ans_y=first_y-dis_y;

        printf("%.3f %.3f\n",ans_x,ans_y);


    }

    return 0;
}
