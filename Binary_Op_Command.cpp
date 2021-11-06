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
	int x = arr_.pop();
	int y = arr_.pop();
	int result = this->evaluate(x, y);
	arr_.push(result);
}



Binary_Op_Command::~Binary_Op_Command(void)
{
	//delete this->arr_;
}
//this checks every case for which operators could be used and sets the precedence for each one
void Binary_Op_Command::precedence(Stack<Expr_Command*>& thirdStack, Array<Expr_Command*>& out, int& track)
{
	
	bool check = false;
	while (!check) {
		if (!thirdStack.is_empty()) {
			x = thirdStack.pop();
		}
		else {
			check = true;
		}
	}
	if (!thirdStack.is_empty()) {
		y = thirdStack.pop();
		if (x->getI() == '%' && y->getI() == '%') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		} else if (x->getI() == '%' && y->getI() == '/') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		} else if (x->getI() == '%' && y->getI() == '*') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '+' && y->getI() == '*') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '+' && y->getI() == '/') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '+' && y->getI() == '%') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '+' && y->getI() == '-') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '+' && y->getI() == '+') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '-' && y->getI() == '*') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '-' && y->getI() == '/') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '-' && y->getI() == '%') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '-' && y->getI() == '+') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '-' && y->getI() == '-') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '*' && y->getI() == '*') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '*' && y->getI() == '/') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '*' && y->getI() == '%') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '/' && y->getI() == '/') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '/' && y->getI() == '*') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else if (x->getI() == '/' && y->getI() == '%') {
			out[track] = y;
			thirdStack.push(x);
			track++;
		}
		else {
			thirdStack.push(y);
			thirdStack.push(x);
			check = true;
		}
	}
	else {
		thirdStack.push(x);
		check = true;
	}
}