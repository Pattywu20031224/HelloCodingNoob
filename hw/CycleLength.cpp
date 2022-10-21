#include <iostream>
#include <algorithm>

using namespace std;

int count(int num);

int main(){
    int a, b;
    while(cin>>a>>b){
        
        int max_cl=0;
        for(int i=min(a,b); i <= max(a,b); i++){
            if(count(i)>max_cl){
                max_cl=count(i);
            }
        }
        cout<<a<<" "<<b<<" "<<max_cl<<"\n";
    }
    return 0;
}
int count(int num){
    int cl=1;
    while(num!=1){
        if(num%2 == 0){
            num/=2;
            cl++;
        }else{
            num = num*3 + 1;
            cl++;
        }
    }
    return cl;
}