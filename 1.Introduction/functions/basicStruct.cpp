#include<iostream>
using namespace std;

struct Student{
    // variables 
    string name; 
    int age; 
    string classroom; 
    // function 

    void output(){
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
        cout<<"Classroom:"<<classroom<<endl; 
    }
}; 
int main(){
    system("clear"); 

    Student student1, student2;  
    // assign values 
    student1.name = "james"; 
    student1.age = 20; 
    student1.classroom = "AI Labs"; 

    student1.output();

    return 0 ; 
}