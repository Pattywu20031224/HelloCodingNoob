#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[10000];
    int n=0, i=0;
    while(cin>>n){
        arr[i]=n;
        i++;
        sort(arr, arr+i);
        if(i == 1){
            cout<<arr[0]<<endl;
        }
        else if(i%2 == 0){
            cout<<(arr[i/2]+arr[i/2 - 1])/2<<endl;
        }else{
            cout<<arr[i/2]<<endl;
        }

    }
    return 0;
}