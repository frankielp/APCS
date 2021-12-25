//
//  Function.hpp
//  Assignment03
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#ifndef Function_hpp
#define Function_hpp

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class llQueue{
private:
    Node *head;
    Node *tail;
    int capacity; // max number of elements in the queue
    int num; // current number of elements in the queue
public:
    llQueue();
    void init(int capacity);
    void enqueue(int x);
    int dequeue();
    int peek();// return the top element but do not enqueue
    bool isEmpty();
    bool isFull();
    void clear();
};
#endif /* Function_hpp */
