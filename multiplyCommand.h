// -*- C++ -*-
// $Id: Array.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Array.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================
#include "Stack.h"
#include "Binary_Op_Command.h"

#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_
class multiplyCommand : public Binary_Op_Command {
public:
	multiplyCommand(Stack<int>& arr);
	virtual char command_id();
	virtual int evaluate(int x, int y) const;
private:
	Stack<int>& arr_;
};

#endif