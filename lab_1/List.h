#pragma once
#include "Node.h"
template <typename T>

class List
{
public:
	Node<T>* head;
	Node<T>* tail;
	int all;
	void addBegin();
	void addEnd();
	void showAll();
	void deleteBegin();
	void deleteEnd();
	T findNodeNr(int i);//dzia³a poprawnie
	void newValueNr(int i, T newData);
	Node<T>* findNodeWithData(T _value);
	bool deleteNodeWithData(T _value);
	void deleteList();
	List() {
		this->head = nullptr;
		this->tail = nullptr;
		this->all = 0;
	}
};

