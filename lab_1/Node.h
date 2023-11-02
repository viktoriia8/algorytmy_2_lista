#pragma once
#include "Data.h"
using namespace std;
template <typename T1>
class Node
{
public:
	Node<T1>* prev;
	Node<T1>* next;
	Data<T1>* data;
	
	Node() {
		next = nullptr;
		prev = nullptr;
		data = new Data<T1>();
	};
};