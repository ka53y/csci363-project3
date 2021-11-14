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
#include "Binary_Op_Command.h"
#include "Stack.h"
#include<iostream>

Binary_Op_Command::Binary_Op_Command(Stack<int>& arr)
	: arr_(arr),
	x(0),
	y(0)
{

}
char Binary_Op_Command::getI()
{
	return this->command_id();
}

void Binary_Op_Command::execute(void)
{
	int x = arr_.pop(); //gets the values at top of stack
	int y = arr_.pop();
	int result = this->evaluate(x, y); //evalutes the top 2 values
	arr_.push(result); //pushes result back onto stack
}



Binary_Op_Command::~Binary_Op_Command(void)
{
	//delete this->arr_;
}