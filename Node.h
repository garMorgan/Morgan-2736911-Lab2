#ifndef NODE_H
#define NODE_H

class Node
{
	public:

	//constructor
	//sets m_value to zero
	//sets m_next to nullptr
	Node();
	
	//sets m_value to val
	void setValue(int val);

	//returns m_value
	int getValue();

	//sets m_next
	void setNext(Node* prev);

	//returns m_next
	Node* getNext();
	
	private:

	//value for node
	int m_value;

	//pointer to another node
	Node* m_next;

};
#endif

