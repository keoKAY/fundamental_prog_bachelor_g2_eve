#include<iostream>
using namespace std; 

struct Worker{
    int id; 
    string name,gender; 
    float salary; 
    // constructor 
    Worker(){
        id = 1000; 
        name = "No Name"; 
        gender= "Undefined"; 
        salary = 0;  
    }

    Worker(int i, string n, string g, float s){
        id = i; 
        name = n; 
        gender = g ; 
        salary = s; 
    }

    void input(){
        cout<<"Enter ID:"; 
        cin>>id;cin.ignore();  
        cout<<"Enter name: "; 
        getline(cin,name); 
        cout<<"Enter gender: "; 
        cin>>gender; 
        cout<<"Enter salary : "; 
        cin>>salary; 

    }
    void output(){
        cout<<id<<"-"<<name<<"-"<<gender<<"-"<<salary<<endl; 
    }
};
int main(){
    system("clear"); 
    // initialize value 
    Worker worker1(1001,"piseth dev","male",888); 
    Worker worker2; 
   
    // worker1.input(); 
     worker1.output(); 
     worker2.output();
    return 0 ; 
}