#include <iostream>
using namespace std;
int main(){
    int n, p;
    while(cin>>n>>p){
        int arr[n+1]={1};
        for(int i=1; i<=n; i++){
            if(i%p == 0){
                arr[i]=0;
            }
            
        }
    }
    return 0;
}