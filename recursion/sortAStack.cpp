#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int> &s, int a)
{
    if (s.empty())
    {
        s.push(a);
        return;
    }
    if (s.top() <= a)
    {
        s.push(a);
        return;
    }
    if (s.top() > a)
    {
        int b = s.top();
        s.pop();
        insert(s, a);
        s.push(b);
    }
}

void sort(stack<int> &s)
{

    if (s.empty())
        return;

    int a = s.top();
    s.pop();
    sort(s);
    insert(s, a);
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
    sort(s);

    while (!s.empty())
    {

        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}