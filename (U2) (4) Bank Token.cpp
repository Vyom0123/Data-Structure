
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> tokens;
    int token;

    cout << "Enter 5 customer token numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> token;
        tokens.push(token);
    }

    cout << "\nServing Customers:\n";

    while (!tokens.empty()) {
        cout << "Serving Token: " << tokens.front() << endl;
        tokens.pop();
    }
//code ends here
    return 0;
}
