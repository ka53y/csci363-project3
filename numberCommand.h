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
#include "Expr_Command.h"
#include "Stack.h"
#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_
class numberCommand : public Expr_Command {
public:
	numberCommand(Stack<int>& arr, int count);
	virtual char getI();
	virtual void precedence(Stack<Expr_Command*>& third, Array<Expr_Command*>& out, int& track);
	virtual void execute(void);
private:
	Stack<int>& arr_;
	int count;
};
#endif // !_NUMBER_COMMAND_H_

