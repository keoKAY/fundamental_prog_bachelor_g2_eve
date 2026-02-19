// Student management console 

#include<iostream>
using namespace std; 

struct Student {
    string name,gender,classroom; 
    float eng,math,cpp, average; 
    char grade; 
    float findAverage(){
        return (eng+math+cpp)/3; 
    }
    char findGrade(float average){
        if(average>=95) return 'A'; 
        else if (average>=85) return 'B'; 
        else if (average>=75) return 'C'; 
        else if (average>=65) return 'D'; 
        else if (average>=50) return 'E'; 
        else return 'F'; 
    }
    void input(){
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
    }
    void output(){
        cout<<"\n----------------<<OUTPUT>>---------------"<<endl; 
        average = findAverage(); 
        cout<<"Grade: "<<findGrade(average)<<endl; 
        cout<<"Average Score: "<<average<<endl; 

        cout<<"--------- Student Details--------"<<endl; 
        cout<<"Student Name: "<<name<<endl; 
        cout<<"Student gender: "<<gender<<endl; 
        cout<<"Student Classroom : "<<classroom<<endl; 
        cout<<"Student Scores(math-eng-cpp): "
            <<math<<"-"<<eng<<"-"<<cpp<<endl; 
    }
};
int main(){
    system("clear"); 
    Student student1; 

    student1.input(); 
    student1.output();
    return 0 ; 
}