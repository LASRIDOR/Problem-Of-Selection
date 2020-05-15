#include "Heap.h"

Heap::Heap(int max) { // allocated memory for the heap and make the heap empty
	this->data = new Person[max];
	this->maxSize = max;
	this->heapSize = 0;
	this->allocated = 1;
}

//---------------------------------------------------------------------------

//constructor : convert an array which contains n numbers into a heap.
//Idea: the numbers in place n-1... n/2 are leaves.
//build small heaps starting from leaves
// and fix heaps while going toward the root.
Heap::Heap(Person* A, int n) {
	this->data = A; // assign array to data pointer
	this->maxSize = this->heapSize = n;
	this->allocated = 0; // memory not allocated by Heap
	BuildHeap(n);
}

void Heap::BuildHeap(int n) { // floyd allgo
	for (int i = n / 2 - 1; i >= 0; i--) {
		FixHeap(i);
	}
}

//---------------------------------------------------------------------------

//destructor : delete memory only if allocated by Heah
Heap::~Heap() {
	if (allocated) {
		delete[]data;
	}
	data = nullptr;
}

//---------------------------------------------------------------------------
Person Heap::Min(void) {
	return data[0];
}

//---------------------------------------------------------------------------

Person Heap::DeleteMin(void) { // check operator = 
	if (heapSize < 1) {
		cout << "Error: EMPTY HEAP" << endl;
		exit(1);
	}
	Person min_person;
	min_person = data[0];
	heapSize--;
	SwapClass(this->data[0], this->data[heapSize]);// check this
	FixHeap(0);
	return min_person;
}

//---------------------------------------------------------------------------

void Heap::Insert(Person item) {
	if (heapSize == maxSize) {
		cout << "Error: FULL HEAP" << endl;
		exit(1);
	}
	int i = heapSize; 
	heapSize++;

	while ((i > 0 ) && (data[Parent(i)].GetId() > item.GetId())) {
		data[i] = data[Parent(i)];
		i = Parent(i);
		this->NumComp++;
	}
	data[i] = item; // check if in moveewq	
	//data[i].SetId(item.GetId());
	//data[i].SetName(item.GetName());
}

//---------------------------------------------------------------------------
//PRIVATE MEMBER FUNCTION of Heap class
//---------------------------------------------------------------------------

int Heap::Left(int node) {
	return (2 * node + 1);
}

//---------------------------------------------------------------------------

int Heap::Right(int node) {
	return (2 * node + 2);
}

//---------------------------------------------------------------------------

int Heap::Parent(int node) {
	return (node - 1) / 2;
}

//---------------------------------------------------------------------------

void Heap::FixHeap(int node) { // fixes the heap that has node as root
	int min;
	int left = Left(node);
	int right = Right(node);

	// find maximum among node.left and right
	if ((left < heapSize) && (data[left].GetId() < data[node].GetId())) {
		min = left;
		NumComp++;
	}
	else {
		min = node;
	}
	if ((right < heapSize) && (data[right].GetId() < data[min].GetId())) {
		min = right;
		NumComp++;
	}
	//Swap values if necessary, and continue
	//fixing the heap towards the leaves
	if (min != node) {
		swap(data[node],data[min]);
		FixHeap(min);
	}
}

//---------------------------------------------------------------------------

void Heap::SwapClass(Person& p1, Person& p2) {
	Person tmp = std::move(p1);
	p1 = std::move(p2);
	p2 = std::move(tmp);
}


//---------------------------------------------------------------------------

Person Heap::SelectionHeap(int klowest) {
	Person kperson;
	for (int i = 0; i < klowest; i++) {
		kperson = DeleteMin();
	}
	return kperson;
}

//---------------------------------------------------------------------------

bool Heap::IsEmpty() {
	if (heapSize == 0) {
		return true;
	}
	else {
		return false;
	}
}

//---------------------------------------------------------------------------

void Heap::MakeEmpty() {
	if (allocated) {
		delete[]data;
	}
	data = nullptr;
	this->allocated = 0;
	this->heapSize = 0;
	this->maxSize = 0;
	this->NumComp = 0;
}

//---------------------------------------------------------------------------

int Heap::GetNumCopm() {
	return NumComp;
}

//---------------------------------------------------------------------------