#include<iostream>
#include <vector>
#include <string>
using namespace std;

void printTargetsum(vector<int>& arr, int n, int idx, string set, int sos, int target) {
    if (idx == n) {
        if (sos == target) {
            cout << set + "." << endl;
        }
        return;
    }
    // include current element
    printTargetsum(arr, n, idx + 1, set + to_string(arr[idx]) + ", ", sos + arr[idx], target);
    // exclude current element
    printTargetsum(arr, n, idx + 1, set, sos, target);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    printTargetsum(arr, n, 0, "", 0, target);
    return 0;
}