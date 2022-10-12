/*
Step1: declare a string

Step2: count the length of the string

Step3: declare an array of size 26 since there is exactly 26 characters in English

Step4: in ASCII code, 'a' is 97 and 'A' is 65, 
       if str[i] is lower than 97, 
       add 32 (because 97-65=32) to str[i] and it will be converted into lower case

Step5: to count how mant times each character has been used, count[str[i]-'a']++
       count[0] will be the number that character a or A has been used,
       count[1] will be the number that character b or B has been used,
       and so on...

Step6: if character str[i] has already been used, set str[i] to null, 
       then sort the string from a to z (if exist)

Step7: if str[j] is between 97 to 122, (which means that str[j] is a~z instead of others like ',' or '?' )
       count[str[j]-'a'] will be the answer of that character
       so cout<<count[str[j]-'a']
       and that's all
       thank you for the reading :)
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"please enter a string in English"<<endl;
    string str; 
    getline(cin, str);
    int len=str.length();
    int count[26]={0};
    for(int i=0; i<len; i++){
        if(str[i]<97){
            str[i]+=32;
        }
        count[str[i]-'a']++;
    }
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len-1;j++){
            if(str[i]==str[j]){
                str[j]='\0';
            }
        }
    }
    for(int i=0; i<len; i++){
        
        for(int j=i+1; j<len-1; j++){
            if(str[i]>str[j]){
                swap(str[i],str[j]);
            }
        }
    }
    for(int j=0; j<len; j++){
        if(int(str[j])<123 && int(str[j])>96){
            if(count[str[j]-'a']!=0){
                cout<<char(str[j]-32)<<" or "<<str[j]<<": "<<count[str[j]-'a']<<endl;
            }
        }
    }
    return 0;
}