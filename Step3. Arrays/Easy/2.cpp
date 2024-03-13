// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    int smallest = a[1];
    int largest = a[n-2];
    return{largest, smallest};
}
