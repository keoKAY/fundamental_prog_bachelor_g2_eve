#include <iostream>
using namespace std;
void menu(){
      cout << "-----------[Main Menu]-----------" << endl;
        cout << "1. Salary Finder " << endl;
        cout << "2. Money Exchange " << endl;
        cout << "3. Calculator " << endl;
        cout << "4. Exit " << endl;

        cout << "-> Choose your option(1-4):";
}

void salaryFinder(){
    string name; 
            char gender; 
            float hours , wage , salary ; 
            cout << "=============<<Salary Finder>>=========" << endl;
            
            cout<<"Enter name: "; cin>>name; 
            cout<<"Enter gender: "; cin>>gender; 
            cout<<"Enter hours : "; cin>>hours; 
            cout<<"Enter wage: "; cin>>wage; 
            salary = hours * wage; 

            cout<<"\n===========<OUTPUT>============"<<endl; 
            cout<<"Worker name is : "<<name<<endl; 
            cout<<"Worker gender is : "<<gender<<endl; 
            cout<<"Worker Salary is : "<<salary<<"$"<<endl;
}

int main()
{

    system("clear");
    int option;
    do
    {
        menu(); 
        cin >> option;

        switch (option)
        {
        case 1:
        {
             salaryFinder(); 
            break;
        }
        case 2:

            cout << "=============<<Money Exchange >>=========" << endl;

            break;
        case 3:
        {
           
            cout << "=============<< Calculator >>=========" << endl;
           
            break;
        }
        case 4:
            cout << " ❌ Exit from the program!! "
                 << endl;
            break;
        default:
            cout << " ❌ Invalid option! Choose again from 1- 4"
                 << endl;
        }
    } while (option != 4);
    return 0;
}