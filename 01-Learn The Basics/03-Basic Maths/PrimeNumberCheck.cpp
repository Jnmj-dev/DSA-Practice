#include<iostream>
using namespace std;

bool PrimeCheck(int n){
    int cnt = 0;
    for(int i = 1; i*i<=n; i++) {
        if(n%i == 0){
            cnt++;
            if((n/i) != i) cnt++;
        }
    }
    if (cnt == 2){
        return true;
    }
    return false;
};

int main(){
    int n;
    cout << "Enter a number to check for prime: ";
    cin >> n;
    if (PrimeCheck(n)){
        cout << n << " is Prime";
        cout << endl;
    }
    else {
        cout << n << " is not Prime";
        cout << endl;
    }
    return 0;
}