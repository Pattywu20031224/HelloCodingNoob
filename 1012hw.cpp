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
        sort(arr, arr+n);

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        int pass_lowest = 60;
        int failed_highest=59
        for(int i=0; i<n; i++){
            if(arr[i]>60){
                pass_highest = arr[i];
            }
            if(arr[i]<60){
                
            }
        }
        
    }
    return 0;
}