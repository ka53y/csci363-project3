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
#include "Array.h"
#include "Expr_Command.h"
#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

class Binary_Op_Command: public Expr_Command {
public:
	virtual char getI();
	virtual char command_id() = 0;
	virtual void precedence(Stack<Expr_Command*>& thirdStack, Array<Expr_Command*>& out, int& track);
	virtual void execute(void);
	virtual int evaluate(int x, int y) const = 0;
	Binary_Op_Command(Stack<int>& arr);
	~Binary_Op_Command(void);
	
private: 
	Expr_Command* x;
	Expr_Command* y;
	Stack<int>& arr_;
	
};

#endif