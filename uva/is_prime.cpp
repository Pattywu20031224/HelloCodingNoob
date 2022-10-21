#include <iostream>
using namespace std;
int is_prime(int x);
int main(){
    int n;
    while(cin>>n){
        int sum=0;
        for(int j=2; j<=n; j++){
            if(is_prime(j)!=0){
                sum+=j;
                cout<<j<<" is prime"<<endl;
            }
        }
        cout<<"sum of prime number between 1 ~ "<<n<<" is "<<sum<<endl;

    }
    return 0;
}

int is_prime(int x){
    bool flag = true; //set the flag to be false at first
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {  
            flag=false;
             //if x is divisible by any number between two and itself, 
             //then it's not a prime number
             //let the flag be false and break;
            break;
        }
    }
    if(flag==false){
        return 0; //if flag remains to be true then it's a prime number.
    }
    //if the flag changed to be false then it's not.
    return 1;
}