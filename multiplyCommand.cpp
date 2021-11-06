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
#include "multiplyCommand.h"

multiplyCommand::multiplyCommand(Stack<int>& arr)
	: Binary_Op_Command(arr),
	arr_(arr)
{
}
//multiplies
int multiplyCommand::evaluate(int x, int y) const
{
	return x * y;
}
char multiplyCommand::command_id()
{
	return '*';
}

