#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int i = 1;
    for(; i<=100;  ){
        cout<<i<<".Hello world "<<endl; 
        i++; 
    }

    for (;;){
        cout<<"infinite loop ! "<<endl; 
    }
 
    return 0 ; 
}