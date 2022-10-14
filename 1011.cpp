#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    while(getline(cin.ignore(1,'\0'),str)){
        int l=str.length();
        sort(str.begin(),str.end());
        int testcount=0;
        for(int i=0; i<str.length(); i++){
            cout<<str[i]<<" ";
            testcount++;

        }cout<<endl<<testcount<<endl;
        /*
        int count[26]={0};
        for(int i=0; i<str.length();i++){
            if(str[i]-'a'>=0){
                count[str[i]-'a']++;
            }
        }
        for(int i=26; i>0; i--){
            if(count[i]!=0){
                cout<<count[i]<<endl;
            }
        }
*/
    }
    return 0;
}