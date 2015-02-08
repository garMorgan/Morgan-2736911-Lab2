#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <cstdlib>

using namespace std;

LinkedList::LinkedList()
{
	m_size = 0;
	m_front = nullptr;
}
LinkedList::~LinkedList()
{
	Node* current;
	Node* temp = new Node();
	current = m_front;
	while(current->getNext()!=nullptr)
	{
	temp = current;
	current = current->getNext();
	free (temp);
	}
}
bool LinkedList::isEmpty() const
{
	if(m_front==nullptr)
	{ 
	return true;
	}
	else
	{
	return false;
	}
}
int LinkedList::size() const
{
	return m_size;
}
bool LinkedList::searching(int value) const
{
	Node* search;
	search = m_front;
	do
	{
	if(search->getValue()==value)
		{
		return true;
		}
	search = search->getNext();
	}
	while(search->getNext()!=nullptr);
	if(search->getValue()==value)
		{
		return true;
		}
	return false;
}
void LinkedList::printList() const
{
	Node* print;
	print = m_front;
	if(isEmpty())
	{
	cout << "List is empty" << endl;
	}
	else
	{
	while(print->getNext()!=nullptr)
		{
		cout << print->getValue() << " ";
		print = print->getNext();
		}
	cout << print->getValue() << endl;
	}
	
}
void LinkedList::addBack(int value)
{
	Node* back;
	Node* temp = new Node();
	if(isEmpty())
	{
	addFront(value);
	}
	else
	{
	back = m_front;
	while(back->getNext()!=nullptr)
		{
		back = back->getNext();
		}
	temp->setValue(value);
	back->setNext(temp);
	}
}

void LinkedList::addFront(int value)
{
	Node* temp = new Node();
	temp->setValue(value);
	temp->setNext(m_front);
	m_front=temp;
}
bool LinkedList::removeBack()
{
	Node* back;
	Node* newBack;
	back = newBack;
	Node* temp = new Node();
	if(isEmpty())
	{
	return false;	
	}
	else
	{
	back = m_front;
		if(m_front->getNext()==nullptr)
		{
		m_front = nullptr;
		}
		else
		{
		while(back->getNext()!=nullptr)
		{
		newBack = back;
		back = back->getNext();
		}
		newBack->setNext(nullptr);
		}
	
	back->setValue(0);
	back->setNext(nullptr);

	return true;
	}
}
bool LinkedList::removeFront()
{
	if(isEmpty())
	{
	return false;
	}
	else
	{
	m_front = m_front->getNext();
	return true;
	}

}










