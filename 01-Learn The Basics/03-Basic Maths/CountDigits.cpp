#include <iostream>
using namespace std;

int countDigits(int n){
    int cnt = 0;
    while (n>0){
        cnt+=1;
        n/=10;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << "N: " << n << endl;
    int digits = countDigits(n);
    cout << "No. of Digits in N: " << digits << endl;
    return 0;
}