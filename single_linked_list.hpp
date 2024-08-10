#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP
#include <iostream>
using namespace std;

class SingleNode{
public:
    int val;
    SingleNode* next;

    SingleNode() { val = 0; next = NULL; } // Default constructor
    SingleNode(int val) { this->val = val; this->next = NULL; }  // Parameterised Constructor

};

class SingleLinkedList{ 
    SingleNode* head; 
  
public: 
    SingleLinkedList() { head = NULL; } // Default constructor
    void insertNodeHead(int);
    void insertNodeTail(int);
    void deleteNode(int); // Function to delete the node at given position 
    void printList(); // Prints List
};

#endif // SINGLE_LINKED_LIST_H