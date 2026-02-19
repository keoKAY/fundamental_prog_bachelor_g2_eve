#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int n,sum=0; 
    cout<<"Enter n : "; 
    cin>>n; 
    for(int i = 1; i<=n; i++){
        cout<<"I="<<i<<endl; 
        sum = sum + i; 
    }
    cout<<"Sum is : "<<sum<<endl; 
    return 0 ; 
}