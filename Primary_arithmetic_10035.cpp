#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    Problem:

    count the number of carry operations in traditional addition arithmetic algo

    Input: Two uint digits less than 10 digits long (use unsigned long long)
    end input on 0 0.

    Output:
    if no carries:    No carry opertaion.
    if carry:         1 carry operation.
    if many carries:  X carry operations.

    where X denotes the number of carries necessary


*/

int count_carries(int n, int m)
{
    int carry = 0, count = 0;
    while (n != 0 || m != 0)
    {
        if ((n % 10 + m % 10 + carry) > 9)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        n /= 10;
        m /= 10;
    }
    return count;
}

int main()
{

    unsigned long long N, M;
    while (cin >> N >> M)
    {
        if (N == 0 && M == 0)
            break;
        int carry_count = count_carries(N, M);
        if (carry_count == 0)
            cout << "No carry operation.\n";
        else if (carry_count == 1)
            cout << "1 carry operation.\n";
        else
            cout << carry_count << " carry operations.\n";
    }

    return 0;
}