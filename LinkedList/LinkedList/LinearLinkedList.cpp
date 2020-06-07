#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	int data;
	string name;
	Node* next;

	Node()
	{
		data = 0;
		name = "default";
		next = NULL;
	}

	Node(int x, string s)
	{
		data = x;
		name = s;
		next = NULL;
	}
};

class LinkedList
{
public:
	Node* head;

	void addAtFront(Node* n);
	bool isEmpty();
	void addAtEnd(Node* n);
	Node* search(int x);
	Node* deleteNode(int x);
	Node* getLastNode();
	void InsertNode(Node* n, int data, int position);
	Node* reverse(Node* head);

	LinkedList()
	{
		head = nullptr;
	}
};

void LinkedList::addAtFront(Node* n){

		n->next = head;
		head = n;
}

Node* LinkedList::getLastNode()
{
	Node* ptr = head;

	while (ptr->next != nullptr)
		ptr = ptr->next;

	return ptr;
}

void LinkedList::addAtEnd(Node* n)
{
	if (head == nullptr)
	{
		head = n;
		n->next = nullptr;
	}
	else
	{
		Node* n1 = getLastNode();
		n1->next = n;
	}

}

Node* LinkedList::search(int x)
{
	Node* ptr = head;

	while (ptr->next != nullptr && ptr->data != x)
		ptr = ptr->next;

	return ptr;
}

Node* LinkedList::deleteNode(int x)
{
	Node* n = search(x);
	Node* ptr = head;

	if (n == ptr)
	{
		ptr->next = n->next; // head = n->next ??
		return n;
	}
	else
	{
		while (ptr->next != n)	// n= n->next??
			ptr = ptr->next;

		ptr->next = n->next;
		return n;
	}
}

void LinkedList::InsertNode(Node* n, int data, int position)
{
	int i = 1;
	Node* ptr = head;


	while (i != position)
	{
		ptr = ptr->next;
		i++;
	}

	/*int a = 1;
	int* b = &a;
	*b = 10;*/

	Node* t;
	Node t1;
	//t->data = data;

	Node* temp = new Node(data, "third");

	temp->next = ptr->next;
	ptr->next = temp;
	//head->next = ptr;

	
	/*temp->next = ptr->next;
	ptr->next = temp;*/


}

bool LinkedList::isEmpty()
{
	if (head == nullptr)
		return true;
	else
		return false;


}

Node* LinkedList::reverse(Node* head) {

	Node* ptr = head;
	Node* temp2 = ptr->next;

	while (temp2 != nullptr)
	{
		Node* temp1 = ptr;
		ptr = temp2;
		temp2 = ptr->next;
		ptr->next = temp1;
	}

	head->next = nullptr;
	head = ptr;

	return head;

}
int main() {
	LinkedList L;
	/*int x;
	cout << "Enter integer value" << endl;
	cin >> x;*/

	Node* n;
	n = new Node(1,"first");

	L.addAtFront(n);

	Node* n1 = new Node(2,"second");
	L.addAtEnd(n1);

	Node* n2 = new Node(4 , "fourth");
	L.addAtEnd(n2);

	L.InsertNode(L.head, 3, 2);

	L.reverse(L.head);

}