//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<iostream>

class Vector
{

public:
    // s is intialized with a num and its passed to size(s) and assigns it to size. private data can be copied to other class
    Vector(std::size_t s);
    Vector(const Vector& v); //rule of 3 copy constructor
    std::size_t Size()const {return size; }
    //Size() is a function 
    int& operator[](std::size_t i) {return elements[i];}
    int& operator[](std::size_t i)const{return elements[i];}


private:
    std::size_t size;

    int* elements;//pointer to integer. 




};

#endif