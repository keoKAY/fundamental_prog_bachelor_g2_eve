#include<iostream>
using namespace std; 

// Demo for break keyword 
int main(){
    system("clear"); 
    for(int i = 1; i<=10; i++){
        cout<<"I = "<<i<<endl;    
        if(i==5) break; 
    }
    // using break with infinite loop 
    int option; 
    while(true){

        cout<<"Type : 1  to exit: "; 
        cin>>option; 
        if(option==1) break; 
    }
    return 0 ; 
}