#pragma once
#include "dependencies.h"

template <class T>

class Generic {
private:
    T value;

public:
    Generic(T value);

    T getValue();
    
    void setValue(T value); 
};


template <class T>
Generic<T>::Generic(T value) {
    Generic::value = value;
}

template <class T>
T Generic<T>::getValue() {
    return Generic::value;
}

template <class T>
void Generic<T>::setValue(T value) {
    Generic::value = value;
}