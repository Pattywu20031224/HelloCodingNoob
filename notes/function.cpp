#include <iostream>
using namespace std;
int add(int, int);
int main(){
    int x, y;
    while(cin>>x>>y){
        int ans = add(x, y);
        cout<<ans<<endl;
    }
    return 0;
}
int add(int a, int b){
    return a+b;
}