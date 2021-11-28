// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
#ifndef _CS507_STACK_CPP_
#define _CS507_STACK_CPP_

#include <iostream>
#include "Stack.h"
#include <exception>

template <typename T>
Stack <T>::Stack(void)
    : data_(new Array<T>(10)),
    cur_size_(0),
    max_size_(10)
{
    track = -1;
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
    for (size_t i = 0; i < stack.size(); i++)
    {
        this->data_[i] = stack[i];
    }
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
    std::cout << "called" << std::endl;
    delete this->data_; 
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
    this->cur_size_++;
    this->data_->resize(cur_size_);
    track = track + 1;
    this->data_[track] = element;
    
    
    
    //std::cout << data_[track] << std::endl;
    

    
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    if(track == -1) {
        throw empty_exception();
    } else {
        track--;
    }
    
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
        // COMMENT It would be easier if you just use the assignment operator
        // on the array to copy things from rhs. resolved: assignment operator to copy instead of iterating through entire array
    if (this == &rhs) {
        return *this;
    }
    if (this->max_size_ < rhs.size()) {
        delete this->data_;
        this->data_ = new T[rhs.size()];
    }

    this->track = rhs.size();
    this->max_size_ = rhs.size();
    for (size_t i = 0; i < cur_size_; i++)
    {
        this->data_[i] = rhs.data_[i];
    }

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    // COMMENT Just reset the variables instead popping each element, which
    // is expensive. Resolved: reset variables instead of iterating through each element
    this->cur_size_ = -1;
    this->max_size_ = -1;
    this->track = -1;
}
template <typename T>
void Stack <T>::printStack(void) {
    size_t size = this->data_->size();
    std::cout << "printing array of size: " << size << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << this->data_->get(i) << " ";
    }
    std::cout << std::endl;
}
#endif
