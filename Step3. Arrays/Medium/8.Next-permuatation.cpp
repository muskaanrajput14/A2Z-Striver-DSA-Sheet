// https://www.naukri.com/code360/problems/next-greater-permutation_6929564?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
vector<int> nextGreaterPermutation(vector<int> &A) {
    // optimal  tc-o(n)+o(n)+o(n) = o(3n)
     int n = A.size(); // size of the array.
    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }
    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }
    // Step 2: Find the next greater element and swap it with arr[ind]:
    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());
    
    return A;


    // better solution
    // next_permutation(A.begin(), A.end());
    // return A;
}