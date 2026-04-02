#include<iostream>
using namespace std; 

void greeting(){
    cout<<"Welcome to cpp program!! "<<endl; 
    greeting(); 
}
int main(){
    system("clear"); 
     greeting(); 
    return 0 ; 
}