#include<iostream>
using namespace std; 


void logo(){
cout<<"     _             _            _                       "<<endl; 
cout<<" ___| |_ _   _  __| | ___ _ __ | |_    __ _ _ __  _ __  "<<endl; 
cout<<"/ __| __| | | |/ _` |/ _ \\ '_ \\| __|  / _` | '_ \\| '_ \\ "<<endl; 
cout<<"\\__ \\ |_| |_| | (_| |  __/ | | | |_  | (_| | |_) | |_) |"<<endl; 
cout<<"|___/\\__|\\__,_|\\__,_|\\___|_| |_|\\__|  \\__,_| .__/| .__/ "<<endl; 
cout<<"                                           |_|   |_|    "<<endl; 
}

float findAverage(float eng, float math, float cpp){
    return (eng + math + cpp)/ 3 ;
}

char findGrade(float average){
    if(average>=95) return 'A'; 
    else if (average>=85) return 'B'; 
    else if (average>=75) return 'C'; 
    else if (average>=65) return 'D'; 
    else if (average>=50) return 'E'; 
    else return 'F'; 
}

int main(){
    system("clear"); 
    string name,gender,classroom; 
    float eng,math,cpp, average; 
    char grade; 

    logo(); 
    cout<<"----------------<INPUT>----------------"<<endl; 
    cout<<"Enter student name: "; 
    getline(cin,name); // first lastname 
    cout<<"Enter student gender: "; 
    cin>>gender; // male|female
    cin.ignore(); 

    cout<<"Enter classroom: "; 
    getline(cin,classroom); 
    cout<<"Enter student scores(eng,math,cpp): "<<endl; 
    cin>>eng; 
    cin>>math; 
    cin>>cpp; 


    cout<<"\n----------------<<OUTPUT>>---------------"<<endl; 
    average = findAverage(eng,math,cpp); 
    cout<<"Grade: "<<findGrade(average)<<endl; 
    cout<<"Average Score: "<<average<<endl; 

    cout<<"--------- Student Details--------"<<endl; 
    cout<<"Student Name: "<<name<<endl; 
    cout<<"Student gender: "<<gender<<endl; 
    cout<<"Student Classroom : "<<classroom<<endl; 
    cout<<"Student Scores(math-eng-cpp): "
        <<math<<"-"<<eng<<"-"<<cpp<<endl; 
    return 0 ; 
}