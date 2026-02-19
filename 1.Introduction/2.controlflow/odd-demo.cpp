#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    int n , sum = 0 ; 
    cout<<"Enter n: "; 
    cin>>n; 
    cout<<"All values: "; 
    for(int i = 1 ; i<=n; i++){
        // continue -> skip 
        // skip all even number of i 
        if(i%2==0) continue; 
        cout<<" "<<i; 
        sum = sum + i; 
    }
    cout<<endl; 
    cout<<"Sum of odd is: "<<sum<<endl; 
    return 0 ; 
}