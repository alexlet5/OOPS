//
// Created by Alex on 02.10.2022.
//

#include "Praktika10.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"

using namespace std;

struct node {
    unsigned char info;
    struct node *next;
};

//Используя  динамическую  структуру  список,
// подсчитать количество  элементов  лежащих  в  диапазоне
// от  20  до  50. Записать их в отдельный динамический массив.
// Полученный массив вывести на экран.
void Praktika10::run() {

    srand(time(nullptr));// без этого числа будут одинаковые
    typedef node *NodePtr;
    NodePtr head = nullptr;
    NodePtr tek;

    NodePtr hvost; // указатель на "хвост" списка
    int N = 50;
    int cnt = 1;
    if (head == nullptr) {
        head = new node;
        head->info = char(rand() % 255); // случайныйсимвол
        head->next = nullptr;
        hvost = head;
    }

    for (int i = 2; i <= N; i++) {
        tek = new node;
        ++cnt;
        tek->info = char(rand() % 255);
        tek->next = nullptr;
        hvost->next = tek;
        // вданномслучае-NULL
        hvost = tek;
    }

}
