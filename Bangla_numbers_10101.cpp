#include <iostream>
#include <string>
#include <iomanip>

/*
    kuti  = 10000000
    lakh  =   100000
    hajar =     1000
    shata =      100
*/

const long long kuti = 10000000;
const long long lakh = 100000;
const long long hajar = 1000;
const long long shata = 100;

using namespace std;

void numToBang(long long n)
{
    if (n == 0)
        return;

    if (n >= kuti)
    {
        numToBang(n / kuti);
        cout << " kuti";
        n %= kuti;
    }

    if (n >= lakh)
    {
        cout << " " << n / lakh << " lakh";
        n %= lakh;
    }

    if (n >= hajar)
    {
        cout << " " << n / hajar << " hajar";
        n %= hajar;
    }

    if (n >= shata)
    {
        cout << " " << n / shata << " shata";
        n %= shata;
    }

    if (n > 0)
    {
        cout << " " << n;
    }
}

int main()
{
    long long N;
    int counter = 0;
    while (cin >> N)
    {
        cout << setw(4) << ++counter << ".";

        // parsing the number //
        if (N == 0)
            cout << " 0";
        else
            numToBang(N);

        cout << '\n';
    }

    return 0;
}