
#include<iostream>
using namespace std; 
int main(){
    system("clear"); // clearing screen 
    // initialize 
    // float a = 3; 
    // float b = 2; 
    int a = 3; 
    int b = 2; 

    int sum = a + b; 
    int sub = a - b; 
    int mul = a * b; 
    // casting ( int -> float )
    float div = a / (float) b; 
    int mol = a % b; 

    cout<<"Sum="<<sum<<endl; 
    cout<<"sub ="<<sub <<endl; 
    cout<<"mul="<<mul<<endl; 
    cout<<"div="<<div<<endl; 
    cout<<"mol="<<mol<<endl; 

    return 0 ; 
}