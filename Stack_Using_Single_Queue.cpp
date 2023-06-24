#include <bits/stdc++.h>
using namespace std;

class Stack {
 
    queue<int> q;
 
public:
    void push(int data);
    void pop();
    int top();
    int size();
    bool empty();
};
 

void Stack::push(int data)
{
    int s = q.size();
 
    q.push(data);
 
    for (int i = 0; i < s; i++) {
       
        q.push(q.front());
 
        q.pop();
    }
}
 
void Stack::pop()
{
    if (q.empty())
        cout << "No elements\n";
    else
        q.pop();
}

int Stack:: top()
    {
        if (q.empty()) 
            return -1;
        return q.front();
    }
 

bool Stack::empty() {
     return (q.empty()); 
     }
 
int Stack::size() { 
    return q.size(); 
    }
 
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "current size: " << st.size() << "\n";
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    cout << "current size: " << st.size();
    return 0;
}