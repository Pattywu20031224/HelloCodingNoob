#include <iostream>
#include <string>
using namespace std;  
int main(){
        int arr[600]={0};
        int c=0;
        while(true){
        
        //c-1,c-2,c-3,c-4,c-5,c-6
            while(true){
                cin>>arr[c];
                c++;
                if(cin.get()==EOF){
                    break;
                }
            }
        
            int lottery[6]={arr[c-7],arr[c-6],arr[c-5],arr[c-4],arr[c-3],arr[c-2]};
            int money=0;
            for(int i=0; i<c-7; i+=6){
                int count=0;
                for(int j=i; j<i+6; j++){
                    for(int k=0; k<6; k++){
                        if(arr[j]==lottery[k]){
                            count++;
                            break;
                        }
                    }
                }
                switch(count){
                    case 3:
                        money+=400;
                        break;
                        
                    case 4:
                        money+=1000;
                        break;
                        
                    case 5:
                        money+=10000;
                        break;
                        
                    case 6:
                        money+=100000;
                        break;
                    default:
                        break;

                }
            }
            cout<<money<<endl;
            break;
        }
    
    return 0;
}