#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // variables for the program 
    string name; 
    char gender; 
    float hours, wage, salary=0,total=0, bonus=0; 

    // input the data 
    cout<<"\n -------------[INPUT]---------------"<<endl; 
    cout<<"Enter name: "; getline(cin,name); 
    cout<<"Enter gender: ";  cin>>gender; 
    cout<<"Enter hours(hrs): ";  cin>>hours; 
    cout<<"Enter wage($): ";  cin>>wage; 

    // process here ! 
     salary = hours * wage ; 
     if(hours>=100){
        if(gender=='f' || gender =='F') bonus = 0.5; 
        else bonus=0.4; 
     }
     total = salary + salary*bonus; 
    // output 
    cout<<"\n --------------[OUTPUT]--------------"<<endl; 
    cout<<"Worker name is : "<<name<<endl; 
    cout<<"Worker gender: "<<gender<<endl; 
    cout<<"Original Salary: "<<salary<<"$"<<endl;
    cout<<"Bonus: "<<(bonus*100)<<"%"<<endl;  
    cout<<"Total Salary: "<<total<<"$"<<endl; 
    return 0 ; 
}