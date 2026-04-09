#include<iostream>
#include<vector>
#include<tabulate/table.hpp>
#include<xlnt/xlnt.hpp> // For working with excel 
using namespace std; 
using namespace tabulate; 
using namespace xlnt; 
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
            cin.ignore(); 
            getline(cin,name); 
            cout<<"Enter New Gender: "; 
            cin>>gender; 
            cout<<"Enter New Salary: "; 
            cin>>salary; 
        }

        // getter and setter 
        int getId(){return id; }
        string getName(){return name; }
        string getGender(){return gender; }
        float getSalary(){return salary; }

        void setId(int id){ this->id = id; }
        void setName(string name ){ this->name = name; }
        void setGender(string gender ){this->gender = gender;}
        void setSalary(float salary ){this->salary = salary; }
};

void printMenuTable(vector<string> items){
    Table table; 
    table.add_row({"<<Worker Management Console>>"});
    for(auto item: items)
        table.add_row({item });  

    table[0].format().font_style({FontStyle::bold}); 
    
    cout<<table<<endl; 
}
void printWorkerTable(vector<Worker> workers){
    Table table; 
    table.add_row({"ID","Name","Gender","Salary"}); 
    for(auto worker: workers ){
        table.add_row({
            to_string(worker.getId()), 
            worker.getName(), 
            worker.getGender(), 
            to_string(worker.getSalary())
        });
    }
     table[0].format().font_style({FontStyle::bold});
     cout<<table<<endl; 
}

void pressEnter(){
    cout<<"-------------------<<Press Enter to continue>>-----------"<<endl; 
    cin.ignore(); 
     cin.get(); 
}
int main(){
    system("clear"); 
    vector<Worker> workerList; 
    vector<string> mainMenu={
        "1. Add new Worker Data ", 
        "2. Edit Worker Data ", 
        "3. Show All Worker Data ", 
        "4. Delete Worker Data ", 
        "5. Search Worker Data  ", 
        "6. Exit "
    }; 

    workerList.push_back(Worker(1001,"koko","male",400)); 
    workerList.push_back(Worker(1011,"james","male",900)); 
    workerList.push_back(Worker(1031,"bona","female",600)); 
    int option ; 
    do{
            printMenuTable(mainMenu); 
            cout<<"Choose your option (1-6): "; 
            cin>>option; 
            switch(option){
                case 1: {

                    Worker newWorker; 
                    newWorker.input(); 
                    // Add data to vector 
                    workerList.push_back(newWorker); 
                    cout<<" ✅Successfully Added the new worker"<<endl; 

                }break; 
                case 2: {
                    
                    int studentId; 
                    cout<<"Enter student ID to update: "; 
                    cin>>studentId; 

                    auto it = find_if(
                        workerList.begin(),
                        workerList.end(), 
                        [&](Worker worker){
                            return worker.getId()==studentId;
                        } ); 

                    if(it!=workerList.end()){
                        cout<<"Result found ✅"<<endl; 
                        Worker result = *it; 
                        result.output(); 
                        result.update(); 
                        *it = result; 
                    }else{
                        cout<<"Failed to update, Student ID = "<<studentId<<" Doens't exist ❌"<<endl; 
                    }

                
                }break; 
                case 3: {
                    printWorkerTable(workerList); 
                }break; 
                case 4: {
                    
                    int studentId; 
                    cout<<"Enter student ID to Delete: "; 
                    cin>>studentId; 

                    auto it = find_if(
                        workerList.begin(),
                        workerList.end(), 
                        [&](Worker worker){
                            return worker.getId()==studentId;
                        } ); 

                    if(it!=workerList.end()){
                     // code for delete 
                        workerList.erase(it); 
                        cout<<" ✅ Succesfully remove the worker "<<endl; 
                    }else{
                        cout<<"Failed to Delete, Student ID = "<<studentId<<" Doens't exist ❌"<<endl; 
                    }

                
                }break;
                case 5:{
                    int studentId; 
                    cout<<"Enter student ID to search: "; 
                    cin>>studentId; 

                    auto it = find_if(
                        workerList.begin(),
                        workerList.end(), 
                        [&](Worker worker){
                            return worker.getId()==studentId;
                        } ); 

                    if(it!=workerList.end()){
                        cout<<"Result found ✅"<<endl; 
                        Worker result = *it; 
                        result.output(); 
                    }else{
                        cout<<"Student ID = "<<studentId<<" Doens't exist ❌"<<endl; 
                    }

                } break; 
                case 6: 
                    cout<<"Exit from the program!"<<endl; 
                    break; 
                default: 
                    cout<<"Invalid option !! Choose again (1-6)"<<endl; 
                    break; 
            }

            pressEnter(); 
    }while(option!=6); 



    return 0 ; 
}
