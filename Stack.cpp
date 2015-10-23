#include "Stack.h"

template<typename a_type>
Stack<a_type>::Stack()
{
	m_list = NULL;
	size = 0;
}

template<typename a_type>
Stack<a_type>::Stack(int in_size)
{
	m_list = new LinkedList<a_type>();
	size = in_size;
}

template<typename a_type>
Stack<a_type>::Stack(Stack<a_type>& obj)
{
}

template<typename a_type>
Stack<a_type>::~Stack()
{
}

template<typename a_type>
void Stack<a_type>::Push(a_type* in_node)
{
	m_list->Append(in_node);
}
