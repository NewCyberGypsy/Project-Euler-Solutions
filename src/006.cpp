#include <iostream>

using namespace std;

int main()
{
    int n;
    long int a, square = 0, squareSum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        square = ((a * (a + 1)) / 2) * ((a * (a + 1)) / 2);
        squareSum = (a * (a + 1) * (2 * a + 1)) / 6;
        cout << square - squareSum << endl;
    }
    return 0;
}
