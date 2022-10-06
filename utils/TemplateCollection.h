//
// Created by Alex on 06.10.2022.
//

#ifndef OOPS_STACK_H
#define OOPS_STACK_H

template<class T>
class TemplateCollection {
private:
    struct TemplateNode {
        T t;
        int id;
        TemplateNode *next;
        TemplateNode();
    };

public:
    TemplateNode *top = nullptr;
    int _size = 0;

    void add(T nt, int id);

    T popById(int id);

    int size();

    void clear();
};

template<class T>
TemplateCollection<T>::TemplateNode::TemplateNode() {
}

template<class T>
void TemplateCollection<T>::add(T nt, int id) {

    TemplateNode *n;
    n = new TemplateNode();
    n->t = nt;
    n->id = id;

    if (top == nullptr) {
        top = n;
    } else {
        n->next = top;
        top = n;
    }
    _size++;
}


template<class T>
T TemplateCollection<T>::popById(int id) {
    TemplateNode* iter = top;
    TemplateNode* prev = nullptr;

    while (iter != nullptr) {
        if (iter->id == id) {

            if(prev != nullptr){
                prev->next = iter->next;
            }
            T data = iter->t;
            delete iter;
            _size--;
            return data;

        } else{
            prev = iter;
            iter = iter->next;
        }
    }

    return iter->t;
}

template<class T>
int TemplateCollection<T>::size() {
    return _size;
}

template<class T>
void TemplateCollection<T>::clear() {
    _size = 0;
    top = nullptr;
}

#endif //OOPS_STACK_H

