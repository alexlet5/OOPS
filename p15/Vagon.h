//
// Created by Alex on 02.10.2022.
//

#ifndef OOPS_VAGON_H
#define OOPS_VAGON_H


#include <initializer_list>

class Vagon {
protected:
    virtual double getK() {return 0;};

public:
    virtual double price() { return 0.0; };

    virtual void print() {};
};

class AutomobileVagon : public Vagon {
    int _weight;
    int _count;

public:
    AutomobileVagon(int weight, int count);
    double getK() override;
    double price() override;
    void print() override;
};

class Cisterna : public Vagon {
    int _weight;
    int _count;

public:
    Cisterna(int weight, int count);
    double getK() override;
    double price() override;
    void print() override;
};


#endif //OOPS_VAGON_H
