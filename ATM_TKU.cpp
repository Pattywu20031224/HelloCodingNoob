#include <iostream>
using namespace std;
int main(){

    
/*
just found out that it's not able to show chinese words in some IDE
so i'm ganna use my poor English to do all the comments
*/


    while(true)
    {
        
        int pw;
        int money=1000;
        cout<<"please enter your password: ";
        cin>>pw;
        
        if(pw!=1224){   //let the correct password be 1224
            cout<<"wrong password\n";
            /*
            due to the while loop,
            after the user type in the wrong password, 
            the program will print "please enter your password:" again
            */
        }else{
            //use a boolean to check if the user wants to quit the program
            bool quit = false;
            do{
                cout<<"---------WELCOME TO TKU ATM SERVICE!---------\n";
                cout<<"1. Balance Inquiry\n";
                cout<<"2. Withdraw\n";
                cout<<"3. Deposit\n";
                cout<<"4. Quit\n";
                cout<<"---------------------------------------------\n";
                cout<<"Enter your choice: ";
                int ch=0; //use a variable called "ch" to store the choice
                cin>>ch;
                char b;
                //use switch case to determine which service the user wants to get,
                switch (ch){                    
                    case 1:
                        cout<<"your balance is: "<<money<<"\n";
                        cout<<"do you want to have another transaction?(y/n)";
                        cin>>b;
                        if(b=='n'){
                            quit=true; 
                            /*
                            if the program gets "y" from the user, 
                            change the value of quit to TRUE,
                            so that the program will end the do-while loop
                            */
                        }
                        break;
                    case 2:
                        cout<<"enter the amount to withdraw: ";
                        int withdraw_amount;
                        cin>>withdraw_amount;
                        if(withdraw_amount>money){
                            cout<<"insufficient balance\n";
                        }else{
                            money-=withdraw_amount;
                            cout<<"your balance is: "<<money<<"\n";
                        }
                        cout<<"do you want to have another transaction?(y/n)";
                        cin>>b;
                        if(b=='n'){
                            quit=true; //same as line 46
                        }
                        break;
                    case 3:
                        cout<<"enter the amount to deposit: ";
                        int deposit_amount;
                        cin>>deposit_amount;
                        money+=deposit_amount;
                        cout<<"your balance is: "<<money<<"\n";
                        cout<<"do you want to have another transaction?(y/n)";
                        cin>>b;
                        if(b=='n'){
                            quit=true;//same as line 46
                        }
                        break;
                    case 4:
                        quit = true;
                        break;
                    default:
                        break;
                }
            }
                while(quit==false);
                return 0;
        }
    }
    return 0;
}