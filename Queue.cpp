// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
#ifndef _CS507_QUEUE_CPP_
#define _CS507_QUEUE_CPP_
#include <stdexcept>         // for std::out_of_bounds exception
#include "Queue.h"

// COMMENT You are supposed to use your array class. No feedback
// will be provided since the array class and raw C array result
// in a completely different design. //resolved by utilizing and including the array class properly (i think)

// COMMENT Your header file should not contain any implementation
// code. Resolved by creating a header file with proper implementation 

//
// Queue
//
template <typename T>
Queue <T>::Queue (void)
{
    ArrayBase<T>();
    //declares the variables with a new size_t implemented called track
    //to help keep track of where we are in queue like a manual increment
}
template <typename T>
Queue<T>::Queue (const Queue & array)
{
    this->data_ = new T[10];
    for (size_t i = 0; i < this->max_size_; i++)
    {
        this->data_[i] = array[i];
    }
    //deep copy still not really sure what this is for 
}
template <typename T>
Queue<T>::~Queue (void)
{
    //destructor
    delete[] this->data_;
}

template<typename T>
void Queue<T>::enqueue(T element)
{
    //if the queue is empty then the variables need to be set back to initial start
    if (is_empty()) {
        this->beg = 0;
        this->end = 0;
        this->cur_size_ = 0;
    }
    //resize the queue 
    this->end = this->end + 1;
    this->data_[this->end] = element;
    this->cur_size_++;

}
template<typename T>
void Queue<T>::dequeue(void) {
    if (is_empty()) {
        throw empty_exception();
    }
    this->cur_size_--;
    //checks if the data is empty and returns exception if it is
    //if not then just decrements the curent size value as it will never be reached when printing
    //because cur_size_ will block it and if it is increased it will just be overwritten
}

template<typename T>
bool Queue<T>::is_empty(void) const
{
    if (cur_size_==0) {
        return true;
    }
    else {
        return false;
    }
    //returns true if the data_ is empty and false if not

}
template<typename T>
size_t Queue<T>::size(void) const
{
    return this->cur_size_;
    //because we created a value to increment manually we can just return that increment value 

}
template<typename T>
void Queue<T>::clear() {
    this->beg = 0;
    this->end = 0;
    //this->track = 0;
    this->cur_size_ = 0;
    //instead of doing the below way save energy by just resetting the variables
    //checks if the data is empty if yes then throws exception
    //if not then increment through the values and set to null
}

#endif