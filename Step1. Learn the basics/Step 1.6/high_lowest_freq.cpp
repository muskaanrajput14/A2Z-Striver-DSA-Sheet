vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int, int>mpp;
    int n = v.size();
    for(int i =0; i<n; i++)
    {
        mpp[v[i]]++;
    }
    int large = INT_MIN; // Variable to store largest frequency
    int small =INT_MAX; // Variable to store smallest frequency
    int largr_index , small_index; // Variables to store corresponding elements

    // Iterate through the map to find 
    //the largest and smallest frequencies
    for(auto it : mpp){
        if(it.second>large){
        large=it.second; //storing freq.
        largr_index =it.first; // storing index of largest freq
        } 

        if(it.second<small) {
        small = it.second;
        small_index = it.first;
        }
    }
    return {largr_index ,small_index};
}