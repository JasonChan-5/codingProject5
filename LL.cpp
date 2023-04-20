#include <stdlib.h>
#include <iostream>
#include "LL.h"

LL::LL(){
    head = nullptr;
    size = 0;
}

LL::LL(Node* x){
    head = x;
    Node* traverse = x;
    size = 0;
    while(traverse != nullptr){
        traverse = traverse->next;
        size++;
    }
}

void LL::insert(int x, int w){
    Node* trav = head;
    while(trav != nullptr && trav->next != nullptr){
        trav = trav->next;
    }

    if(trav == nullptr){
        head = new Node(x, w);
    } else {
        trav->next = new Node(x, w);
    }
}

void LL::remove(int x){
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr){
        if (curr->dest == x){
            if (prev != nullptr){
                prev->next = curr->next;
            } else {
                head = head->next;
            }
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
}

Node* LL::search(int x){
    Node* trav = head;
    while(trav != nullptr){
        if(trav->dest == x){
            return trav;
        }
    }
    return nullptr;
}

LL::~LL(){
    delete head;
}