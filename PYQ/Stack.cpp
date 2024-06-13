#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 10;
class Stack
{
protected:
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void Push(int num)
    {
        top++;
        arr[top] = num;
    }

    int Pop()
    {
        int num;
        num = arr[top];
        top--;
        return num;
    }
};
class NewStack : public Stack
{
public:
    bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
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
};
int main()
{
   
}