//
// Created by Alex on 02.10.2022.
//

#ifndef OOPS_STACK_H
#define OOPS_STACK_H


class Stack {
private:
    struct Node {
        int data;
        Node *next;
    };
    Node *top = nullptr;
    int _size = 0;

public:
    void push(int data);
    int back();
    int pop();
    int size();
    void clear();
};


#endif //OOPS_STACK_H
