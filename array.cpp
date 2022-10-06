#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[7];
    int sum=0;
    float avg;
    int median;
    int mod;
    int count[7]={0,0,0,0,0,0,0};
    for(int i=0; i<7; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+7);
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(arr[i]==arr[j]){
                count[i]++;
            }
        }
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(count[i]>count[j]){
                mod=arr[i];
            }
        }
    }
    avg=float(sum)/7;
    median = arr[3];
    printf("%s%.1f","avg= ",avg);
    cout<<" med= "<<median;
    cout<<" mod= "<<mod<<endl;
    return 0;
}