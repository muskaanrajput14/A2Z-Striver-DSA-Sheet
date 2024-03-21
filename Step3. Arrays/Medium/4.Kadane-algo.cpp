// https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long  int maxi =0, sum =0;
    for(long long int i =0; i<n; i++)
    {
        sum+= arr[i];
        maxi = max(maxi, sum);
        if(sum < 0)
        {
            sum =0;
        }
    }
    return maxi;
}