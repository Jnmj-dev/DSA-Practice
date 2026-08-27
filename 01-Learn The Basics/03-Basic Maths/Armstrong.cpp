#include <bits/stdc++.h>
using namespace std;

bool armstrong(int num){
    int k = to_string(num).length();
    int sum = 0;
    int n = num;

    while (n>0) {
        int ld = n%10;
        sum += pow(ld, k);
        n /= 10;
    }

    return sum == num;
}

int main () {
    int number;
    cout << "Enter your number: ";
    cin >> number;

    if (armstrong(number)){
        cout << number << " is an armstrong number.";
        }
    else {
        cout << number << " is not an armstrong number.";
    }

    return 0;
}