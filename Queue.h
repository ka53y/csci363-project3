// -*- C++ -*-
// $Id: kschoef

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _CS507_QUEUE_H_
#define _CS507_QUEUE_H_

#include <exception>
#include "Array.h"

template <typename T>
class Queue {
public:
    /// Type definition of the type.
    typedef T type;

    /**
     * @class empty_exception
     *
     * Exception thrown to indicate the stack is empty.
     */
    class empty_exception : public std::exception
    {
    public:
        /// Default constructor.
        empty_exception(void)
            : std::exception() { }

        /**
         * Initializing constructor.
         *
         * @param[in]      msg         Error message.
         */
        empty_exception(const char* msg)
            : std::exception(msg) { }
    };
    //constructor
    Queue(void);
    //copy constructor
    Queue(const Queue& Queue);
    //destructor
    ~Queue(void);
    //adds the element to the end of the list;
    void enqueue(T element);
    //removes the element at the front of the list.If there are not elements in the queue, this method throws empty_exception, similar to the stack;
    void dequeue(void);
    //test if the queue is empty. If the queue is empty, then this method returns true. Otherwise, this method returns false;
    bool is_empty(void) const;
    //returns the number of elements in the queue
    size_t size(void) const;
    //removes all the elements in the queue.
    void clear(void);
private:   
    int end;
    int beg;
    size_t cur_size_, max_size_;
    Array<T> data_;

};

#include "Queue.cpp"
#endif