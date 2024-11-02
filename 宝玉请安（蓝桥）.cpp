#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a; cin >> b; cin >> c;
        int num = 0;
        if ((a >= b && a <= c) || a >= c && a <= b)
        {
            if (abs(a - b) > abs(a - c))
            {
                num = 2 * abs(a - c) + abs(a - b);
                cout << num << "\n"; continue;
            }
            else
            {
                num = 2 * abs(a - b) + abs(a - c);
                cout << num << "\n"; continue;
            }
        }
        else if (abs(b - a) > abs(c - a))cout << abs(b - a) << "\n";
        else cout << abs(c - a) << "\n";
    }

    return 0;
}