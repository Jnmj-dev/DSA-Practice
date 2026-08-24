#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int revNum = 0;
    int ogNum = x;

    while (x > 0)
    {
        int lastDigit = x % 10;
        revNum = (revNum * 10) + lastDigit;
        x = x / 10;
    }

    if (ogNum == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    cout << "Enter Number: ";
    cin >> x;

    if (isPalindrome(x))
    {
        cout << x << " is a palindrome." << endl;
    }
    else
    {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}