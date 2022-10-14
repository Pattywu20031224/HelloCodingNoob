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
        int pass_lowest = 100;
        int failed_highest = 0;
        bool sbpass = false;
        bool sbfailed = false;
        for(int i=0; i<n; i++){
            if(arr[i]>=60){
                sbpass = true;
                if(arr[i] < pass_lowest){
                    pass_lowest = arr[i];
                }
            }
            if(arr[i]<60){
                sbfailed =true;
                if(arr[i] > failed_highest){
                    failed_highest=arr[i];
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
            if(sbfailed){
                if(sbpass){
                    cout<<failed_highest<<endl<<pass_lowest<<endl;
                }else{
                    cout<<"all failed"<<endl<<failed_highest<<endl;
                }
            }else
                cout<<"all passed"<<endl<<pass_lowest<<endl;
            }
        
    
    return 0;
}