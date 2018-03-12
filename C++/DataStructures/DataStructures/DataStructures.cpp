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
#include "SinglyLinkedList.hpp"

using namespace std;

int main()
{
	cout << "Hello World" << endl;

	SinglyLinkedList *sll = new SinglyLinkedList();
	
	int j;
	
	sll->displayMessage(sll->insertHead(10));
	sll->displayMessage(sll->insertTail(20));
	sll->displayMessage(sll->displayList());

	printf("\n");
    return 0;
}

