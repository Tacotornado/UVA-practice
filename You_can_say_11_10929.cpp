/*
    Problem: determin is a number is a multiple of 11

    hmm potentially there is some math trick for this, maybe prime factorization?
    could have a DP algotithm solution maybe?

    Input: a file lines consisting of a single int per line. each number could
    be up to a 1000 digits long (oof algo cant be brute forced)

    Output: X is a multiple of 11.

                    or

            X is not a multiple of 11.

    Note: an interesting property of multiples of 11 is that
    adding and subtracting the digits of a number in alternating order
    will always result in a number that is 0 or another multiple of 11

    eg: 112233
        1 - 1 + 2 - 2 + 3 - 3 = 0

    Main idea:

    take in the number as a string and parse it char by char, then use
    mod = (mod * 10 + digit) % M

    where M is the number we are checking divisiblility by
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    while (cin >> s && s != "0")
    {
        int mod = 0;

        for (char c : s)
        {
            int digit = c - '0';
            mod = (mod * 10 + digit) % 11;
        }

        if (mod == 0)
            cout << s << " is a multiple of 11.\n";
        else
            cout << s << " is not a multiple of 11.\n";
    }

    return 0;
}

/*
mvp notes:

take in number as a string and parse through

know formula mod = (mod * 10 + digit) % M
*/