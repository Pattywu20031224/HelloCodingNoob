#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int ans=1;
        for(int i=n; i>0; i--){
            ans*=2;
        }
        cout<<ans<<endl;
    }
}