#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // 1. if 
    char gender = 'm'; 
    if(gender == 'f') 
        cout<<"Gender is female"<<endl; 
    else if(gender== 'm') 
        cout<<"Gender is male!"<<endl; 
    else
         cout<<"Invalid gender!! only 'm' or 'f' is allowed"<<endl; 

    return 0 ; 
}