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

#include "stackExprCommandFactory.h"



numberCommand* stackExprCommandFactory::createNumberCommand(int n) {
	return new numberCommand(arr_,n);
}
modCommand* stackExprCommandFactory::createModCommand() {
	return new modCommand(arr_);
}
multiplyCommand* stackExprCommandFactory::createMultiplyCommand() {
	return new multiplyCommand(arr_);
}
divisionCommand* stackExprCommandFactory::createDivisionCommand() {
	return new divisionCommand(arr_);
}
addCommand* stackExprCommandFactory::createAddCommand() {
	return new addCommand(arr_);
}
subtractCommand* stackExprCommandFactory::createSubtractCommand() {
	return new subtractCommand(arr_);
}
stackExprCommandFactory::stackExprCommandFactory(Stack<int>& arr)
	: arr_(arr) {
}
stackExprCommandFactory::~stackExprCommandFactory() {

}
