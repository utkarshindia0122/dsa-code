#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<string> d; //declare the deque
    int n = 0;
    d.push_back("hello,");//inserting elements from back
    n++;
    d.push_back("how ");
    n++;
    d.push_back("are ");
    n++;
    d.push_back("you ");
    n++;
    d.push_back("?");
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << d[i];
    }
    d.push_front(" i ");//inserting from front
    n++;
    d.push_front("am ");
    n++;
    d.push_front("fine  ");
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << d[i];//printing the deque
    }
    cout<<endl;
    
    d.insert(d.begin()+3,"how about you ?");//inserting at nth place
    for (int i = 0; i < n; i++)
    {
        cout << d[i];
    }
    cout<<endl;
    d.erase(d.begin()+6);//erasing the element from nth place 
for(int i=0;i<n;i++){
    cout<<d.at(i)<<" ";//.at(i)// it same as [] oprator but it also checks the deque is going out of range
    
}
d.pop_back();//poping from back
    d.pop_front();// poping from front

    d.clear();// empty the deque

}