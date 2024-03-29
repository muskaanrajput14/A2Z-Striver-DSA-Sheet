// https://www.naukri.com/code360/problems/binary-search_972?leftPanelTabValue=PROBLEM


int search(vector<int> &nums, int target) {
    // Write your code here.
    // binary  - o(nlogn)
    int n = nums.size();
    int high = n-1;
    int low = 0;
    while(low<=high){
        int mid = (high+low)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid]>target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
    // linear search 
    // int n = nums.size();
    // for(int i=0; i<n; i++)
    // {
    //     if(nums[i] == target)
    //     {
    //         return i;
    //     }
    // }
    // return -1;
}