#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
	public:
	
	//constructor
	//sets m_front to nullptr and m_size to zero
	LinkedList();

	//deletes all nodes in the list
	~LinkedList();

	//returns true if the list is empty, false otherwise
	bool isEmpty() const;

	//returns the number of elements in the list
	int size() const;

	//returns true if the value is in the list, false otherwise
	bool searching(int value) const;

	//prints the list to console. "List empty" if it is empty
	void printList() const;

	//one new element added to the end of the list
	void addBack(int value);

	//one new element added to the front of the list
	void addFront(int value);

	//one element is removed from the back of the list
	//returns true if the back element was removed
	//false if list is empty 
	bool removeBack();

	//one element is removed from the front of the list
	//returns true if front element was removed
	//false if list is empty
	bool removeFront();

	private:

	//a pointer to the front of the list
	Node* m_front;
	
	//size of the list
	int m_size;


};
#endif

