// CS201R-Unit7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Functions.h"


int main() {
	int pos1, pos2;
	//PART 1 - SEARCHES
	//LINEAR
	vector<int> unsorted = { 15, 10, 99, 5, 6, 3, 16, 1 };
	pos1 = LinearSearch(unsorted, 6);
	pos2 = LinearSearch(unsorted, 19);
	cout << "LINEAR: " << pos1 << " " << pos2 << endl << endl;

	//BINARY
	vector<int>   sorted = { 1,3,5,6,10,15,16,99 };
	pos1 = BinarySearch(sorted, 6);
	pos2 = BinarySearch(sorted, 19);
	cout << "BINARY: " << pos1 << " " << pos2 << endl << endl;


	//PART 2 - SORTS
	vector<int> select = { 15,20,5,6,3,10,1 };
	vector<int> insert = { 15,20,5,6,3,10,1 };
	vector<int> bubble = { 15,20,5,6,3,10,1 };
	vector<int> quick = { 15,20,5,6,3,10,1 };
	vector<int> merge = { 15,20,5,6,3,10,1 };

	SelectionSort(select);
	InsertionSort(insert);
	BubbleSort(bubble);
	QuickSort(quick, 0, select.size() - 1);
	MergeSort(merge);
}
