//
//  Function.cpp
//  Assignment03
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"
llQueue::llQueue(){
    head=nullptr;
    tail=nullptr;
    capacity=0;
    num=0;
}
void llQueue::init(int Cap){
    capacity=Cap;
    num=0;
}
void llQueue::enqueue(int x){
    if (!isFull())
    {
        if (!tail)
        {
            head=new Node;
            tail=head;
        }
        else
        {
            tail->next=new Node;
            tail=tail->next;
        }
        tail->data=x;
        num++;
    }
    else
        cout<<"Overloaded\n";
}

int llQueue::dequeue(){
    if (isEmpty())
    {
        cout<<"Already empty\n";
        return NULL;
    }
    else
    {
        num--;
        int tempData=head->data;
        Node* temp=head;
        head=head->next;
        delete temp;
        if (isEmpty())
        {
            head=nullptr;
            tail=nullptr;
        }
        return tempData;
    }
}
int llQueue::peek(){
    return tail->data;
}// return the top element but do not enqueue
bool llQueue::isEmpty(){
    return num==0;
}
bool llQueue::isFull(){
    return num==capacity;
}
void llQueue::clear(){
    while (head!=tail)
    {
        dequeue();
    }
    delete head;
    head=nullptr;
    tail=nullptr;
    num=0;
}
