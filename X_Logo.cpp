#include <iostream>
using namespace std;
int main(){
    int w, h;
    while(cin>>w>>h){
        for(int i=0; i<h; i++){
            for(int j=0; j<h; j++){
                if((h-w*2)>0){
                    cout<<"*";
                }
                w--;
            }
            cout<<endl;
        }
    }
    return 0;
}