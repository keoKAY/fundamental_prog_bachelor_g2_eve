#include<iostream> 
using namespace std; 
int main(){
    system("clear"); 
    int option; 
    cout<<"-----[Demo using goto label]---- "<<endl; 
    menu: 
        cout<<"1. First program "<<endl; 
        cout<<"2. Second program "<<endl; 
        cout<<"3. Go back to menu "<<endl; 
        cout<<"-> Choose your option: "; 
        cin>>option; 
        if(option==1)
            cout<<"Welcome to first program!"<<endl; 
        else if (option ==2 ) 
            cout<<"Welcome to second program !"<<endl; 
        else if (option == 3) goto menu; 
        else 
            cout<<"Invalid option !! Try again!"<<endl;
    return 0; 
}