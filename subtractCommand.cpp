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
#include "subtractCommand.h"

subtractCommand::subtractCommand(Stack<int>& arr)
	: Binary_Op_Command(arr),
	arr_(arr)
{
}
//subtracts
int subtractCommand::evaluate(int x, int y) const
{
	return x - y;
}
char subtractCommand::command_id()
{
	return '-';
}

