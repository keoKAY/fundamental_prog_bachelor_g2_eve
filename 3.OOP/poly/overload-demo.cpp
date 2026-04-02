#include<iostream>
using namespace std; 

void sum(){
    cout<<"This is just a demo function"
        <<endl; 
}
int sum(int a , int b ){
    return a + b; 
}
int sum(int a , int b , int c ){
    return a + b + c ; 
}
string sum(string a , string b ){
    return a + b ; 
}

int main(){
    system("clear"); 
    sum(); 
    cout<<"result is : "<<sum(10,20)<<endl; 
    cout<<"result is : "<<sum(10,20,30)<<endl; 
    cout<<sum("hello"," world")<<endl; 

    return 0 ; 
}