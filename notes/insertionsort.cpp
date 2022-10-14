#include <iostream>
using namespace std;
int main(){
    int n;
    int insert;
    while(cin>>n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int j;
        for(int i=1; i<n; i++){
            insert = arr[i];
            for(j=i-1; j>=0; j--){
                if(insert < arr[j]){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1]=insert;
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}