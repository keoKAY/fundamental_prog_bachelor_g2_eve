#include<iostream>
using namespace std; 

// Competitive Programming 
// - Hackerrank 
// - Leetcode 
struct Worker{
    string name, gender; 
    float hours,wage; 

    // used to provide default value for the struct instance 
    Worker(){
        name="annonymous";
        gender = "unknown";  
        hours=wage=0; 
    }
    Worker(string n,string g,float h , float w ){
        name = n; 
        gender = g; 
        hours = h; 
        wage = w; 
    }
    void output(){
        cout<<"Worker name : "<<name<<endl; 
        cout<<"Worker gender: "<<gender<<endl; 
        cout<<"Hours: "<<hours<<"hrs"<<endl; 
        cout<<"Wage: "<<wage<<"$"<<endl; 

    }
}; 
int main(){
    system("clear"); 
    // initialize the value for the instance of struct 
    Worker worker1("james","male",100,50); 
    Worker worker2; 
    // worker1.input(); 
    worker1.output(); 
    worker2.output(); 
    return 0 ; 
}