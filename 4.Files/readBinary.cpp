#include<iostream>
#include<fstream>
using namespace std; 

struct Student{
    string name; 
    int age ; 
    float marks; 
}; 

void writeStudent(ofstream &out , const Student &s ){
   size_t nameLen = s.name.length();
   out.write(reinterpret_cast<const char*>(&nameLen), sizeof(nameLen));
   out.write(s.name.c_str(), nameLen);
   out.write(reinterpret_cast<const char*>(&s.age), sizeof(s.age));
   out.write(reinterpret_cast<const char*>(&s.marks), sizeof(s.marks));
}
Student readStudent(ifstream &in ){
   Student s;
   size_t nameLen;
   in.read(reinterpret_cast<char*>(&nameLen), sizeof(nameLen));
   s.name.resize(nameLen); // allocate memory for name
   in.read(&s.name[0], nameLen);
   in.read(reinterpret_cast<char*>(&s.age), sizeof(s.age));
   in.read(reinterpret_cast<char*>(&s.marks), sizeof(s.marks));
   return s;
}

int main(){
    system("clear");
    // Create empty struct instance
    
    Student student1 ; 
    Student s={"Piseth",22,98.5}; 
    ofstream file("student.binary", ios::binary); 
    writeStudent(file, s); 
    file.close(); 

    ifstream file2("student.binary", ios::binary); 
    student1 = readStudent(file2); 

    cout<<"DATA OF STUDENT1: "<<endl; 
    cout<<"Student Name: "<<student1.name<<endl; 
    cout<<"Student agee is : "<<student1.age<<endl; 
    cout<<"Student marks : "<<student1.marks<<endl; 
    return 0 ; 
}