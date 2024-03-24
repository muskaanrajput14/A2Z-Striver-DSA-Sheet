// https://www.codingninjas.com/studio/problems/alternate-numbers_6783445?leftPanelTabValue=SUBMISSION


vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    // optimal 
    // tc - o(n) and sc-o(n)
    int n = a.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex=1;

    for(int i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            ans[posIndex] = a[i];
            posIndex+=2;
        }
        else
        {
            ans[negIndex] = a[i];
            negIndex+=2;
        }
    }
    return ans;



    // brute
    // tc - o(2n) sc-o(n)
    // int n = a.size();
    // vector<int> pos;
    // vector<int> neg;
    // for(int i =0; i<n; i++)
    // {
    //     if(a[i] < 0)
    //     {
    //         neg.push_back(a[i]);
    //     } else if (a[i] > 0) {
    //         pos.push_back(a[i]);
    //     }
    // }
    // for(int i=0;i<n/2;i++)
    // {
    //     a[2*i] = pos[i];
    //     a[2*i+1] = neg[i];
    // }
    // return a;
}