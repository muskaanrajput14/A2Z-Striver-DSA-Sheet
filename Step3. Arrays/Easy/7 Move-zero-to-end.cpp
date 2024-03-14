// https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958

vector<int> moveZeros(int n, vector<int> a) {
    int left = 0; // Pointer for non-zero elements
    for (int right_i = 0; right_i < n; right_i++) {
        if (a[right_i] != 0) {
            // Swap non-zero element with element at left pointer
            swap(a[left], a[right_i]);
            left++; // Increment left pointer
        }
    }
    return a;
}