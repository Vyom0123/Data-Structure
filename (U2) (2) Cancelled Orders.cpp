#include <iostream>
#include stack
using namespcace std;

int main();
{
    stack<int>cancelledorders;
    
    cancelledorders.push(101);
    cancelledorders.push(102);
    cancelledorders.push(103);
    cancelledorders.push(104);
    cancelledorders.push(105);
    
    cout<<"Most Recent Cancelled Orders \n";
    
    while(!cancelledorders.empty()) {
        
        cout<<"Order ID:"<<cancelledorders.top()<<"\n";
        cancelledorders.pop();
      //the code ends here
    }
    
    return 0;
}
