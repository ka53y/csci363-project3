// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#ifndef _CS507_FIXED_ARRAY_CPP_
#define _CS507_FIXED_ARRAY_CPP_
#include "Fixed_Array.h"

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void) : ArrayBase()
{
   /* data_ = nullptr;
    cur_size_ = 0;
    max_size_ = 0;*/
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
{
    ArrayBase<T>(arr);
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
{
    ArrayBase<T>(length);
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
        ArrayBase<T>(N, fill);
        //data_[i] = fill; do not uncomment this is stupid 
    
    
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
    delete [] this->data_;
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
    if (this != &rhs) {
        //changed the iteration length to avoid the runtime error. 
        for (size_t i = 0; i < sizeof(this->data_); i++)
        {
            this->data_[i] = rhs[i];
        }
    }

    return *this;
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
    if (this != &rhs) {
        //changed the iteration length to avoid the runtime error. 
        for (size_t i = 0; i < sizeof(this->data_); i++)
        {
            this->data_[i] = rhs[i];
        }
    }

    return *this;

}
#endif
