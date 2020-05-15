#ifndef _HEAP_H
#define _HEAP_H

#include <iostream>
using namespace std;
#include "Person.h"

class Heap { // sort according to person's id;
private:
	Person* data; // points to data array
	int maxSize;  // Max size of heap
	int heapSize; // current size of heap
	int allocated; // 1 if allocate memory
	int NumComp; // counts num of ITEMS compare includong insert num and fix (curr compare)
	int Left(int node);
	int Right(int node);
	int Parent(int node);
	void FixHeap(int node);
	void SwapClass(Person& p1, Person& p2);
public:
	Heap(int max); //allocate memory
	Heap(Person* A,int n); // Turn A into Heap
	~Heap();
	Person Min(void);
	Person DeleteMin(void);
	void Insert(Person item);
	Person SelectionHeap(int klowest); // be careful earase all nodes till k lowest
	bool IsEmpty();
	void MakeEmpty();
	int GetNumCopm();
private:
	void BuildHeap(int n);
};


#endif // !_HEAP_H
