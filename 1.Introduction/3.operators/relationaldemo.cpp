#include<iostream>
using namespace std; 
// relational operator demo 
int main(){
    system("clear"); 
    const int PASS=123; 

    /*int password; 
    string username; 

    cout<<"Enter your username:"; 
    cin>>username; 
    cout<<"Enter your password: ";
    cin>>password; 

    if(password == PASS && username == "admin" ){
        cout<<"Login successfully!"<<endl; 
    }else{
        cout<<"Login failed! Incorrect credentials"<<endl; 
    }
        */

    // Scholarship logic 
    // gender=F, grade=12
    char gender = 'M'; 
    int grade = 10; 
    if(gender=='F' || grade== 12){
        cout<<"you are elligible!"<<endl;    
    }
    else {
        cout<<"YOU ARE NOT elligible!"<<endl; 
    }
    return 0; 
}