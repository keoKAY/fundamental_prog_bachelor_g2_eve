#include<iostream> 
using namespace std; 
int main(){
    system("clear"); 
    // these are variables 
    int hours; 
    int rate; 

    cout<<" ----------[Salary Finder]---------- "<<endl; 
    cout<<"Enter hours: "; cin>>hours;
    cout<<"Enter rate: "; cin>>rate; 

    int salary = hours * rate; 
    cout<<"Result = "<<salary<<"$"<<endl;
    return 0; 
}