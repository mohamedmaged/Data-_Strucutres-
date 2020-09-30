// To demonstrate how stack works in Array

#include <iostream>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x) //Inserting an  element at top
{
    if (top == MAX_SIZE - 1)
    {
        cout << "ERROR: STACK OVERFLOW.";
        return;
    }
    A[++top] = x;
}

void Pop() //Deleting an element from top
{
    if (top == -1)
    {
        cout << "ERROR: NO ELEMENT TO POP";
        return;
    }
    top--;
}

int Top() //Returning whatever element in on top
{
    return A[top];
}

void Print() //Print the Stack List
{
    cout << "Stack: \t";
    for (int i = 0; i <= top; i++)
        cout << A[i] << "\t";

    cout << endl;
}

int main()
{
    Push(17); Print();
    Push(16); Print();
    Push(12); Print();
    Pop(); Print();
    Pop(); Print();
    Push(12); Print();
    Push(16); Print();

    

