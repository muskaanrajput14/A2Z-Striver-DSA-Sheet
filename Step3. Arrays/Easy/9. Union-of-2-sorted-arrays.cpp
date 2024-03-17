// https://www.codingninjas.com/studio/problems/sorted-array_6613259


#include <bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b) {
  // 2 pointer approch
  int n1 = a.size(), n2 = b.size();
  vector<int> union_arr;
  int i = 0, j = 0;
  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      union_arr.push_back(a[i]);
      i++;
    } else  if (a[i] > b[j]) {
      union_arr.push_back(b[j]);
      j++;
    } else {
      union_arr.push_back(a[i]);
      i++;
      j++;
    }
  }
  while(i<n1)
  {
      union_arr.push_back(a[i]);
      i++;
  }
  while(j<n2)
  {
      union_arr.push_back(b[j]);
      j++;
  }

//   to remove dupliactes
   sort(union_arr.begin(), union_arr.end());
   union_arr.erase(unique(union_arr.begin(), union_arr.end()), union_arr.end());
  return union_arr;

  // set approach
  // set<int> unionSet;
  // for (int num : a) {
  //     unionSet.insert(num);
  // }
  // for (int num : b) {
  //     unionSet.insert(num);
  // }
  // // Convert the set to a vector
  // vector<int> unionVec(unionSet.begin(), unionSet.end());
  // return unionVec;
}