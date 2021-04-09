#include <iostream>
using namespace std;

struct NODE {
	int data;
	NODE* next;
};

NODE* insertNode(NODE* tail, int newData)
{
	if (tail != NULL)
		return tail;

	NODE* temp = new NODE;

	temp->data = newData;
	tail = temp;
	tail->next = tail;

	return tail;
}


NODE* prepend(NODE* tail, int newData)
{
	if (tail == NULL)
		return insertNode(tail, newData);

	NODE* temp = new NODE;
	temp->data = newData;
	temp->next = tail->next;
	tail->next = temp;

	return tail;
}




NODE* append(NODE* tail, int newData)
{
	if (tail == NULL)
		return insertNode(tail, newData);

	struct NODE* temp = new NODE;

	temp->data = newData;
	temp->next = tail->next;
	tail->next = temp;
	tail = temp;

	return tail;
}



NODE* insertAfter(NODE* head, int num, int n) {
	if (head == NULL)
	{
		return 0;
	}
	if (head->data == num)
	{
		NODE* newNode = new NODE;
		newNode->data = n;
		newNode->next = head->next;
		head->next = newNode;
		return newNode;
	}
	else
	{
		return insertAfter(head->next, num, n);
	}
}

void displayList(NODE* tail)
{
	struct NODE* p;
	if (tail == NULL)
	{
		cout << "Circular linked List is empty." << endl;
		return;
	}
	p = tail->next;
	do {
	   cout << p->data << "==>";
	   p = p->next;
	} 
	while(p != tail->next);

	if (p == tail->next)
	{
		cout << p->data;
	}
	cout << "\n\n";
}


void deleteNode(NODE*& head, int del) {
	NODE* temp = head;
	while (temp != NULL) {
		if (temp->data == del) {
			temp->data = NULL;
			head = temp;
		}
		else {
			temp = temp->next;
		}
	}
}

void deleteList(NODE*& head) {
	head = NULL;
}

void displayReverseList(NODE* tail)
{
	struct NODE* p;
	if (tail == NULL)
	{
		cout << "Circular linked List is empty." << endl;
		return;
	}
	p = tail->next;
	do {
		cout << p->data << "==>";
		p = p->next;
	} while (p != tail->next);

	if (p == tail->next)
	{
		cout << p->data;
	}
	cout << "\n\n";
}

int main() {}