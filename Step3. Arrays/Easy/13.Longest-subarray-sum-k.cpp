// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?leftPanelTabValue=SUBMISSION


#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    // best approach -- 2 pointer
    int len=0, maxLen =0;
    int left=0, right =0;
    long long sum =a[0];
    int n = a.size();
    
    while(right < n)
    {
        while(left<= right && sum > k)
        {
            sum -=a[left];
            left++;
        }
        if(sum == k)
        {
            maxLen= max(maxLen, right-left+1);
        }
        right++;

        if(right <n) sum+=a[right];
    }
    return maxLen;


    // better approach -->  partially accepted
    // map<long long, int> preSumMap;
    // long long sum =0;
    // int maxLen = 0;

    // for(int i=0; i<a.size(); i++)
    // {
    //     sum += a[i];
    //     if(sum == k)
    //     {
    //         maxLen = max(maxLen, i+1);
    //     }
    //     long long rem = sum-k;
    //     if(preSumMap.find(rem) != preSumMap.end())
    //     {
    //         int len = i - preSumMap[rem];
    //         maxLen = max(maxLen, len);
    //     }
    //     if(preSumMap.find(sum) == preSumMap.end()){
    //         preSumMap[sum] = i;
    //     }
    // }
    // return maxLen;


    // brute force--> 36/40
    // int s, len=0;
    // int n = a.size();
    // for(int i =0; i<n; i++)
    // {
    //     s=0;
    //     for(int j =i; j<n; j++)
    //     {
    //         s += a[j];
    //         if(s==k) len = max(len, j-i+1);
    //     }
    // }
    // return len;
}

