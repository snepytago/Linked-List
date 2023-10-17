#include <iostream>
using namespace std;
// �?nh nghia c?u tr�c Node d? bi?u di?n c�c n�t trong danh s�ch li�n k?t
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// �?nh nghia c?u tr�c LinkedList d? qu?n l� danh s�ch li�n k?t
struct LinkedList {
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Phuong th?c d? th�m m?t ph?n t? v�o danh s�ch
    void append(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    // Phuong th?c d? hi?n th? danh s�ch li�n k?t
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList myLinkedList;

    // Th�m c�c ph?n t? v�o danh s�ch li�n k?t
    myLinkedList.append(1);
    myLinkedList.append(2);
    myLinkedList.append(3);
    myLinkedList.append(4);

    // Hi?n th? danh s�ch li�n k?t
    myLinkedList.display();

    return 0;
}

