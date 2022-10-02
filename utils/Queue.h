//
// Created by Alex on 02.10.2022.
//

#ifndef OOPS_QUEUE_H
#define OOPS_QUEUE_H


class Queue {

private:
    struct Node {
        int data;
        Node *next;
    };
    Node *_top = nullptr;
    Node *_back = nullptr;
    int _size = 0;

public:
    void push(int data);
    int front();
    int pop();
    int size();
    void clear();
};


#endif //OOPS_QUEUE_H
