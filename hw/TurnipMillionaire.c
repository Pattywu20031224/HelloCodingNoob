#include <stdio.h>
int main(){
    float input;
    while(scanf("%f",&input)){
        float w=0.9, u=0.1, u_plum=-0.98;
        int b=-51, b_plum=153;
        float h_init = 0.0;
        float x_init = input;
        for(int i=0; i<5; i++){         
            float h_new = w * x_init + u * h_init + b;
            float y_new = u_plum * h_new + b_plum;
            printf("%.1f\n",y_new);
            x_init = y_new;
            h_init = h_new;
        }
    }
    return 0;
}