// https://www.codingninjas.com/studio/problems/alternate-numbers_6783445?leftPanelTabValue=SUBMISSION

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> pos;
    vector<int> neg;
    for(int i =0; i<n; i++)
    {
        if(a[i] < 0)
        {
            neg.push_back(a[i]);
        } else if (a[i] > 0) {
            pos.push_back(a[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        a[2*i] = pos[i];
        a[2*i+1] = neg[i];
    }
    return a;
}