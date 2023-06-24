#include <bits/stdc++.h>
 
using namespace std;
 
class Stack {
    
    queue<int> q1, q2;
 
public:

    void push(int x)
    {
        //insert x in q2
        //q1->q2
        //swap q1 and q2
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
 
        swap(q1,q2);
    }
 
    void pop()
    {
 
        if (q1.empty())
            return;
        q1.pop();
    }
 
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
 
    int size() 
    { 
        return q1.size(); 
    }
};
 

int main()
{
    Stack s;
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(1);
 
    cout << "current size of Stack: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
 
    cout << "current size of Stack: " << s.size() << endl;
    return 0;
}