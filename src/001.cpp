#include <iostream>

using namespace std;

int main()
{
    unsigned long long t, n, sum = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        unsigned long long a, b, c;
        a = (n % 3 == 0 ? (n / 3) - 1 : n / 3);
        b = (n % 5 == 0 ? (n / 5) - 1 : n / 5);
        c = (n % 15 == 0 ? (n / 15) - 1 : n / 15);
        sum = ((3 * a * (a + 1)) / 2) + ((5 * b * (b + 1)) / 2) - ((15 * c * (c + 1)) / 2);
        cout << sum << endl;
    }
    return 0;
}
