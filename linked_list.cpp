#include <iostream>
using namespace std;
// Ð?nh nghia c?u trúc Node d? bi?u di?n các nút trong danh sách liên k?t
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Ð?nh nghia c?u trúc LinkedList d? qu?n lý danh sách liên k?t
struct LinkedList {
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Phuong th?c d? thêm m?t ph?n t? vào danh sách
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

    // Phuong th?c d? hi?n th? danh sách liên k?t
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

    // Thêm các ph?n t? vào danh sách liên k?t
    myLinkedList.append(1);
    myLinkedList.append(2);
    myLinkedList.append(3);
    myLinkedList.append(4);

    // Hi?n th? danh sách liên k?t
    myLinkedList.display();

    return 0;
}

