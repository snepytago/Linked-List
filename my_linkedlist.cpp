#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node() {
		next = NULL;
	}
	
	Node(int data) {
		next = NULL;
		this->data = data;
	}
};
	
struct LinkedList{
	Node* head;
	int size; //will be added after each time you add a new node to your list
	//constructor
	LinkedList() {
		head = NULL;
		size = 0;
	}
	// add new node to a linked list
	void add(Node* newNode) {
		Node *current = head;
		
		if(head == NULL) {
			head = newNode;
			size++;
			return ;
		}
		while(current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
		size++;
	}
	// add data to a node
	void add(int data) {
		Node* current = new Node();
		current->data = data;
		this->add(current);
	}
	// insert a new node to the list
	void insert(int data, int pos) {
		Node* newNode = new Node(data);
		Node* current = head;
		if(pos < 0 || pos > size + 1) {
			cout << "INVALID POSITION!\n";
			return;
		}
		
		int i = 0;
		while(i < pos - 1) {
			i++;
			current = current->next;
		}
		if(current == NULL) {
			cout << "INVALID POSITION!\n";
			return;
		}
		newNode->next = current->next;
		current->next = newNode;
		size++;
	}
	
	void deleteNode(int pos) {
		Node* current = head;
		Node* afterCurrent = head;
		if(head ==  NULL) {
			cout << "Your list is empty!\n";
			return;
		}
		int i = 0;
		while(i < pos - 1) {
			i++;
			current = current->next;
			afterCurrent = current->next;
		}
		current->next = afterCurrent->next;
		size--;
	}
	
	void printAll(){
		if(head == NULL) {
			cout << "your list is empty!\n";
			return;
		}
		Node* current = head;
		while(current != NULL) {
			cout << " " << current->data;
			current = current->next;
		}
	}
	
	Node* GetPos(int pos){
		
	}
};

int main() {
	LinkedList myList;
	while (1) {
		cout << "--------------------\n";
		cout << "      ACTION      \n";
		cout << "1: add a node to your list \n";
		cout << "2: insert a node to your list\n";
		cout << "3: print list\n";
		cout << "4: delete node\n";
		cout << "0: quit ! \n";
		cout << "-------------------\n";
		
		int choice = 0;
		cin >> choice;
		if(choice == 1) {
			int x;
			cout << "enter your data: ";
			cin >> x;
			myList.add(x);
		}
		else if(choice == 2) {
			int x; cout << "enter the data to insert: \n";
			cin >> x;
			int pos; cout << "enter your wanted position: ";
			cin >> pos;
			myList.insert(x, pos);
		}
		else if(choice == 3) {
			cout << "Your linked list: ";
			myList.printAll();
			cout << endl;
		}
		else if(choice == 4) {
			cout << "enter node's position to delete: ";
			int pos; cin >> pos;
			myList.deleteNode(pos);
		}
	}
	

}
