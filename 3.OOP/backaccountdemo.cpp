#include<iostream>
using  namespace std; 

class BankAccount{
    private: 
        double balance; 
    public: 

        BankAccount(){balance=0;}
        void deposit(double amount){
            if(amount>0){
                balance+=amount; 
                cout<<" ✅ You have deposited : "<<amount<<"$"<<endl; 
            }else{
                cout<<"Amount = "<<amount<<"$"<<endl; 
                cout<<" ❌ Amount must be greater than 0"<<endl; 
            }
        }
        void withdraw(double amount){
            if(amount>0 && amount<= balance){
                balance-=amount; 
                // balance = balance - amount; 
                cout<<" ✅ You have withdrawn : "<<amount<<"$"<<endl; 
            }else{
                cout<<"Amount = "<<amount<<"$"<<endl; 
                cout<<" ❌ Invalid amount for withdraw!"<<endl; 
            }
        }
        double getBalance(){return balance; }
}; 
int main(){
    system("clear"); 
    BankAccount acc1; 
    acc1.deposit(1000); 

    acc1.withdraw(2000); 
    cout<<"Current Balance is : "<<acc1.getBalance()<<"$"<<endl; 

    return 0 ; 
}