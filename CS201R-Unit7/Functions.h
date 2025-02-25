#pragma once
#include <iostream>
#include <vector>
using namespace std;

//SEARCH FUNCTIONS
// 
//PRE:  vector loaded with int values & key value is sent
//POST: returns the position of key in the vector 
//      or -1 if not found
int LinearSearch(vector<int> v1, int key);

//PRE:  vector is sorted & key value is sent
//POST: returns the position of key in the vector 
//      or -1 if not found
int BinarySearch(vector<int> v1, int key);


//SORTING ALGORITHMS


//PRE:  vector loaded with int values 
//POST: sorts the given vector using selection sort
void SelectionSort(vector<int>& v1);

//PRE:  vector loaded with int values 
//POST: sorts the given vector using insertion sort
void InsertionSort(vector<int>& v1);

//PRE:  vector loaded with int values 
//POST: sorts the given vector using bubble sort
void BubbleSort(vector<int>& v1);

//PRE:  vector loaded with int values 
//POST: sorts the given vector using quick sort
void QuickSort(vector<int>& v1, int, int);

//PRE:  vector loaded with int values 
//POST: sorts the given vector using merge sort
vector<int> MergeSort(vector<int> v1);