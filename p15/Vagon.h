//
// Created by Alex on 02.10.2022.
//

#ifndef OOPS_VAGON_H
#define OOPS_VAGON_H


#include <initializer_list>

class Vagon {
protected:
    int _weight;
    int _count;
    double _k;


public:
    Vagon(int weight, int count, double k) {
        _weight = weight;
        _count = count;
        _k = k;
    }

    virtual double price() { return _k * _weight * _count; };

    virtual void print() {};
};

class AutomobileVagon : public Vagon {
public:
    AutomobileVagon(int weight, int count) : Vagon(weight, count, 1.1) {};

    void print() override;
};

class Cisterna : public Vagon {
public:
    Cisterna(int weight, int count) : Vagon(weight, count, 1.4) {};

    void print() override;
};


#endif //OOPS_VAGON_H
