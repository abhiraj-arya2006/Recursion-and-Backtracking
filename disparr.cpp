#include<iostream>
using namespace std;

void disparr(int arr[], int idx, int n) {
    if(idx == n) return;
    
    disparr(arr, idx + 1, n);
    cout << arr[idx] << " ";
}

int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    disparr(arr, 0, n);
}
