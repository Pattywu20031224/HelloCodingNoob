#include <iostream>
using namespace std;

int mai(){
    int n;
    while(cin>>n){
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            int arr[a];
            for(int j=0; j<a; j++){
                cin>>arr[j];
            }
            int count = 0;
            for(int j=0; j<a; j++){
                cout<<arr[j]<<" "<<endl;
            }
            for(int k=0; k<a; k++){
                for(int l=k+1; l<a; l++){
                    if(arr[k]<arr[l]){
                        swap(arr[k],arr[l]);
                        count++;
                    }
                }
            }
            for(int j=0; j<a; j++){
                cout<<arr[j]<<" "<<endl;
            }
            cout<<count<<endl;
        }
    }
    return 0;

}