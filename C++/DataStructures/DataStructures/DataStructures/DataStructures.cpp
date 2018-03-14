/*
 * DataStructures.cpp
 * 
 * Author: Leonardo Vencovsky
 * Created on 12/03/2018
 *
 * Entrance point to project
 *
 */

#include "stdafx.h"
#include ".\Headers\SinglyLinkedListTests.hpp"
#include ".\Headers\DoublyLinkedListTests.hpp"

using namespace std;

int main()
{
	cout << endl;
	cout << " +-------------------------------------+" << endl;
	cout << " |                                     |" << endl;
	cout << " |           Data Structures           |" << endl;
	cout << " |                                     |" << endl;
	cout << " +-------------------------------------+" << endl;
	cout << endl;
	cout << " +-------------------------------------+" << endl;
	cout << " | Singly Linked List                  |" << endl;
	cout << " | Doubly Linked List                  |" << endl;
	cout << " |                                     |" << endl;
	cout << " |                                     |" << endl;
	cout << " |                                     |" << endl;
	cout << " |                                     |" << endl;
	cout << " +-------------------------------------+" << endl;
	
	SinglyLinkedListTest();
	DoublyLinkedListTests();
	
    return 0;
}

