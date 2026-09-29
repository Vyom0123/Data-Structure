#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    Student students[100];
    int count = 0;
    int choice, roll;
    
    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll No: ";
                cin >> students[count].rollNo;

                cout << "Enter Marks: ";
                cin >> students[count].marks;

                count++;
                cout << "Student added successfully!\n";
                break;

            case 2:
                if(count == 0)
                {
                    cout << "No student records found.\n";
                }
                else
                {
                    cout << "\nRoll No\tMarks\n";
                    for(int i = 0; i < count; i++)
                    {
                        cout << students[i].rollNo << "\t"
                             << students[i].marks << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Roll No to search: ";
                cin >> roll;

                {
                    bool found = false;

                    for(int i = 0; i < count; i++)
                    {
                        if(students[i].rollNo == roll)
                        {
                            cout << "Student Found!\n";
                            cout << "Roll No: " << students[i].rollNo << endl;
                            cout << "Marks: " << students[i].marks << endl;
                            found = true;
                            break;
                        }
                    }

                    if(!found)
                        cout << "Student not found.\n";
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}
