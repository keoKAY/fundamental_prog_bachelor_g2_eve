#include<iostream>
using namespace std; 
// Practice001-if-else-Salary finder 
int main(){
    system("clear"); 
    // input 
    string name;
    char gender; 
    float hours , wage ,originalSalary, salary = 0 , tax = 0 ; 

    cout<<"------------<<Input Worker Info>>----------"<<endl; 
    cout<<"Enter name: "; cin>>name; 
    cout<<"Enter gender: "; cin>>gender; 
    cout<<"Enter working hours(hrs): "; cin>>hours; 
    cout<<"Enter working rate($): "; cin>>wage; 


    // DRY -> Don't Repeat yourself 

    originalSalary = hours * wage; 
// nested if 
    if(originalSalary >= 1000 ){

        if(gender == 'f') tax = 0.3; 
        else tax =  0.5;  

    }
    salary = originalSalary * (1 - tax ); 

    //output
    cout<<"\n --------------<<Output Worker>>---------------"<<endl; 
    cout<<"Worker name : "<<name<<endl; 
    cout<<"Worker gender : "<<gender<<endl; 
    cout<<"Original Salary: "
        <<originalSalary
        <<"$"<<endl; 
    cout<<"Tax = "<<(tax*100)<<"%"<<endl; 
    cout<<"Salary after taxed: "<<salary<<"$"<<endl;
    return 0; 
}