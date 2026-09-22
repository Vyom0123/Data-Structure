#include <iostream>
using namespace std;

int main()
{
    int student[5];
    int searchRoll;

    cout << "Enter 5 Roll Numbers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> student[i];
    }

    cout << "Enter the Roll Number to Search: ";
    cin >> searchRoll;

    for (int i = 0; i < 5; i++)
    {
        if (student[i] == searchRoll)
        {
            cout << "Student Found";
            return 0;
        }
    }

    cout << "Student Not Found";

    return 0;
}
//code ends here
