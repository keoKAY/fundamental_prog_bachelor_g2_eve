#include <iostream>
using namespace std;
struct Worker
{
    int id;
    string name, gender;
    float hours, wage;

    Worker() {}
    Worker(int id, string name, string gender, float hours, float wage)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->wage = wage;
        this->hours = hours;
    }

    void input()
    {
        cout << "Enter Worker  ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Worker Name: ";
        getline(cin, name);
        cout << "Enter Worker gender: ";
        cin >> gender;
        cout << "Enter Worker hours: ";
        cin >> hours;
        cout << "Enter Worker wage: ";
        cin >> wage;
    }
    void output()
    {

        cout << id << " - " << name << " - " << gender << " - " << hours << " - " << wage << endl;
    }
};

void waitForEnterKey(){
    cout<<"..............Press Enter to Continue..............."<<endl; 
    cin.ignore(); 
    cin.get(); 
}
int main()
{
    system("clear");
    int n; // number of max worker
    cout << "===========<<Getting started>>=========" << endl;
    cout << "Enter max number of worker to store: ";
    cin >> n;
    // Validation
    if (n <= 0)
    {
        cout << "\nERROR: Unable to boot the system !!" << endl;
        cout << " ⚠️ Value must be greater than 0 " << endl;
        return 0; // Exit
    }
    Worker workerList[n];

    int option;

    do
    {
        system("clear"); // cls
        cout << "================<<Worker Console APP>>===========" << endl;
        cout << "1. Add New Worker Record " << endl;
        cout << "2. Show All Worker Records " << endl;
        cout << "3. Update Worker Record " << endl;
        cout << "4. Delete Worker Record " << endl;
        cout << "5. Search Worker Record " << endl;
        cout << "6. Exit " << endl;
        cout << "---> CHoose your option(1-6): ";
        cin >> option;

        // switch - case
        switch (option)
        {
        case 1:
        {
            cout << "---------[Add New Worker]----------" << endl;
        }
        break;
        case 2:
        {
            cout << "---------[Show all Workers]----------" << endl;
        }
        break;
        case 3:
        {
            cout << "---------[Update Worker Data]----------" << endl;
        }
        break;
        case 4:
        {
            cout << "---------[Delete Worker Data]----------" << endl;
        }
        break;
        case 5:
        {
            cout << "---------[Search Worker]----------" << endl;
        }
        break;
        case 6:
            cout << "Exit from the program" << endl;
            break;
        }

        waitForEnterKey(); 
    } while (option != 6);
    return 0;
}