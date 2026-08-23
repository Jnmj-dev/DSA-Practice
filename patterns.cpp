#include <iostream>
using namespace std;

void pattern1(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int r)
{
    for (int i = r; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void pattern6(int r)
{
    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * r - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int r)
{
    pattern7(r);
    pattern8(r);
}
void pattern10(int r)
{
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        int stars = i;
        if (i > r)
            stars = 2 * r - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int r)
{
    int start = 1;
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int r)
{
    int space = 2 * (r - 1);
    for (int i = 1; i <= r; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        space = space - 2;
        cout << endl;
    }
}
void pattern13(int r)
{
    int num = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void pattern14(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern15(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (char j = 'A'; j <= 'A' + (r - i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern16(int r)
{
    for (int i = 0; i < r; i++)
    {
        char ch = 'A' + i;
        for (char j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void pattern17(int r)
{
    for (int i = 1; i <= r; i++)
    {
        // spaces
        for (int j = 1; j <= (r - i); j++)
        {
            cout << " ";
        }
        // characters
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        // characters reverse
        for (char j = 'A' + i - 2; j >= 'A'; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern18(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (char ch = ('A' + r - 1) - i; ch <= ('A' + r - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void pattern19(int r)
{
    // upper half
    int iniS = 0;
    for (int i = 0; i < r; i++)
    {
        // leading stars upper
        for (int j = 1; j <= r - i; j++)
        {
            cout << "*";
        }
        // spaces upper
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // later stars upper
        for (int j = 1; j <= r - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }

    // lower half
    iniS = 2 * r - 2;
    for (int i = 1; i <= r; i++)
    {
        // leading stars lower
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces lower
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // later stars lower
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        iniS -= 2;
    }
}
void pattern20(int r)
{
    // upper half
    int iniS = 2 * r - 2;
    for (int i = 1; i < r; i++)
    {
        // leading stars lower
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces lower
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // later stars lower
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        iniS -= 2;
    }

    // lower half
    iniS = 0;
    for (int i = 0; i < r; i++)
    {
        // leading stars upper
        for (int j = 1; j <= r - i; j++)
        {
            cout << "*";
        }
        // spaces upper
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // later stars upper
        for (int j = 1; j <= r - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
}
void pattern21(int r)
{
    // print * on borders else space
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == r - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern22(int r){
    for (int i=0; i<2*r-1;i++){
        for (int j=0; j<2*r-1; j++){
            int top = i;
            int left = j;
            int bottom = (2*r-2)-i;
            int right = (2*r-2)-j;
            
            // Take the minimum of all four directions
            int mindist = min(min(top,bottom), min(left,right));

            // printing the numbers (starts with n at the border)
            cout << (r-mindist);
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    pattern22(r);
    return 0;
}