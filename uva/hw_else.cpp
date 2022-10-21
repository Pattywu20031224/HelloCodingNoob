#include <iostream>
#include <windows.h>
using namespace std;
void patternshow();
int main(){
    while(true){
        patternshow();
    }
    return 0;
}
void patternshow(){
    cout<<"                ***         ***\n";
    cout<<"            **     **    **    **\n";
    cout<<"                O      |     O\n";
    cout<<"                       |\n";
    cout<<"            *          |         *\n";
    cout<<"               *               *\n";
    cout<<"                **          **\n";
    cout<<"                   ********\n";
    
    
    Sleep(1000);
    system("cls");
    cout<<"                ***         ***\n";
    cout<<"            **     **    **    **\n";
    cout<<"                O      |     O\n";
    cout<<"                       |\n";
    cout<<"                       |\n";
    cout<<"                   ********\n";
    cout<<"                **          **\n";
    cout<<"               *               *\n";
    cout<<"            *                   *\n";
    Sleep(1000);
    system("cls");
    return ;
}