// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
#ifndef _ARRAY_CPP_
#define _ARRAY_CPP_

#include "Array.h"
#include "ArrayBase.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array(void)
    : ArrayBase<T>()
{
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array(size_t length)
    : ArrayBase<T>(length)
{
}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array(size_t length, T fill)
    : ArrayBase<T>(length, fill)
{
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array(const Array& array)
{
    //iterate through array copy contents manually 
    for (size_t i = 0; i < array.size(); i++)
    {
        this->data_[i] = array[i];
    }
}

//
// ~Array
//
template <typename T>
Array <T>::~Array(void)
{
    //delete[] this->data_; 
}






//
// resize
//
template <typename T>
void Array <T>::resize(size_t new_size)
{
    if (new_size > this->cur_size_)
    {
        T* third = new T[new_size];
        for (int i = 0; i < this->cur_size_; i++)
        {
            third[i] = this->data_[i];
        }
        this->cur_size_ = new_size;
        this->max_size_ = new_size;
        delete[] this->data_;
        this->data_ = third;


    }
    else
    {
        this->cur_size_ = new_size;
    }
}
#endif