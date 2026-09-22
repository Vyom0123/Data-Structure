#include <iostream>
using namespace std;

int main() {
    int rollNo[5];

    // Input roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> rollNo[i];
    }

    // Display roll numbers
    cout << "\nRoll numbers of students are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " = " << rollNo[i] << endl;
    }

    return 0;
}
//code ends here
