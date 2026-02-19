#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int a , b  ; 
    char op, option; 
    float result=0; 

    do{
    cout<<"---------------[ Demo Calculator ]---------"<<endl; 
    cout<<"Enter value A : "; cin>>a; 
    cout<<"Enter value B : "; cin>>b; 

    cout<<"Choose (+,-,*,/,%) : "; 
    cin>>op; 
 
    switch(op){
        case '+':result = a + b; break; 
        case '-': result =a - b; break; 
        case '*': result = a * b; break; 
        // casting 
        case '/': result = (float) a / b; break; 
        case '%': result = a % b ; break; 
        default: 
            cout<<"Error!! Invalid operators..."<<endl; 
            cout<<"Only Choose:  (+,-,*,/,%) "<<endl; 
            break; 

    }
    cout<<"Result is : "<<result<<endl; 

    cout<<"Do you want to continue? 'Y|N': " ; 
    cin>>option; 
}while(option!='n'); 
    return 0 ; 
}