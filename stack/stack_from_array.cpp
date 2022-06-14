#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int top;
    int size;

    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return top;
        }
    }
};

int main()
{
    stack st(5);
    st.push(22);
    st.push(77);
    st.push(55);
    st.push(66);
    st.push(66);
    


    cout << st.peek()<<endl;
st.pop();
 cout << st.peek()<<endl;
 st.pop();
 cout << st.peek()<<endl;
 st.pop();
 cout << st.peek()<<endl;
    return 0;
}