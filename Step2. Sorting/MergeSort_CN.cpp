#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
  vector<int> temp;
  int left = l;
  int right = mid + 1;
  int k = 0;

  while (left <= mid && right <= r) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    }
    else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
     left++;
  }

  while (right <= r) {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = l; i <= r; i++) {
    arr[i] = temp[i - l];
  }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
    return;
  }

  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}

/*
Merge Sort Function for Vectors
The last part of the code introduces a wrapper function that allows using 
Merge Sort with a vector instead of an array.

Vector to Array Conversion: 
The function starts by obtaining the size of the vector arr 
and then gets a pointer to its first element using &arr[0]. 
This effectively treats the vector as an array 
because the elements of a vector are stored contiguously in memory, 
just like an array.

Calling Merge Sort on the Array:
It then calls the mergeSort() function designed for
 arrays on this "array" representation of the vector.
*/


void mergeSort(vector<int> &arr, int l, int r) {
  int n = arr.size();
  int *arrPtr = &arr[0];
  mergeSort(arrPtr, l, r);
}
