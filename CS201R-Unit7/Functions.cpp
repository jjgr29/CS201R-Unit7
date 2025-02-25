#include "Functions.h"

void printl(vector<int> avector) {
    for (unsigned int i = 0; i < avector.size(); i++) {
        cout << avector[i] << " ";
    }
    cout << endl;
}

//LINEAR SEARCH
//PRE:  vector loaded with int values & key value is sent
//POST: returns the position of key in the vector 
//      or -1 if not found
/* PSUEDOCODE FOR LINEAR SEARCH
int LinearSearch(vector v1, int key) {
	FOR (i = 0; i < vector size; i++)
		IF (v1[i] = key)
		   return i
	RETURN -1
*/
int LinearSearch(vector<int> v1, int key) {
    cout << "\n\nLINEAR SEARCH\n";
    //cout << "Code this!\n";
    int i;
    for (i = 0; i < v1.size(); ++i) {
        if (v1.at(i) == key) {
            return i;
        }
    }
    return -1; /* not found */
}

//BINARY SEARCH
//PRE:  vector is sorted & key value is sent
//POST: returns the position of key in the vector 
//      or -1 if not found
/* PSUEDOCODE FOR BINARY SEARCH
int BinarySearch(vector, int key) {
	  SET low = 0;
	  SET high = size - 1;
	  WHILE (high >= low)
			SET mid = (high + low) / 2;
			IF (numbers[mid] < key)
				   SET low = mid + 1;
			ELSE IF (numbers[mid] > key)
				   SET high = mid - 1;
			ELSE {
			  RETURN mid;
	   ENDWHILE
	   RETURN -1; // not found
*/
int BinarySearch(vector<int> v1, int key) {
    cout << "\n\nBINARY SEARCH\n";
	//cout << "Code this!\n";
    int mid;
    int low;
    int high;

    low = 0;
    high = v1.size() - 1;

    while (high >= low) {
        mid = (high + low) / 2;
        if (v1.at(mid) < key) {
            low = mid + 1;
        }
        else if (v1.at(mid) > key) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1; // not found
}
//SELECTION SORT
//PRE:  vector loaded with int values 
//POST: sorts the given vector using selection sort
//      find the smallest value and swap with the current position
/*selection(vector v1){
  FOR i = 0 to size -1
       SET min_idx = i
       FOR(j = i+1; j < size; j++)
          IF (v1[j] < v1[min_idx])
            SET min_idx = j
          ENDIF
       ENDFOR
       SWAP (i, min_idx)
       PRINT v1
  ENDFOR
  PRINT v1
*/
void SelectionSort(vector<int>& v1) {
    cout << "\n\nSELECTION SORT\n";
    //cout << "CODE THIS\n";

    int i;
    int j;
    int indexSmallest;
    int temp;      // Temporary variable for swap

    for (i = 0; i < v1.size() - 1; ++i) {

        // Find index of smallest remaining element
        indexSmallest = i;
        for (j = i + 1; j < v1.size(); ++j) {

            if (v1[j] < v1[indexSmallest]) {
                indexSmallest = j;
            }
        }

        // Swap v1[i] and v1[indexSmallest]
        temp = v1[i];
        v1[i] = v1[indexSmallest];
        v1[indexSmallest] = temp;
        printl(v1);
    }
}

//INSERTION SORT
//PRE:  vector loaded with int values 
//POST: sorts the given vector using insertion sort
/*insertion(vector v1){
  FOR i = 0 to size -1
       SET j = i
       WHILE (j > 0 && v1[j] < v1[j-1])
           SWAP (j, j –1)
           j--
       ENDWHILE
       PRINT v1
  ENDFOR
  PRINT v1
*/
void InsertionSort(vector<int>& v1) {
    cout << "\n\nINSERTION SORT\n";
    //cout << "CODE THIS\n";
    int temp, j;
    for (int i = 1; i < v1.size(); ++i) {
        j = i;
        while (j > 0 && v1[j] < v1[j - 1]) {
            temp = v1[j];
            v1[j] = v1[j - 1];
            v1[j - 1] = temp;
            --j;
        }
        printl(v1);
    }
    printl(v1);
}

//BUBBLESORT
//PRE:  vector loaded with int values 
//POST: sorts the given vector using bubble sort
/*void BubbleSort(vector v1)
    FOR (i = size - 1 to 1)
       FOR (j = 0 to i)
         IF (v1[j] > v1[j + 1])
            SWAP (j, j + 1)
         ENDIF
       ENDFOR
       PRINT v1
    ENDFOR
    PRINT v1
*/
void BubbleSort(vector<int>& v1) {
    cout << "\n\nBUBBLE SORT\n";
    //cout << "CODE THIS\n";
    int temp;
    for (int i = v1.size() - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            if (v1[j] > v1[j + 1]) {
                temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
            }
        }
        printl(v1);
    }
}

//QUICK SORT
//PRE:  vector loaded with int values 
//POST: sorts the given vector using quick sort
/*  partition(v1, start, end){
     pivot = v1 [(start+end)/2]
     low = start
     high = end
     done = false
     while (!done){
        while (v1[low] < pivot)
             low ++;
        while (v1[high] > pivot)
             high --
        if (low > high)
             done = true
        else
              swap (low,high)
              low ++
              high –
     }
     return high;
  }
  quick(v1, start, end){
      IF (start >= end)
            return
       p = partition(v1, start, end)
       PRINT v1
       quick(v1,  start, p-1)
       quick(v1,  p+1, end)
  }
*/
void QuickSort(vector<int>& v1, int start, int end) {
    cout << "\n\nQUICK SORT\n";
    cout << "CODE THIS\n";
}

//MERGE SORT
/*
    vector<int> mergeSort(vector<int> v1) {
        IF (size > 1):
             SET mid = size / 2;
        SET lefthalf (0 to mid)
        SET righthalf (mid to end)
        mergeSort(lefthalf)
        mergeSort(righthalf)
        SET i = 0 (left half)
        SET j = 0 (right half)
        SET k = 0 (v1 - merged vector)
        WHILE (i < lefthalf size & j < righthalf size)
            IF lefthalf[i[ < righthalf[j]
                   ADD lefthalf[i] to vector
                    i++
            ELSE
                   ADD righthalf[j] to vector
                   j++
           ENDIF
        ADD remaining left half values
        ADD remaining righthalf members
      ENDIF
      RETURN v1
*/



//function sorts using mergesort.
vector<int> MergeSort(vector<int> avector) {
    cout << "Splitting ";
    printl(avector);
    if (avector.size() > 1) {
        int mid = avector.size() / 2;

        //C++ Equivalent to using Python Slices
        cout << *avector.begin() << " " << *(avector.begin() + mid) << " " << endl;
        vector<int> lefthalf(avector.begin(), avector.begin() + mid);
        vector<int> righthalf(avector.begin() + mid, avector.begin() + avector.size());

        lefthalf = MergeSort(lefthalf);
        righthalf = MergeSort(righthalf);

        unsigned i = 0;
        unsigned j = 0;
        unsigned k = 0;
        while (i < lefthalf.size() && j < righthalf.size()) {
            if (lefthalf[i] < righthalf[j]) {
                avector[k] = lefthalf[i];
                i++;
            }
            else {
                avector[k] = righthalf[j];
                j++;
            }
            k++;
        }

        while (i < lefthalf.size()) {
            avector[k] = lefthalf[i];
            i++;
            k++;
        }

        while (j < righthalf.size()) {
            avector[k] = righthalf[j];
            j++;
            k++;
        }

    }
    cout << "Merging ";
    printl(avector);

    return avector;
}