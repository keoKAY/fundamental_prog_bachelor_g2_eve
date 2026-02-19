#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int option; 
    cout<<"-------[OUR MENU]-------"<<endl; 
    cout<<"1. Fried Rice "<<endl; 
    cout<<"2. Chicken Rice "<<endl; 
    cout<<"3. Water "<<endl; 

    cout<<">> Choose your option: "; 
    cin>>option; 
    switch(option){
        case 1: 
            cout<<"You choose Fried Rice"<<endl; 
            break; 
        case 2 : 
            cout<<"You chose chicken rice "<<endl; 
            break; 
        case 3: 
            cout<<"You chose water! "<<endl; 
            break; 
        default: 
            cout<<"Invalid option! Try again from 1-3"
                <<endl; 
            break; 
    }
    return 0; 
}