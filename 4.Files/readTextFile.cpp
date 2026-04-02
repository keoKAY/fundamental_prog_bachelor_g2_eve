#include<iostream>
#include<fstream>
using namespace std; 
int main(){ 
    system("clear"); 
    // app -> append
    ifstream file("./message.txt"); 
    if(!file){
        cout<<"Cannot read data from file! ❌"
        <<endl; 
        return 1; // Exit from the program 
    }
    // Code to read data from file 
    string line ; 
    cout<<"FILE CONTENT: "<<endl; 
    while(!file.eof()){
        getline(file,line); 
        cout<<line<<endl; 
    }
    file.close(); 
    return 0 ; 
}