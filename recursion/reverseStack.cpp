#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s)
{
    
}

int main()
{
    stack<int> s;
    s.push(-1);
    s.push(3);
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(0);
    reverse(s);

    while (!s.empty())
    {

        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
