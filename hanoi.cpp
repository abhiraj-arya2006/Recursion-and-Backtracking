#include<iostream>
using namespace std;

void toh(int n, int t1id, int t2id, int t3id) {
    if (n == 0) return;
    toh(n - 1, t1id, t3id, t2id);
    cout << n << " [" << t1id << " -> " << t2id << "]" << endl;
    toh(n - 1, t3id, t2id, t1id);
}

int main(){
    int n;
    cin >> n;
    int t1d = 1, t2d = 2, t3d = 3;
    toh(n, t1d, t2d, t3d);
}