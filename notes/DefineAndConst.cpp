#include <iostream>
#include <cmath>
#include <iomanip>
#define MAX 100

using namespace std;

int main(){
    int a[MAX];
    const double PI = acos(-1.0);

    for(int i=0; i<MAX; i++){
        a[i]=i;
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<PI<<endl;
    cout<<setprecision(15)<<PI<<endl;    
    printf("%.15f",PI);

    return 0;
}