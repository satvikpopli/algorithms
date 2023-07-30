#include <iostream>
using namespace std;

// Time Complexity: O(1)
// Space Complexity: O(1)
void decimal2binary(int n) {
    bool start = false;
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit) start = true;
        if (start) cout << bit;
    }
    if (!start) cout << 0;
}

// Time Complexity: O(logn) 
// Space Complexity: O(1)
// void decimal2binary(int n) {
//     if (n == 0) {
//         cout << 0;
//         return;
//     }
//     int i = 0;
//     int arr[32] = {0};
//     while (n) {
//         arr[i] = (n % 2 ? 1 : 0);
//         i++;
//         n /= 2;
//     }
//     while (i--) {
//         cout << arr[i];
//     }
// }

int main(){
    int n;
    cin >> n;
    decimal2binary(n);
}