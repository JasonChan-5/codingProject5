#include <stdlib.h>
#include <iostream>
#include "Node.h"

using namespace std;

class LL{

    public:
        LL();
        LL(Node* x);
        ~LL();
        void insert(int x, int w);
        void remove(int x);
        Node* search(int x);
        
    private:
        Node* head;
        unsigned int size;
};