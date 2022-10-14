#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int j, int k){
    return (j>k); //由大到小(預設是小到大)
}
int main(){
    int arr[4]={2, 4, 3, 1};
    sort(arr, arr+4);
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";

    }
    
    return 0;
}