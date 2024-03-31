// https://www.naukri.com/code360/problems/longest-successive-elements_6811740?leftPanelTabValue=PROBLEM


int longestSuccessiveElements(vector<int>&a) {
    // Write your code here
      sort(a.begin(),a.end());
    int cnt = 0 ;
    int pre = a[0];
    int pc=1;
    int n=a.size();
    for(int i=1;i<n;i++)
    {
        if(a[i]==pre) continue;
        if(a[i]==pre+1) pc++;
        else pc=1;
        cnt=max(cnt,pc);
        pre=a[i];
    }
    return cnt;
}