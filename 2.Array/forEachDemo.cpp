#include<iostream>
using namespace std; 
int main(){

    system("clear"); 
    float scores[]={10,20,30,40,50,60,70,80}; 

    cout<<"Using foreach : "<<endl; 
    for(int val : scores ){
        cout<<val<<" "; 
    }
    cout<<endl; 

    cout<<"Using auto for type flexibility: "<<endl; 
    for(auto val: scores){
        cout<<val<<" "; 
    }
}