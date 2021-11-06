// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "exe.h"

exe::exe() {

}

void exe::exeR(Expr_Command* input) {
	input->execute();
}