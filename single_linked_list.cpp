#include "single_linked_list.hpp"

void SingleLinkedList::insertNodeHead(int val){
    SingleNode* newNode = new SingleNode(val);
    newNode->next = head;
    head = newNode;
}


void SingleLinkedList::insertNodeTail(int val){ 
    if (head == NULL) { 
        head = new SingleNode(val);
        return; 
    }
    SingleNode* temp = head; 
    while (temp->next != NULL) { 
        temp = temp->next; 
    }  
    temp->next = new SingleNode(val);;
}


void SingleLinkedList::deleteNode(int index){
    if (head == NULL) { 
        cout << "List empty" << endl; 
        return; 
    }
    if(index==0){
        head = head->next;
        return;
    }
    int i = 1;
    SingleNode* cur = head->next;
    SingleNode* prev = NULL;
    while (cur != NULL) { 
        if (i==index){
            prev->next = cur->next;
            return;
        }
        prev = cur;
        cur = cur->next;
        i++;
    }
    cout << "Index Out of Range" << endl;
}


void SingleLinkedList::printList(){
    SingleNode* node = head;
    if (head == NULL) { 
        cout << "List empty" << endl; 
        return; 
    } 
 
    while (node != NULL) { 
        cout << node->val << " "; 
        node = node->next; 
    }
    cout << endl;
}
