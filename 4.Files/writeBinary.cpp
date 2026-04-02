#include<iostream>
#include<fstream>
using namespace std; 

struct Student{
    string name; 
    int age ; 
    float marks; 
}; 

int main(){
    system("clear"); 
    Student s = {"james", 12 , 90.5}; 
    ofstream file("student.binary", ios::binary); 
    file.write((char*)&s, sizeof(s)); 
    file.close(); 
    cout<<"Write Data Successfully ✅"<<endl; 
    return 0 ; 
}