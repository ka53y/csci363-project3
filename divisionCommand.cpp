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
#include "divisionCommand.h"

divisionCommand::divisionCommand(Stack<int>& arr)
	: Binary_Op_Command(arr),
	arr_(arr)
{
}
//dviides but checks because cant divide by 0 
int divisionCommand::evaluate(int x, int y) const
{
	if (y == 0) {
		throw std::exception();
	}
	else {
		return x / y;
	}
	
}
char divisionCommand::command_id()
{
	return '/';
}

