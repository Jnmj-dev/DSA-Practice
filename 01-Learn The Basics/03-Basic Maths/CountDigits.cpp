#include <iostream>
#include <cmath>
using namespace std;

//Brute Force Solution using division
int countDigits(int n){
    int cnt = 0;
    while (n>0){
        cnt+=1;
        n/=10;
    }
    return cnt;
}

//Optimal solution using logarithm
int countDigitsOptimal(int n){
    int cnt = (int)(log10(n)+1);
}


int main() {
    int n;
    cin >> n;
    int digits = countDigits(n);
    cout << "No. of Digits in N: " << digits << endl;
    return 0;
}̥