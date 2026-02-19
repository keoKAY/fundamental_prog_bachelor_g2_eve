#include<iostream>
using namespace std; 
int main(){
    system("clear");  // cls 
    bool isValid = true; 

    cout<<"isValid: "<<isValid<<endl; 
    cout<<"!isValid: "<<(!isValid)<<endl; 

    int age = 16; 
    if( !(age >=18) ){
        cout<<"Age is NOT greater or equal to 18"
        <<endl; 
    }

    return 0; 
}