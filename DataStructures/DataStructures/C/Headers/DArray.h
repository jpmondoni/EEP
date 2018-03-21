/*
* DArray.h
*
* Author: Leonardo Vencovsky
* Created on 20/03/2018
*
* Header for Dynamic Array in C
*
*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

	typedef struct DArray {
		int *array;  // Array of integers
		int size;    // Actual Size
		int maxSize; // Maximum size. Past this - grow
		int minSize; // Minimum size. Past this - shrink
	} DArray;

	// +-------------------------------------+
	// |           Returns array             |
	// +-------------------------------------+
	DArray * getDArray(int maxSize, int minSize);

	// +-------------------------------------+
	// |             Push / Pop              |
	// +-------------------------------------+
	int pushDArray(DArray **array);
	int popDArray(DArray **array);

	// +-------------------------------------+
	// |          Insert / Remove            |
	// +-------------------------------------+
	int insertValueDArray(DArray *array, int position, int value);
	int removeValueDArray(DArray *array, int position);

	// +-------------------------------------+
	// |               Erase                 |
	// +-------------------------------------+
	int eraseDArray(DArray *array);

	// +-------------------------------------+
	// |              Display                |
	// +-------------------------------------+
	int displayDArray(DArray *array);

	// +-------------------------------------+
	// |              Resize                 |
	// +-------------------------------------+
	int checkSizeDArray();
	// Shrink
	// Grow

#ifdef __cplusplus
}
#endif