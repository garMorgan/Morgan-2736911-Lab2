#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main()
{
	Node* node = new Node();
	node->setValue(5);
	Node* node2 = new Node();
	node2->setValue(2);
	node->setNext(node2);
	Node* node3 = node;	
	while(node3!=nullptr)
{
	cout << node3->getValue() << endl;
	node3 = node3->getNext();
}
	return 0;
}

