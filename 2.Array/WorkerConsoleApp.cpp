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
    float getSalary() { return hours * wage; }
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
    void update()
    {

        cout << "Enter Worker Name: ";
        cin.ignore();
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

void waitForEnterKey()
{
    cout << "..............Press Enter to Continue..............." << endl;
    cin.ignore();
    cin.get();
}

int searchWorkerByID(Worker workerList[], int counter)
{
    int searchId;
    cout << "Enter workerID to search: ";
    cin >> searchId;
    for (int i = 0; i < counter; i++)
    {
        if (searchId == workerList[i].id)
        {
            return i;
        }
    }
    return -1; // not found
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
    int counter = 0;
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
            if (counter >= n)
            {
                cout << " ⛔ Size is full! Cannot add new record " << endl;
                break;
            }
            // get input of worker data from user
            Worker newWorker;
            newWorker.input();

            // assign values to array (workerList)
            workerList[counter] = newWorker;
            counter = counter + 1;
            cout << " ✅ Successfully added new worker record!" << endl;
        }
        break;
        case 2:
        {
            cout << "---------[Show all Workers]----------" << endl;
            if (counter == 0)
            {
                cout << " ⚠️ No worker data to show " << endl;
                break;
            }
            int showOption;
            cout << "1. Sort By Salary (Descending)" << endl;
            cout << "2. Sort By ID (Ascending)" << endl;
            cout << "---> Choose your option: ";
            cin >> showOption;
            switch (showOption)
            {
            case 1:
                // Show data by salary order
                for (int i = 0; i < counter; i++)
                {
                    for (int j = 0; j < counter - i - 1; j++)
                    {
                        if (workerList[j].getSalary() < workerList[j + 1].getSalary())
                        {
                            swap(workerList[j], workerList[j + 1]);
                        }
                    }
                }
                for (int i = 0; i < counter; i++)
                {
                    cout << (i + 1) << ". ";
                    workerList[i].output();
                }
                break;
            case 2:
                // show data by id
                for (int i = 0; i < counter; i++)
                {
                    for (int j = 0; j < counter - i - 1; j++)
                    {
                        if (workerList[j].id > workerList[j + 1].id)
                        {
                            swap(workerList[j], workerList[j + 1]);
                        }
                    }
                }
                for (int i = 0; i < counter; i++)
                {
                    cout << (i + 1) << ". ";
                    workerList[i].output();
                }
                break;
            default:
                cout << "Invalid option! Try again from 1-2" << endl;
                break;
            }
        }
        break;
        case 3:
        {
            cout << "---------[Update Worker Data]----------" << endl;
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Result cannot be found!" << endl;
            }
            else
            {
                // Update data
                workerList[index].update();
                cout << " ✅ Update data successfully!" << endl;
            }
        }
        break;
        case 4:
        {
            cout << "---------[Delete Worker Data]----------" << endl;
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Result not found!! " << endl;
            }
            else
            {

                for (int i = index; i < counter - 1; i++)
                {
                    workerList[i] = workerList[i + 1];
                }
                counter--;
                cout << " ✅ Delete data successfully!" << endl;
            }
        }
        break;
        case 5:
        {
            cout << "---------[Search Worker]----------" << endl;
            int index = searchWorkerByID(workerList, counter);
            if (index == -1)
            {
                cout << " ❌ Result cannot be found!! " << endl;
            }
            else
            {
                workerList[index].output();
            }
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