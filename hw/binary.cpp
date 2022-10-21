#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int n_plum=n;
        int count = 0;
        while(n_plum>0){
            n_plum/=2;
            count++;
        }
        int arr[count];
        int count_plum=count;
        while(n>0){
            arr[count_plum-1]=n%2;
            n/=2;
            count_plum--;
        }
        for(int i=0; i<count; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}
