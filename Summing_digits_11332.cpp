#include <iostream>

using namespace std;

void digitSum(long long N);

int main()
{
    long long N;
    while (cin >> N)
    {
        if (N == 0)
            break;
        digitSum(N);
    }

    return 0;
}

void digitSum(long long N)
{
    if (N / 10 == 0)
    {
        cout << N << '\n';
        return;
    }
    int sum = 0;
    while (N != 0)
    {
        sum += (N % 10);
        N /= 10;
    }
    digitSum(sum);
}