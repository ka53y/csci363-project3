#ifndef _ARRAY_BASE_CPP_
#define _ARRAY_BASE_CPP_

#include "ArrayBase.h"
#include<iostream>

template<typename T>
ArrayBase<T>::ArrayBase(void)
    : 
    cur_size_(0),
    max_size_(10)
{
    this->data_ = new T[10];
}

template<typename T>
ArrayBase<T>::ArrayBase(size_t length) 
    : data_(new T[length]),
    cur_size_(length),
    max_size_(length)
    
{
}

template<typename T>
ArrayBase<T>::ArrayBase(size_t length, T fill)
{
    cur_size_ = length;
    max_size_ = length;
    data_ = new T[length];
    for (size_t i = 0; i < length; i++)
    {
        data_[i] = fill;
    }

}

template<typename T>
ArrayBase<T>::ArrayBase(const ArrayBase& arr)
    : data_(new T[0]),
    cur_size_(cur_size_)
{
    cur_size_ = arr.cur_size_;
    for (size_t i = 0; i < arr.cur_size_; i++)
    {
        data_[i] = arr[i];
    }
}

template<typename T>
ArrayBase<T>::~ArrayBase(void)
{
    std::cout << "called" << std::endl;
    delete [] this->data_;
}

//
// operator []
//
template <typename T>
T& ArrayBase <T>::operator [] (size_t index)
{
    if (index >= 0 && index < sizeof(data_)) {
        return data_[index];
    }
    else {
        throw std::out_of_range("value is not in the proper range");
    }
}
template<typename T>
const T& ArrayBase<T>::operator[](size_t index) const
{
    T returnValue;
    if (index >= 0 && index < sizeof(data_)) {
        returnValue = data_[index];
    }
    else {
        throw std::out_of_range("value is not in the proper range");
    }
    return returnValue;
}
//
// get
//
template <typename T>
T ArrayBase <T>::get(size_t index) const
{
    if (index >= 0 && index < cur_size_) {
        std::cout << data_[index] << std::endl;
        return this->data_[index];
    }
    else {
        throw std::out_of_range("value is not in the proper range");
    }

}

//
// set
//
template <typename T>
void ArrayBase <T>::set(size_t index, T value)
{
    if (index >= 0 && index < sizeof(data_)) {
        data_[index] = value;
    }
    else {
        throw std::out_of_range("value is not in the proper range");
    }
}


//
// find (char)
//
template  <typename T>
int ArrayBase <T>::find(T value) const
{
    for (int i = 0; i < cur_size_; i++)
    {
        if (data_[i] == value) {
            return i;
        }
    }
    return -1;
}

//
// find (char, size_t) 
//
template <typename T>
int ArrayBase <T>::find(T val, size_t start) const
{
    for (size_t i = start; i < cur_size_; i++)
    {
        if (data_[i] == val) {
            return i;
        }
    }
    return -1;
}

//
// operator ==
//
template <typename T>
bool ArrayBase <T>::operator == (const ArrayBase& rhs) const
{
    if (this != &rhs) {
        for (size_t i = 0; i < cur_size_; i++)
        {
            if (data_[i] != rhs[i]) {
                return false;
            }
        }
    }
    return true;

}

//
// operator !=
//
template <typename T>
bool ArrayBase <T>::operator != (const ArrayBase& rhs) const
{
    int i = 0;
    do
    {
        i++;
        if (i == max_size_ - 1) {
            return true;
        }

    } while (rhs[i] != data_[i]);
    return false;
}

//
// fill
//
template <typename T>
void ArrayBase <T>::fill(T value)
{
    for (size_t i = 0; i < max_size_; i++)
    {
        data_[i] = value;
    }
}

//
// operator =
/**/
template <typename T>
const ArrayBase <T>& ArrayBase <T>::operator = (const ArrayBase& rhs)
{
    if (this != &rhs) {
        return *this;
    }

    this->cur_size_ = rhs.size();
    this->max_size_ = rhs.size();
    //changed the iteration length to avoid the runtime error. 
    for (size_t i = 0; i < this->cur_size_; i++)
    {
        this->data_[i] = rhs.get(i);
    }
}

#endif