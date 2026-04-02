#include<iostream>
#include<vector>
using namespace std; 

class Worker{
    private: 
        int id; 
        string name,gender; 
        float salary; 
    public: 
        Worker(){}
        Worker(int id , string name, string gender, float salary ){
            this->id = id; 
            this->name = name; 
            this->gender = gender; 
            this->salary = salary; 
        }

        void input(){
            cout<<"Enter ID: "; 
            cin>>id; 
            cin.ignore(); 
            cout<<"Enter Name: "; 
            getline(cin,name); 
            cout<<"Enter Gender: "; 
            cin>>gender; 
            cout<<"Enter Salary: "; 
            cin>>salary; 
        }
        void output(){
            cout<<id<<" - "<<name<<" - "<<gender<<" - "<<salary<<"$"<<endl; 
        }

        void update(){
            cout<<"Enter New Name: "; 
            getline(cin,name); 
            cout<<"Enter New Gender: "; 
            cin>>gender; 
            cout<<"Enter New Salary: "; 
            cin>>salary; 
        }

};
int main(){
    system("clear"); 
    vector<Worker> workerList; 
    vector<string> mainMenu={
        "1. Add new Worker Data ", 
        "2. Edit Worker Data ", 
        "3. Show All Worker Data ", 
        "4. Delete Worker Data ", 
        "5. Exit "
    }; 

    int option ; 
    do{
        // print the main Menu here! 
            cout<<"Choose your option (1-5): "; 
            cin>>option; 
    }while(option!=5); 



    return 0 ; 
}
