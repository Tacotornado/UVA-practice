/*


*/

#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <cmath>
#include <iomanip>
#include <set>

using namespace std;
using ll = long long;

int main()
{
    int cases, n, count = 0;

    cin >> cases;
    while (cases--)
    {
        cin >> n;
        count++;
        set<ll> seen = {1};
        cout << "Case #" << count << ": " << n;

        while (n != 1)
        {
            if (seen.count(n))
            {
                break;
            }
            int sum = 0;
            seen.emplace(n);
            while (n != 0)
            {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
        }
        if (n == 1)
        {
            cout << " is a Happy number.\n";
        }
        else
        {
            cout << " is an Unhappy number.\n";
        }
    }

    return 0;
}