#pragma once
#include "LinkedList.h"
template<typename a_type>
class Stack
{
private:
	LinkedList<a_type>* m_list;
	int size;
public:
	Stack();
	Stack(int in_size);
	Stack(Stack<a_type>& obj);
	~Stack();
	void Push(Node<a_type>* in_node);
	bool isEmpty();
	bool isFull();
	
};
