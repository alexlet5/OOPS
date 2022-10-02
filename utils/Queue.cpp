//
// Created by Alex on 02.10.2022.
//

#include <climits>
#include "Queue.h"

void Queue::push(int data) {
    Node *n = new Node();
    n->data = data;

    if (_top == nullptr) {
        _top = n;
        _back = n;
    } else {
        _back->next = n;
        _back = n;
    }
    _size++;
}

int Queue::front() {

    if(_top == nullptr)
        return INT_MIN;

    else return _top->data;
}

int Queue::pop() {
    if(_top == nullptr)
        return INT_MIN;

    else {
        auto temp = _top->data;
        _top = _top->next;
        _size--;
        return temp;
    }
}

int Queue::size() {
    return _size;
}

void Queue::clear() {
    _top = nullptr;
    _back = nullptr;
    _size = 0;
}
