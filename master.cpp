// ATM مشروع صرافة بنك
#include<bits/stdc++.h>
using namespace std;
//***** variable *****//
double balance=1000;
int deposit=0;
int withdraw=0;
int password=2003;
int choice=0;
//***** end variable *****//

//Show is fuction to display the menu of ATM
void show(){
cout<<"***** Menu *****"<<endl;
cout<<"1:Balance"<<endl;  // رصيد
cout<<"2:Withdraw"<<endl; // سحب
cout<<"3:Deposit"<<endl;  // ايداع
cout<<"4:exit"<<endl;     // خروج
cout<<"****************"<<endl;
}

void process(){
    cout<<"Enter Your Password"<<endl;
    cin>>password;

        do{
    if(password==2003){

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice){

            case 1:
            cout<<"your balance is "<<balance<<endl;
            break;

            case 2:
            cout<<"Note : your balance is "<<balance<<endl;
            cout<<"Enter your amount"<<endl;
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"Sorry you cant with this Amount"<<endl;
            }
            else {
                balance-=withdraw;
                cout<<"Now : your balace is "<<balance<<endl;
                }
            break;

            case 3:
            cout<<"your current balance is "<<balance<<endl;
            cout<<"enter your deposit  money : ";
            cin>>deposit;
            balance+=deposit;
            cout<<"your new balance is "<<balance<<endl;
            break;

            case 4:
            cout<<"Thank you"<<endl;
            break;
        }
        
        

    }

    else{
        char option='a';
        cout<<"Passwoed is  Incorrect , Do you want to try Again ? Enter [Y] of yes or [N] for No : ";
        cin>>option;
        if(option=='Y' || option=='y'){
         cout<<"enter your password"<<endl;
         cin>>password;
        }
         else {
            choice=4;
             cout<<"Thank you"<<endl;
         }

        }    
    
        }while (choice < 4 );

}

int main(){

show();
process();

    return 0;
}