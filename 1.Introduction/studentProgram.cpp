#include<iostream> 
using namespace std; 
int main(){
    system("clear"); 
    // Declare variable 
    string studentName,classroom; 
    char gender; 
    float math , eng, cpp , avg; 
    //float avg; 
    // float math; 
    // float eng; 
    // float cpp; 
    cout<<"====[Student Program]====="<<endl; 
    cout<<"Enter Name : "; cin>>studentName; 
    cout<<"Enter Classroom : "; cin>>classroom; 
    cout<<"Enter Gender: "; cin>>gender; 

    cout<<"Enter ENG: "; cin>>eng; 
    cout<<"Enter CPP: "; cin>>cpp; 
    cout<<"Enter MATH: "; cin>>math; 

    avg = (eng + cpp + math )/3; 

    cout<<"\n======[Student Info]======="<<endl; 
    cout<<"Name:"<<studentName<<endl; 
    cout<<"Gender : "<<gender<<endl; 
    cout<<"Classroom: "<<classroom<<endl; 
    cout<<"(CPP,ENG,MATH): "
        <<cpp<<" "
        <<eng<<" "
        <<math<<endl; 
    cout<<"Average: "<<avg<<endl; 
    return 0 ; 
}