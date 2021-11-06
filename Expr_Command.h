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
#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

class Expr_Command {
public:
	virtual char getI() = 0;
	virtual void execute(void) = 0;
	virtual void precedence(Stack<Expr_Command*>& thirdStack, Array <Expr_Command*>& out, int& track) = 0;
	
};

#endif