#include <bits/stdc++.h>
using namespace std;

void printDivisors(int num){
    for (int i=1; i<=num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
            cout << endl;
}

int main(){
    int num;
    cout << "Enter Number to check for divisors: ";
    cin >> num;
    cout << "Divisors of " << num << " are : " ;
    printDivisors(num);
    return 0;
}