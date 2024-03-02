vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    // for(int i=1; i<=x; i++)
    // {
    //     ans.push_back(i);
    //     printNos(x-1);
    // }
    // return ans;
     if (x > 0) {
        ans = printNos(x - 1); // Recursively call the function with x-1
        ans.push_back(x); // Push x into the vector after the recursive call
    }
    return ans;
}