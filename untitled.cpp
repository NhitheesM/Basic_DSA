#include <iostream>
#include <list>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    std::list<Node*> nodes;

public:
    void insert(int val) {
        Node* newNode = new Node(val);
        nodes.push_back(newNode);
    }

    void display() {
        for (Node* node : nodes) {
            std::cout << node->data << " -> ";
        }
        std::cout << "nullptr" << std::endl;
    }

    ~LinkedList() {
        for (Node* node : nodes) {
            delete node;
        }
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);

    linkedList.display();

    return 0;
}
