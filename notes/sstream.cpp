#include<iostream>
#include<string>
#include<sstream>
#include<cctype>

using namespace std;

int main(){
    string s;
    char tmp;
    while(getline(cin,s)){
        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                s[i]=tolower(s[i]);
            }else{
                s[i]=' ';
            }
        }
        stringstream ss;
        ss << s;
        // 18~19 -> stringstream ss(s);
        int count[26]={0};
        while(ss>>tmp){
            count[tmp-'a']++;
        }
        for(int i=0; i<26 && count[i] != 0; i++){
            cout<<char(i+97)<<" "<<count[i]<<" "<<endl;
        }
    }
    return 0;
}