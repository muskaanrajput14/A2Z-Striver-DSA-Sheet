// https://www.codingninjas.com/studio/problems/find-the-single-element_6680465?leftPanelTabValue=PROBLEM

#include<vector>

int getSingleElement(vector<int> &arr){
    int count;
    int n=arr.size();
    if(n==1) return arr[0];

    for(int i =0; i<arr.size(); i+=2)
    {
        if(arr[i] == arr[i+1]|| arr[i] == arr[i-1])
        {
            continue;;
        }
        else{
           return arr[i];
        }
    }
}
