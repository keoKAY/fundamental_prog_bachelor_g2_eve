#include<iostream>
using namespace std; 

int main(){
    system("clear"); // cls -> for window 
    int age = 100;  
    short val = 34; 
    char gender= 'm'; 
    bool isValid = true; 

    int value = 10; 
    int numberOfThing; 
    const float PI=3.14; 
    value = 14; 


    cout<<"Age = "<<sizeof(age)<<" bytes"<<endl; 
    cout<<"Val= "<<sizeof(val)<<" bytes"<<endl; 
    cout<<"Gender = "<<sizeof(gender)<<"byte"<<endl; 
    cout<<"IsValid = "<<sizeof(isValid)<<"byte"<<endl; 
    return 0; 
}