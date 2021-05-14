#include <iostream>
#include <queue>
using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                qs->push(a);
            }
            else if (QueryType == 2)
            {
                cout << qs->pop() << " ";
            }
        }
        cout << endl;
    }
}

//Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
    while (!q1.empty())
    {
        int val = q1.front();
        q2.push(val);
        q1.pop();
    }
    q1.push(x);
    while (!q2.empty())
    {
        int val = q2.front();
        q1.push(val);
        q2.pop();
    }
}

//Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    if (!q1.empty())
    {
        int val = q1.front();
        q1.pop();
        return val;
    }
    return -9999;
}
//