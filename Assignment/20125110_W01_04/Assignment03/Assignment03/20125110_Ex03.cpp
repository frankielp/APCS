//
//  main.cpp
//  Assignment03
//
//  Created by Le Pham Nhat Quynh on 10/16/21.
//

#include "Function.h"

int main() {
    llQueue q;
    q.init(5);
    q.enqueue(1);
    q.enqueue(3);
    int tmp=q.dequeue();
    cout<<tmp<<endl;
    cout<<q.peek()<<endl;
    q.clear();
    if (q.isEmpty()) cout<<"Q is empty\n";
    else cout<<"Q is not empty\n";
    return 0;
}
