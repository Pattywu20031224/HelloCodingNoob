#include <iostream>
using namespace std;
int main(){
    string str;
    while(cin>>str && str!="0"){
        int len=str.length();
        int sum_odd=0,sum_even=0;
        for(int i=0; i<len; i+=2){
            sum_even += str[i]-48;
        }
        for(int i=1; i<len; i+=2){
            sum_odd += str[i]-48;
        }
        
        if(sum_even == sum_odd || (sum_even - sum_odd)%11 == 0 ){
            cout<<str<<" is a multiple of 11.\n";
        }else{
            cout<<str<<" is not a multiple of 11.\n";
        }
    }
    return 0;
}