/*
 * DataStructures.cpp
 * 
 * Author: Leonardo Vencovsky
 * Created on 12/03/2018
 *
 * Entry point to project
 *
 */

#include "stdafx.h"
#include ".\Headers\Tests.hpp"

extern "C" {
	#include "C\Headers\CTests.h"
}

using namespace std;

int main()
{
	cout << endl;
	cout << " +--------------------------------------------------------------------+" << endl;
	cout << " |                                                                    |" << endl;
	cout << " |                           Data Structures                          |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " +--------------------------------------------------------------------+" << endl;
	cout << endl;
	cout << " +--------------------------------------------------------------------+" << endl;
	cout << " |                                                                    |" << endl;
	cout << " | - Singly Linked List                                               |" << endl;
	cout << " |     __      __      __      __      __                             |" << endl;
	cout << " |    |__| -> |__| -> |__| -> |__| -> |__| -> null                    |" << endl;
	cout << " |    head                            tail                            |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " | - Doubly Linked List                                               |" << endl;
	cout << " |             __       __       __       __                          |" << endl;
	cout << " |    null <- |__| <-> |__| <-> |__| <-> |__| -> null                 |" << endl;
	cout << " |            head                       tail                         |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " | - Queue                                                            |" << endl;
	cout << " |            __      __  __  __  __  __      __                      |" << endl;
	cout << " | enqueue() |__| --> __||__||__||__||__ --> |__| dequeue()           |" << endl;
	cout << " |                  front            back                             |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " | - Stack           __                __                             |" << endl;
	cout << " |           push() |__| -->      --> |__| pop()                      |" << endl;
	cout << " |                           |__|                                     |" << endl;
	cout << " |                           |__|                                     |" << endl;
	cout << " |                           |__|                                     |" << endl;
	cout << " |                           |__|                                     |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " | - Binary Tree          _____                                       |" << endl;
	cout << " |                       |_____| Root              _                  |" << endl;
	cout << " |                   _____/   \\_____                |                 |" << endl;
	cout << " |     left-child   |_____|   |_____|  right-child  |                 |" << endl;
	cout << " |              ___ / \\ ___    ___/ \\ ___           | Sub tree        |" << endl;
	cout << " |             |___|   |___|  |___|  |___|  Leaves  |                 |" << endl;
	cout << " |                             ^        ^          _|                 |" << endl;
	cout << " |                             |siblings|                             |" << endl;
	cout << " |                                                                    |" << endl;
	cout << " +--------------------------------------------------------------------+" << endl;
	
	//SinglyLinkedListTest();
	//DoublyLinkedListTests();

	CSinglyLinkedListTests();
	//CDoublyLinkedListTests();

	//CArrayTests();
	// SortingTests();

	//VectorTests();
	//DArrayTests();
	
    return 0;
}

