#include <iostream>
#include <stdlib.h>

using namespace std;

// optimization problem where we want to minimize distance to certain points

/*
input:
N number of test cases
    R x0 x1 . . . xR
    where R is the number of relatives and x is the number of the house
    they live on.

Out:
    find the min sum to all the houses dij = |xi - xj|

idea 1:

find the median of the numbers and use that as the house nearest everyone, find the sum from there.
*/

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int N;
    while (cin >> N)
    {
        for (int i = 0; i < N; i++)
        {
            int Num_of_relatives = 0;
            int addresses[500] = {0};
            cin >> Num_of_relatives;
            for (int j = 0; j < Num_of_relatives; j++)
            {
                cin >> addresses[j];
            }
            qsort(addresses, Num_of_relatives, sizeof(int), comp);
            int median = addresses[Num_of_relatives / 2];
            int sum = 0;
            for (int k = 0; k < Num_of_relatives; k++)
            {
                sum += abs(addresses[k] - median);
            }
            cout << sum << '\n';
        }
    }
    return 0;
}