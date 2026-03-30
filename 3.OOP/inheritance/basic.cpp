#include<iostream>
using namespace std; 
class Person{
    public: 
        string name; 
        int age; 
        string gender; 
    
    Person(){
        cout<<"Person constructor....!"<<endl; 
    }
    Person(string name, int age , string gender){
        this->name = name; 
        this->age = age; 
        this->gender = gender; 
    }

    void input(){
        cout<<"Enter Name: "; 
        getline(cin,name); 
        cout<<"Enter gender: "; 
        cin>>gender; 
        cout<<"Enter age: "; 
        cin>>age; 
    }
    void output(){
        cout<<"Name is : "<<name<<endl; 
        cout<<"Gender is : "<<gender<<endl; 
        cout<<"Age is : "<<age<<endl; 
    }
}; 

class Student : public Person{
    public: 
        float average; 
        string classroom;

        Student(){}
        Student(string name, int age , string gender,float average, string classroom):Person(name,age,gender){

            this->average = average; 
            this->classroom = classroom; 
        }

        // Override function 
        void input(){
            Person::input();
            cout<<"Enter average: "; 
            cin>>average; 
            cout<<"Enter classroom: "; 
            cin>>classroom; 
        } 
        void output(){
            Person::output(); 
            cout<<"Average: "<<average<<endl; 
            cout<<"Classroom: "<<classroom<<endl; 
        }
}; 
int main(){
    system("clear"); 
    Student stu1("james",22male",96,"devops"); 
    // accessing the values
    // stu1.input(); 
    stu1.output(); 
    
    return 0; 
}