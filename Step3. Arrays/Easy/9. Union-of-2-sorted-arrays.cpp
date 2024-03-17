// https://www.codingninjas.com/studio/problems/sorted-array_6613259

#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int> unionSet;
    for (int num : a) {
        unionSet.insert(num);
    }
    for (int num : b) {
        unionSet.insert(num);
    }
    // Convert the set to a vector
    vector<int> unionVec(unionSet.begin(), unionSet.end());
    return unionVec;
}