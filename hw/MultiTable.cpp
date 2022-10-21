#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            printf("%d%s%d%s%02d%s", i, "*",j,"=",i*j," ");
        }
        printf("\n");
    }
    return 0;
}