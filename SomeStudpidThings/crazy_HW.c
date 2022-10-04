#include <stdio.h>
int main(){
    int n; 
    char c; 
    while(1){ 
        int sum = 0; 
        printf("please start your input and seperate them with a space\n");
        while(scanf("%d",&n)){ 
            if(n<0) 
            continue;
            sum += n; 
            if(getchar()=='\n'){
                break; 
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}