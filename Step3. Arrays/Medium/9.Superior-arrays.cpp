// https://www.naukri.com/code360/problems/superior-elements_6783446?leftPanelTabValue=PROBLEM

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int n = a.size();
    int temp = a[n-1];
    ans.push_back(temp);
    for(int i=n-2; i>=0; i--)
    {
        if(a[i] > temp)
        {
            ans.push_back(a[i]);
        }
        temp = max(temp, a[i]);
    }

    return ans;
}