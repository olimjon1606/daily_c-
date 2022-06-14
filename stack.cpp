#include <iostream>
#include <stack>
using namespace std;
struct Stack
{
    int mem[100];
    int elements;

    Stack() : elements(0) {}

    void fun(int n, int m)
    {
        mem[elements++] = m;
        mem[elements++] = n;
    }
    void pop()
    {
        elements--;
    }

    int top()
    {
        return mem[elements - 1];
    }
    int empty()
    {
        if (elements == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int x, y, sum = 0;
    Stack s;
    s.fun(3, 4);
    while (!s.empty())
    {
        x = s.top();
        s.pop();
        y = s.top();
        s.pop();
        if (x == 0 || y == 0)
        {
            sum++;
        }
        else
        {
            s.fun(x - 1, y);
            s.fun(x, y - 1);
        }
    }

    cout << x << " " << y << endl;
    cout << s.top() << endl;
    cout << sum << endl;
}