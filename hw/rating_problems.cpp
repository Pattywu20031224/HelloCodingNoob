#include <iostream>
using namespace std;
int main(){
    int n, k;
    while(cin>>n>>k){
        int input;
        int sum=0;
        int arr[k];
        for(int i=0; i<k; i++){
            cin>>input;
            sum+=input;
        }
        int max_sum=sum, min_sum=sum;
        for(int i=0; i<n-k; i++){
            max_sum+=3;
            min_sum-=3;
        }
        float max, min;
        max= float(max_sum)/n;
        min= float(min_sum)/n;
        printf("%.4f%s%.4f\n",min," ",max);
        
        
    }
    return 0;
}