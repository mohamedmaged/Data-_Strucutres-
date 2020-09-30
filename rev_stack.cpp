//Reverse a string using stack
#include <iostream>
#include <string.h>
#include <stack> //including stack to use stack fucntions
using namespace std;

void Reverse(char C[], int n)
{
    stack<char> S;
    for (int i=0; i<n; i++) //Pushing element from Array to Stack
        S.push(C[i]);

    for (int i=0; i<n; i++) 
    {
        C[i] = S.top(); //Passing top element from stack to array
        S.pop(); //deleting that element so that term below it comes on top,
    }
}

int main()
{
    char C[51];
    cout << "Enter a String : ";
    gets(C);
    Reverse(C, strlen(C));
    cout << "Reversed String : " << C << endl;
}

