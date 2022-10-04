#include <iostream>
using namespace std;
int main(){
    int i;
    while(scanf("%d",&i)){
        while(i>0){
            printf("%d",i%10); //取餘數之後輸出
            i/=10; //新的i變成i/10
        }
        cout<<endl;
    }
    return 0;
}