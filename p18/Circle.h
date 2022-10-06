//
// Created by Alex on 06.10.2022.
//

#ifndef OOPS_CIRCLE_H
#define OOPS_CIRCLE_H
#include <cmath>

template<class T> class Circle{
public:
    Circle(T circlelenght): lenght(circlelenght){ }
    T calculateS() const;
private:T lenght;
};

template<class T>
T Circle<T>::calculateS() const{
    return sqrt(double(lenght)) / (M_PI * 4);
}

#endif //OOPS_CIRCLE_H
