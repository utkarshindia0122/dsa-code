#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q; //declaring the queue

    q.push(1);

    q.push(2);

    q.push(3);

    q.push(4); // insert 4 from front

    q.emplace(5); // insert 5 from front

    cout << "\nsize " << q.size();           //return size
    cout << "\nfront element " << q.front(); //return front element
    cout << "\nback " << q.back();           //returns last element

    cout << endl
         << " queue is " << q.empty() << endl; //returns bool that queue is empty

    q.pop();
    queue<int> temp;// this is for storing the queue because while printing the que we are poping
    while (!q.empty())// printing the queue
    {
        cout << q.front() << " ";
        temp.push(q.front());
        q.pop();
    }
    cout << endl
         << " queue is " << q.empty() << endl; //returns bool that queue is empty

cout<<endl;
    while (!temp.empty())
    {
        cout << temp.front() << " ";

        temp.pop();
    }
}
