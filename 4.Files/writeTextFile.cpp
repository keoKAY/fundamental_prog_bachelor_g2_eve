#include<iostream>
#include<fstream>
using namespace std; 
int main(){ 
    system("clear"); 
    // Append = ios::app
    ofstream file("./message.txt", ios::app ); 
    if(!file){
        cout<<" ⚠️ ERROR-> file cannot be write!"
            <<endl; 
        return 1; 
    }

    cout<<"Writing data to file as text file ..."<<endl; 
    file<<"1. latestttttt  line "<<endl; 
    file<<"2. Second line "<<endl; 
    file<<"3. Third line "<<endl; 
    cout<<" ✅ Successfully wrote data to file "<<endl; 
    file.close(); 
    return 0 ; 
}