#include <iostream>
using namespace std;
int main(){
    while(1){
        int ans = 0; 
        int arrA[4];
        int arrB[4];
        for(int i=0; i<4; i++){
            cin>>arrA[i]; //輸入向量A
        }
        for(int i=0; i<4; i++){
            cin>>arrB[i]; //輸入向量B
        }
        for(int i=0; i<4; i++){
            ans+=arrA[i]*arrB[i]; //計算內積
        }
        cout<<ans<<endl; //輸出答案並換行
    }
    return 0;
}