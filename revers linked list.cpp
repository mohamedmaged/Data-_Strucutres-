#include <iostream>
//#include "Node.cpp"
struct Node {
	int data;
	Node *next;
};
using namespace std;
Node *head;
void print()
{
	Node *temp = head;

	while (temp->next != NULL) {
		cout << temp->data << "  ";
		temp = temp->next;
	}
	if(head!=NULL)
	cout << temp->data << endl;
}
void insert(int  data) {
	Node*temp = new Node();
	temp->data = data;
	if (head != NULL)
	{
		temp->next = head;
		head = temp;
	}
	else
		head = temp;
}
void add( int data)
{
	Node *x = new Node();
	x->data = data;
	x->next = NULL;
	if (head->next == NULL)
	{
		head->next = x;
	}
	else {
		Node* temp = new Node();
		temp = head;
		while (temp->next != NULL)
		temp = temp->next;

		temp->next = x;
	}
}
void InsertAt(int data, int pos)
{
	Node*temp = head;
	Node*x = new Node();
	x->data = data;
	for (int i = 0; i < pos-2; i++)
	{

	}
}
void  Reverse()
{
	Node *temp = head;
	Node *last;
	Node *prev=NULL;
	while (temp != NULL)
	{
		head = temp->next;
			last = temp->next;
			temp->next = prev;
			prev = temp;
			temp =last;
			head=prev;
	}

}
void main ()
{
	head = NULL;
insert(8);
add(5);
add(6);
add(3);
print();
Reverse();
print();
}
