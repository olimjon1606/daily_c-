#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    cout << q.front() << endl;
    q.push(20);
    cout << q.front() << endl;
    q.push(30);
    cout << q.front() << endl;
    q.push(40);
    cout << q.front() << endl;
    q.push(50);
    cout << q.front() << endl;
    q.push(60);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}