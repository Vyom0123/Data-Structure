#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> orders;
    int orderNo;

    // Store 5 customer orders
    cout << "Enter 5 customer order numbers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> orderNo;
        orders.push(orderNo);
    }

    // Process orders in the same order
    cout << "\nProcessing Orders:\n";

    while (!orders.empty())
    {
        cout << "Processing Order: " << orders.front() << endl;
        orders.pop();
    }

    return 0;
}
