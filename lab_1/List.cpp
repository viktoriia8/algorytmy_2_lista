#include "List.h"

#include <iostream>

template<typename T1>

void List<T1>::newValueNr(int i, T1 newData) {
	if (all == 0) {
		cout << "Lista jest pusta\n";
		exit;
	}
	Node<T1>* myHead = head;
	for (int j = 0; j < all; j++) {
		if (j == i)
		{
			myHead->data->value=newData;
		}
		myHead = myHead->next;
	}
	cout << "Element jest poza zakresem.\n";
	exit;
}
template<typename T1>
T1 List<T1>::findNodeNr(int i) {
	if (all == 0) {
		cout << "Lista jest pusta\n";
		return 0;
	}
	Node<T1>* myHead = head;
	for (int j = 0; j<all; j++) {
		if(j==i) 
		{ 
			return myHead->data->value; 
		}
		myHead = myHead->next;
		}
	cout << "Element jest poza zakresem.\n";
	return false;
}


template<typename T1>
void List<T1>::deleteBegin() {
	if (all == 0) {
		cout << "Lista jest pusta.\n";
	}
	else {
		Node* myHead = head->next;
		delete head;
		head = myHead;
		head->prev = nullptr;
	}
}
template<typename T1>
void List<T1>::deleteEnd(){
	if (all == 0) {
		cout << "Lista jest pusta.\n";
	}
	else {
		Node<T1>* myTail = tail->prev;
		delete tail;
		tail = myTail;
		tail->next = nullptr;
	}
}
template<typename T1>
void List<T1>::showAll() {
	Node<T1>* myHead = head;
	while (myHead != nullptr) {
		std::cout<< myHead->data->value << endl;
		myHead = myHead->next;
	}
	cout << "-------------------\n";
}
template<typename T1>
void List<T1>::addBegin() 
{
	Node<T1>* newNode = new Node<T1>();
	newNode->next = head;

	if (all == 0) {
		tail = newNode;
	}
	else {
		head->prev = newNode;
	}
	head = newNode;
	newNode = nullptr;
	all++;
}
template<typename T1>
void List<T1>::addEnd() {
	Node<T1>* newNode = new Node<T1>();
	newNode->prev = head;

	if (all == 0) {
		tail = newNode;
	}
	else {
		tail->next = newNode;
	}
	tail = newNode;
	newNode = nullptr;
	all++;
}