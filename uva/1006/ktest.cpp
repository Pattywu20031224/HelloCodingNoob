#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system(”pause“) or input loop */

int main() {
    int b,j,d,sum1=0,c=0,a,i,num[16],N;
    scanf("%d",&N);
    while(N--){
        for(i=0;i<16;i++){
            scanf("%d",&num[i]);
        }
        for(i=0;i<16;i+=2){
            a=num[i]*2;
            if(a>=10){
                b=a%10+(a/10)%10;
                sum1=a+b;
            }
            else{
                sum1=sum1+a;
            }
        }
        for(j=1;j<16;j+=2){
        d=num[j];
        c=c+d;
        }
        if((sum1+c)%10==0)
            printf("valid");
        else
            printf("invalid");
    }
    return 0;
}