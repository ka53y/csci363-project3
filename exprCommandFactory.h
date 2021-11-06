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
#include "addCommand.h"
#include "subtractCommand.h"
#include "multiplyCommand.h"
#include "divisionCommand.h"
#include "modCommand.h"


#ifndef _EXPR_COMMAND_FACTORY_h_
#define _EXPR_COMMAND_FACTORY_h_
class exprCommandFactory {
public:
	exprCommandFactory() {}
	virtual ~exprCommandFactory() {};
	virtual addCommand* createAddCommand(void) = 0;
	virtual subtractCommand* createSubtractCommand(void) = 0;
	virtual numberCommand* createNumberCommand(int n) = 0;
	virtual modCommand* createModCommand(void) = 0;
	virtual multiplyCommand* createMultiplyCommand(void) = 0;
	virtual divisionCommand* createDivisionCommand(void) = 0;
private:
	exprCommandFactory(const exprCommandFactory&);
	


};
#endif