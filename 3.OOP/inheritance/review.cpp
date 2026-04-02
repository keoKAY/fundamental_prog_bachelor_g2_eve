#include<iostream>
using namespace std; 

class Person{
    public: 
        string name; 
        string gender; 
        int age; 
        Person(){ age = 0 ; }
        Person(string name, string gender , int age ){
            this->name = name; 
            this->age = age; 
            this->gender = gender; 
        }
        void output(){
            cout<<"Name is : "<<name<<endl; 
            cout<<"Gender is "<<gender<<endl; 
            cout<<"Age is : "<<age<<endl; 
        }
}; 

// using inheritance concept 
class Worker : public Person{
    public: 
        float hours, wage; 
        Worker(){} // Automatically called to Person constructor 
        Worker(string name, string gender , int age , float hours, float wage ): Person(name,gender,age){
            this->hours = hours; 
            this->wage = wage; 

        }

        // function override 
        void output(){
            Person::output(); // calling to the Person output 
            cout<<"Hours is: "<<hours<<endl; 
            cout<<"Wage is : "<<wage<<endl; 
        }

}; 

int main(){
    system("clear"); 

    Worker worker1("james","male",22,100,30) ; 
    worker1.output(); 
    return 0 ; 
}