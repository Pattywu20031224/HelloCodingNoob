#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool correct = true;
        if(arr[0]!=1){
            cout<<"1\n";
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]-1){
                cout<<arr[i]+1<<endl;
                correct=false;
            }
        }
        if(correct){
            cout<<"good job"<<endl;
        }
    }
    return 0;
}