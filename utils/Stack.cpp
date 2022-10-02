//
// Created by Alex on 02.10.2022.
//

#include <climits>
#include "Stack.h"

void Stack::push(int data) {
    Node *q;
    q = new Node();
    q->data = data;

    if (top == nullptr) {
        top = q;
    } else {
        q->next = top; //Проводим связь от нового элемента, к вершине. Тоесть кладем книжку на вершину стопки.
        top = q; //Обозначаем, что вершиной теперь является новый элемент
    }
    _size++;
}

int Stack::back() {
    if (top != nullptr)
        return top->data;

    else return INT_MIN;
}

int Stack::pop() {
    if (top != nullptr) {
        auto data = top->data;
        top = top->next;
        _size--;
        return data;
    }
    return INT_MIN;
}

int Stack::size() {
    return _size;
}

void Stack::clear() {
    _size = 0;
    top = nullptr;
}
