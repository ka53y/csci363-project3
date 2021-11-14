// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Array.h"
#include "Stack.h"
#include "exe.h"
#include "exprCommandFactory.h"
#include "stackExprCommandFactory.h"



template<typename T>
void printArray(Array<T>* array) {
    size_t size = array->size();
    std::cout << "printing array of size: " << size << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << array->get(i) << " ";
    }
    std::cout << std::endl;
    
}
template<typename T>
void printStack(Array<T>* array) {
    size_t size = array->size();
    std::cout << "printing array of size: " << size << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << array->get(i) << " ";
    }
    std::cout << std::endl;

}


void testArrayInitializers() {
    Array<int>* emptyArr = new Array<int>();
    printArray<int>(emptyArr);
    Array<int>* arr = new Array<int>(9);
    printArray<int>(arr); 
    Array<int>* filledArr = new Array<int>(8, 1);
    printArray<int>(filledArr);

}

template <typename T>
void runStackPushTest(Stack<T>* stack, T element) {
    size_t count = 10;
    for (int i = 0; i < count; i++) {
        stack->push(element);
    }
    std::cout << "print" << std::endl;
    // stack->printStack();
}
void runStackTest() {
    std::cout << "Beginning Stack Tests.\n";
    Stack<int>* emptyStack = new Stack<int>();
    //emptyStack->printStack();

    runStackPushTest<int>(emptyStack, 3);

}
void runArrayTests() 
{
    std::cout << "Beginning Array Tests.\n";
    testArrayInitializers();
}
int priority(const std::string input) {
    int prio = -1;
    if (input == "/") {
        prio = 1;
    }
    else if (input == "*") {
        prio = 1;
    }
    else if (input == "%") {
        prio = 1;
    }
    else if (input == "+") {
        prio = 2;
    }
    else if (input == "-") {
        prio = 2;
    }
    return prio;
}
bool findPost(const std::string& input, exprCommandFactory& fac, Array <Expr_Command*>& out) {
    int track = 0;
    int solution;
    Expr_Command* out1 = 0;
    Stack<Expr_Command*> third;
    std::string inp = input;
    //loops through the input to determine what the command required is and if none of the commands
    //are triggered then do a number command
    for (size_t i = 0; i < inp.size()-1; i++)
    {
        if (inp.at(i) == '%') {
            out1 = fac.createModCommand();
        }
        else if (inp.at(i) == '*') {
            out1 = fac.createMultiplyCommand();
        }
        else if (inp.at(i) == '/') {
            out1 = fac.createDivisionCommand();
        }
        else if (inp.at(i) == '+') {
            out1 = fac.createAddCommand();
        }
        else if (inp.at(i) == '-') {
            out1 = fac.createSubtractCommand();
        }
        else if (inp.at(i) == '(') {
            third.push(inp.at(i);
        }
        else if (inp.at(i) == ')') {
            //pop until it finds a (
            while (third.top() != "(") {
                third.pop();
           }
            third.pop();
        }
        else
        {
            out1 = fac.createNumberCommand(inp.at(i));
        }
        out1 = inp.at(i);
        third.push(out1);
    }
    while (!third.is_empty()) {
        out1 = third.pop();
        out[track] = out1;
        track++;
    }
    return true;
}

int main()
{
    std::cout << "Hello World!\n";
    //runArrayTests();
    std::cout<<std::endl;
    //runStackTest();
    std::string userInfix = "";
    bool stop = false;
    Stack<int> inp;
    Array<Expr_Command*> out(10);
    stackExprCommandFactory fac(inp);
    //exe exe;
    while (!stop) {
        std::cout << "Expression input or type 'quit' to exit: " << std::endl;
        std::cin >> userInfix;
        if (userInfix == "quit") {
            stop = true;
        }
        else {
            if (findPost(userInfix, fac, out)) {
                for (size_t i = 0; i < out.size(); i++)
                {
                    if (out[i] != 0) {
                        exe.exeR(out[i]);
                    }
                }
                std::cout << inp.top();
            }

        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
