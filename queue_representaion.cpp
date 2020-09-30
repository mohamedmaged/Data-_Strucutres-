#include <iostream>
using namespace std;
#define MAX_SIZE 10

class Queue
{
private:
    int A[MAX_SIZE];
    int front, rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool IsEmpty()
    {
        return (front ==-1 && rear == -1);
    }

    bool IsFull()
    {
        return (rear+1)%MAX_SIZE == front ? true:false;
    }

    void Push(int x)
    {
        if (IsFull())
        {
            cout << "Queue is full!!";
            return;
        }

        else if (IsEmpty())
            front = rear = 0;
        
        else
            rear = (rear+1)%MAX_SIZE;

        A[rear] = x;
    }

    void Pop()
    {
        cout << "Deleting element...";
        if (IsEmpty())
        {
            cout << "Error: Queue is empty...";
            return;
        }
        else if (front == rear)
        {
            rear = front = -1;
        }

        else
            front = (front+1)%MAX_SIZE;
    }

    int Front()
    {
        if (front == -1)
        {
            cout << "Queue is empty";
            return -1;
        }

        return A[front];

    }

    void Print()
    {
        int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;

        cout << "Queue : " ;
        for(int i=0; i< count ; i++)
        {
            int index = (front+i)% MAX_SIZE;
            cout << A[index]<< " ";
        }
        cout <<"\n\n";
    }
};

int main()
{
    Queue Q;
    Q.Push(2); Q.Print();
    Q.Push(3); Q.Print();
    Q.Push(4); Q.Print();
    Q.Push(5); Q.Print();
    Q.Push(6); Q.Print();
    Q.Push(7); Q.Print();
    

}