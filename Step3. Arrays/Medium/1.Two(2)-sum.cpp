// https://www.codingninjas.com/studio/problems/reading_6845742?leftPanelTabValue=PROBLEM

#include <unordered_set>
string read(int n, vector<int> book, int target)
{
    // Write your code here.

    // 2 pointrer approac
    sort(book.begin(), book.end());
    int left=0, right=n-1;
    for(int i=0; i<n; i++)
    {
        if(book[left] + book[right] > target){
            right--;
        }
        else  if(book[left] + book[right] < target){
            left++;
        }
        else{
            return "YES";
        }
    }
    return "NO";

    // sol2- by using map 
//    unordered_set<int> pages;
//     for (int i = 0; i < n; i++) {
//         int diff = target - book[i];
//         if (pages.find(diff) != pages.end()) {
//             return "YES";
//         }
//         pages.insert(book[i]);
//     }
//     return "NO";


// sol-3
    // for(int i =0; i<n; i++)
    // {
    //     for(int j =i+1; j<n; j++)
    //     {
    //         if(book[i] + book[j] == target) return "YES";
    //     }
    // }
    // return "NO";
}
