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
#ifndef _STACK_EXPR_COMMAND_FACTORY_h_
#define _STACK_EXPR_COMMAND_FACTORY_h_
#include "exprCommandFactory.h"
#include "Stack.h"

class stackExprCommandFactory : public exprCommandFactory {
public:
	
	virtual modCommand* createModCommand(void);
	virtual multiplyCommand* createMultiplyCommand(void);
	virtual divisionCommand* createDivisionCommand(void);
	virtual addCommand* createAddCommand(void);
	virtual subtractCommand* createSubtractCommand(void);
	virtual numberCommand* createNumberCommand(int n);
	stackExprCommandFactory(Stack<int>& arr);
	virtual ~stackExprCommandFactory();
	
private:
	Stack<int>& arr_;

};

#endif // !_STACK_EXPR_COMMAND_FACTORY_h_
