/*
3 3 3 3 3 3 3 
3 2 2 2 2 2 3 
3 2 1 1 1 2 3 
3 2 1 0 1 2 3 
3 2 1 1 1 2 3 
3 2 2 2 2 2 3 
3 3 3 3 3 3 3 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 1) - j + 1;
            int down = (2 * n - 1) - i + 1;
            cout << (n-min(min(top, down), min(left, right))) << " ";

        }
        cout << endl;
    }
    return 0;
}