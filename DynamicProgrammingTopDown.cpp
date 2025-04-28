#include <iostream>
#include <vector>
using namespace std;

int fibonacci_top_down(int n, vector<int>& memo) {
    if (memo[n] != -1) return memo[n]; // sudah dihitung
    if (n <= 1) return n;               // base case
    memo[n] = fibonacci_top_down(n-1, memo) + fibonacci_top_down(n-2, memo); // simpan hasil
    return memo[n];
}

int main() {
    int n = 10;
    vector<int> memo(n+1, -1); // inisialisasi semua elemen ke -1
    cout << "Fibonacci ke-" << n << " = " << fibonacci_top_down(n, memo) << endl; 
    return 0;
}
