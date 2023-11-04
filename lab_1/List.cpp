#include "List.h"

#include <iostream>
template<typename T>
bool List<T>::deleteNodeWithData(T _value) {
	Node<T>* myNode = findNodeWithData(_value);
	if (myNode) {
		if (!myNode->prev) {
			deleteBegin();
			return true;
		}
		else if (!myNode->next) {
			deleteEnd();
			return true;
		}
		else {
			Node<T>* myNewNode = myNode;
			myNewNode->next->prev = myNode->prev;
			myNewNode->prev->next = myNode->next;
			delete myNode;
			delete myNewNode;
			return true;
		}
	}
	else {
		return false;
	}
}

template<typename T>
Node<T>* List<T>::findNodeWithData(T _value){
	if (all == 0) {
		cout << "Lista jest pusta\n";
		return 0;
	}
	Node<T>* myHead = head;
	for (int j = 0; j < all; j++) {

		if (_value==myHead->data->value)
		{
			return myHead;
		}
		myHead = myHead->next;
	}
	cout << "Element o podanej wartoœci nie istnieje.\n";
	return NULL;

}

template<typename T>

void List<T>::newValueNr(int i, T newData) {
	if (all == 0) {
		cout << "Lista jest pusta\n";
		exit;
	}
	Node<T>* myHead = head;
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
template<typename T>
T List<T>::findNodeNr(int i) {
	if (all == 0) {
		cout << "Lista jest pusta\n";
		return 0;
	}
	Node<T>* myHead = head;
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


template<typename T>
void List<T>::deleteBegin() {
	if (all == 0) {
		cout << "Lista jest pusta.\n";
	}
	else {
		Node<T>* myHead = head->next;
		delete head;
		head = myHead;
		head->prev = nullptr;
	}
}
template<typename T>
void List<T>::deleteEnd(){
	if (all == 0) {
		cout << "Lista jest pusta.\n";
	}
	else {
		Node<T>* myTail = tail->prev;
		delete tail;
		tail = myTail;
		tail->next = nullptr;
	}
}
template<typename T>
void List<T>::showAll() {
	Node<T>* myHead = head;
	while (myHead != nullptr) {
		std::cout<< myHead->data->value << endl;
		myHead = myHead->next;
	}
	cout << "-------------------\n";
}
template<typename T>
void List<T>::addBegin() 
{
	Node<T>* newNode = new Node<T>();
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
template<typename T>
void List<T>::addEnd() {
	Node<T>* newNode = new Node<T>();
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