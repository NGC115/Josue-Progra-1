// Lista Doble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class CircularDoublyLinkedList {
private:
    Node* head;
public:
    CircularDoublyLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            head->prev = head;
            head->next = head;
        }
        else {
            Node* last = head->prev;
            newNode->next = head;
            newNode->prev = last;
            head->prev = newNode;
            last->next = newNode;
        }
    }

    void display() {
        if (head == nullptr) {
            return;
        }
        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularDoublyLinkedList cdll;
    cdll.insert(1);
    cdll.insert(2);
    cdll.insert(3);
    cdll.insert(4);
    cdll.insert(5);
    cdll.insert(6);
    cdll.display();

    return 0;
}
