
// Consider the following algorithm:
// 1. input n
// 2. print n
// 3. if n=1 then STOP
// 4. if n is odd then n = 3n+1
// 5. else n = n/2
// 6. GO TO 2

#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

unordered_map<long long, int> memo = {{1, 1}};

int algo(long long n)
{
    if (memo.count(n))
        return memo[n];
    else if (n % 2 == 0)
        return memo[n] = 1 + algo(n / 2);
    else
        return memo[n] = 1 + algo(3 * n + 1);
}

int main()
{
    int i, j;
    while (cin >> i >> j)
    {

        if (i == 0 || j == 0)
            break;
        cout << i << " " << j << " ";
        if (i > j)
        {
            int temp = i;
            i = j;
            j = temp;
        }
        int cur_max = 0;
        for (int k = i; k <= j; k++)
        {
            int temp = algo(k);
            if (temp > cur_max)
            {
                cur_max = temp;
            }
        }
        cout << cur_max << '\n';
    }
    return 0;
}