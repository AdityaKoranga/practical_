#include <bits/stdc++.h>
using namespace std;

double Series(int n)
{
    int i;
    double sum = 0.0;
    for (i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int n;
        cout << "Enter your number : ";
        cin >> n;
        cout << Series(n);
    }

    int i;
    double sum = 0.0;
    char *n = argv[1];

    for (i = 1; i <= (*n - 48); ++i) // because ASCII of '0' is 48;
    {

        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }

    cout << sum;

    return 0;
}