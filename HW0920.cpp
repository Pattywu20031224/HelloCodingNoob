#include<iostream>
using namespace std;
int main(){
    int value;
    cin>>value;
    switch(value){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"Grade S\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout<<"Grade A\n";
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            cout<<"Grade B\n";
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            cout<<"Grade C\n";
            break;
        default:
            cout<<"Grade D\n";
    }
    return 0;
}