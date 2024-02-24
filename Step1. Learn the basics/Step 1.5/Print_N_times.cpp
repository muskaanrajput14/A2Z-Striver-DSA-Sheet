vector<string> printNTimes(int n) {
	// Write your code here.
	 if(n==0){
        return {};
    }
    vector <string>v=printNTimes(n-1);
    v.push_back("Coding Ninjas");
    return v;
}