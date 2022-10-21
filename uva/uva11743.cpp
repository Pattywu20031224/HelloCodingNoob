#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        string strtmp;
        getline(cin,strtmp);
        for(int i=0; i<n; i++){
            string input;
            getline(cin, input);
        
            /*
            0 1 2 3   4   5 6 7 8   9   10 11 12 13   14   15 16 17 18 
                     空格          空格               空格        
            */
            int credit[16];
            int c=0;
            for(int i=0; i<19; i++){
                if(i!=4 && i!=9 && i!=14){
                    credit[c]=input[i]-48;
                    c++;
                }
            }
            int sum=0;
            for(int i=0; i<16; i++){
                if(i%2 == 0){
                    credit[i]*=2;
                    int tmp =((credit[i]%10)+credit[i]/10);
                    sum+=tmp;
                }else{
                    sum+=credit[i];
                }
            }
            if(sum%10 == 0){
                cout<<"Valid"<<endl;

            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
        
    

    return 0;
}