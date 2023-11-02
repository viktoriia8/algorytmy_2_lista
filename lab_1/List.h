#pragma once
#include "Node.h"
template <typename T1>

class List
{
public:
	Node<T1>* head;
	Node<T1>* tail;
	int all;
	void addBegin();
	void addEnd();
	void showAll();
	void deleteBegin();
	void deleteEnd();
	T1 findNodeNr(int i);//dzia³a poprawnie
	void newValueNr(int i, T1 newData);
	List() {
		this->head = nullptr;
		this->tail = nullptr;
		this->all = 0;
	}
};

