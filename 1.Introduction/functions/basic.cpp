#include<iostream>
using namespace std; 

// function example 
// void -> return nothing 
void menu(){
    cout<<"1. Another program "<<endl; 
    cout<<"2. Second program "<<endl; 
    cout<<"3. Third program "<<endl; 
    
}

int main(){
    system("clear"); 
// call function 
    menu(); 
    menu(); 
    menu(); 

    return 0 ; 
}