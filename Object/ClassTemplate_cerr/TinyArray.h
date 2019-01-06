#ifndef CLASSTEMPLATE_CERR_TINYARRAY_H
#define CLASSTEMPLATE_CERR_TINYARRAY_H

#include <iostream>
#include <cstdlib>

template<typename T, int size>
class TinyArray {
private:
    T ar[size];
public:
    TinyArray() {};
    explicit TinyArray(const T&);
    virtual T& operator[](int);
    virtual T operator[](int) const;
};

template<typename T, int size>
TinyArray<T,size>::TinyArray(const T& value){
    for(int index = 0; index < size; index++)
        this->ar[index] = value;
}

template<typename T, int size>
T& TinyArray<T,size>::operator[](int index) {
    if(index < 0 || index >= size) {
        std::cerr << "Exception: Out of scope" << index << "  is overscoped" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return this->ar[index];
}

template<typename T, int size>
T TinyArray<T,size>::operator[](int index) const{
    if(index < 0 || index >= size) {
        std::cerr << "Exception: Out of scope" << index << " is overscoped" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return this->ar[index];
}


#endif //CLASSTEMPLATE_CERR_TINYARRAY_H
