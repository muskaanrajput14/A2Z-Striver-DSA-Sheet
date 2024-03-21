// https://www.codingninjas.com/studio/problems/majority-element_6783241?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	// optimal - using Moore's Voting Algorithm
	int n=v.size(), cnt=0, el;
	for(int i=0; i<n; i++)
	{
		if(cnt == 0)
		{
			cnt=1;
			el=v[i];
		}
		else if(el == v[i]){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0; i<n; i++)
	{
		if(v[i] == el)  cnt1++;
	}
	if(cnt1 >n/2){
		return el;
	}
	return -1;


	// better solution
	// unordered_map<int, int> mpp;
	// int n = v.size();
	// for(int i=0; i<n; i++)
	// {
	// 	mpp[v[i]]++;
	// }
	// // iterating in map
	// for(auto it: mpp)
	// {
	// 	if(it.second > (n/2))
	// 	{
	// 		return it.first;
	// 	}
	// }
	// return -1;


	// brute force -> O(N^2)
	// int n = v.size();
	// for(int i=0; i<n; i++)
	// {
	// 	int cnt=0;
	// 	for(int j=0; j<n; j++)
	// 	{
	// 		if(v[j]==v[i]) 
	// 		{
	// 			cnt++;
	// 		}
	// 		if(cnt>n/2)  return v[i];
	// 	}
	// }
	// return -1;
}