#include "Array.h"
#include "Fixed_Array.h"
#include "Stack.h"
#include "Queue.h"

#include "iostream"

void printArr(int index, Array<char> *arr) {
	arr->get(index);
}
int main (int argc, char * argv [])
{
   //TODO Add code here to test your Array class.
	Array<char>* arr = new Array<char>(5, 'a');
	Array<char>* ar1 = new Array<char>();
	Array<char>* ar2 = new Array<char>(5);
	Fixed_Array<char, 1>* arf = new Fixed_Array<char, 1>();
	Stack<char>* arS = new Stack<char>();
	Queue<char>* arq = new Queue<char>();
	//Array<char>* ar3 = new Array<char>(*ar2);
	for (size_t i = 0; i < arr->size(); i++)
	{
		printArr(i, arr);
	}
	for (size_t i = 0; i < ar1->size(); i++)
	{
		printArr(i, ar1);
	}
	for (size_t i = 0; i < ar2->size(); i++)
	{
		printArr(i, ar2);
	}
	arr->set(1, 'b');
	arf->set(1, 'b');
	arS->push('c');
	arS->push('c');
	arS->pop();
	arS->top();
	arS->is_empty();
	arS->printStack();
	arS->clear();
	arS->is_empty();
	arf->fill('b');
	arf->find('b');
	arq->enqueue('a');
	arq->enqueue('b');
	arq->enqueue('c');
	arq->is_empty();
	arq->dequeue();
	arq->clear();
	arq->is_empty();

   /*
   Array* newA = new Array(9, 'a');
  Array* temp = new Array(9, 'a');
  Array* cop = new Array(*temp);
  array1->set(0, 'a');
  array1->set(1, 'b');
  array1->get(0);
  array1->get(1);
  array1->resize(1);
  array1->resize(6);
  //temp->slice(3);
  //newA->slice(2, 4);
  
  array1->fill('a');
  array1->set(1, 'b');
  array1->find('b');
  array1->set(3, 'b');
  array1->find('b', 2);
  array1->get(3);
  std::cout << "==============" << std::endl;
  std::cout << array1->size() << std::endl;
  for (size_t i = 0; i < array1->size(); i++)
  {
	  printArr(i, array1);
  }
  array1->shrink();
  for (size_t i = 0; i < array1->size(); i++)
  {
	  printArr(i, array1);
  }
  array1->reverse();
  for (size_t i = 0; i < array1->size(); i++)
  {
	  printArr(i, array1);
  } */
  return 0;


}
