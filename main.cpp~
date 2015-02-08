#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

void printMenu();

int main()
{
	int number;
	int input;
	LinkedList list;
	
	do
	{
	printMenu();
	cin >> input;
	switch(input)
		{
		case 1 : cout << "Input a value to add: ";
		cin >> number;
		list.addFront(number);
		cout << "Adding " << number << " to the list" << endl;
		break;
		case 2 : cout << "Input a value to add: ";
		cin >> number;
		list.addBack(number);
		cout << "Adding " << number << " to the list" << endl;
		break;

		case 3 : cout << "Attempting removal from front of list" << endl;
		if(list.removeFront())
		{
		cout << "Removal successful" << endl;
		}
		else
		{
		cout << "There are no values to remove" << endl;
		}
		break;

		case 4 : cout << "Attempting removal from back of list" << endl;
		if(list.removeBack())
		{
		cout << "Removal successful" << endl;
		}
		else
		{
		cout << "There are no values to remove" << endl;
		}
		break;

		case 5 : cout << "Printing List" << endl;
		list.printList();
		break;
	
		case 6 : cout << "Enter a value to search for: ";
		cin >> number;
		cout << "Searching for " << number << "..." << endl;
		cout << number << " is ";
		if(list.searching(number))
		{
		cout << "in the list" << endl;
		}
		else
		{
		cout << "not in the list" << endl;
		}
		break;

		case 7 : cout << "Exiting..." << endl;
		break;

		default: cout << "Invalid choice" << endl;
		}
	}while(input!=7);
	


	return 0;
}




void printMenu()
{
	cout << "\n\nSelect from the following menu:\n"
			<< "1) Add to the front of the list\n"
			<< "2) Add to the end of the list\n"
			<< "3) Remove from front of the list\n"
			<< "4) Remove from back of the list\n"
			<< "5) Print the list\n"
			<< "6) Search for value\n"
			<< "7) Exit\n"
			<< "Enter your choice: ";
}

