#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int n ; 

    cout<<"Enter n (number of score): "; 
    cin>>n; 
    if(n<=0) {
        cout<<"Error : N must be greater than 0 ❌"<<endl; 
        return 0; 
    }

    // create array of n size 
    int scores[n]; 

    for(int i = 0;i<n; i++){
        cout<<"Enter score index = "<<i <<":"; 
        cin>>scores[i]; 
    }

    cout<<"All scores: "<<endl; 
    for(int i = 0; i<n; i++){
         cout<<scores[i]<<" "; 
    }
    cout<<endl; 
    
    int sum = 0 ; 
    for(int i = 0; i<n; i++){
        sum = sum + scores[i]; 
    }
    cout<<"result is : "<<sum<<endl; 
    float average = sum / n; 
    cout<<"average is : "<<average<<endl; 
    return 0; 
}