#include <stdlib.h>
#include <iostream>

using namespace std;

class LL;
class Graph;

class Node{
    private:
        int dest;
        int weight;
        Node* next;

    public:
        Node(int value, int weightValue){
            dest = value;
            weight = weightValue;
            next = nullptr;
        }
        Node(int value){
            dest = value;
            weight = -1;
            next = nullptr;
        }
        Node() = delete;
        
        friend class LL;
        friend class Graph;
};