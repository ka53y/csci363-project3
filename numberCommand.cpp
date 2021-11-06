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
#include "numberCommand.h"

numberCommand::numberCommand(Stack<int>& arr, int count) 
	: arr_(arr),
	count(count)
{

}

char numberCommand::getI() {
	return '#';
}
//pushes number onto stack 
void numberCommand::execute(void) {
	arr_.push(this->count);
}
void numberCommand::precedence(Stack<Expr_Command*>& third, Array<Expr_Command*>& out, int& track) {
	out[track] = third.pop();
	track++;
}
