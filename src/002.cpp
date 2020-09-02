#include <iostream>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        ll a = 1, b = 2, sum = 2, total = 3;
        while (total <= n)
        {
            if (total % 2 == 0)
            {
                sum += total;
            }
            a = b;
            b = total;
            total = a + b;
        }
        cout << sum << endl;
    }
    return 0;
}
