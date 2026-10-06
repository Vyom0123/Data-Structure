#include <iostream>
using namespace std;

void menu()
{
    int choice;

    cout << "\n--- RESTAURANT MENU ---\n";
    cout << "1. Plain Maggi\n";
    cout << "2. Spicy Maggi\n";
    cout << "3. Cheese Maggi\n";
    cout << "4. Spicy Cheese Maggi\n";
    cout << "5. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected Plain Maggi.\n";
            break;

        case 2:
            cout << "You selected Spicy Maggi.\n";
            break;

        case 3:
            cout << "You selected Cheese Maggi.\n";
            break;

        case 4:
            cout << "You selected Spicy Cheese Maggi.\n";
            break;

        case 5:
            cout << "Thank you! Exiting...\n";
            return;

        default:
            cout << "Invalid choice!\n";
    }

    menu();  
}

int main()
{
    menu();
    return 0;
}
