// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // input two strings, a and b, consisting of random lowercase letters //
    // use a string x to hold permutation of letters which is a subsequence of a and b //
    string a, b;
    while (getline(cin, a))
    {
        getline(cin, b);
        string x = "";
        for (int i = 0; i < a.length(); i++)
            for (int j = 0; j < b.length(); j++)
                if (a[i] == b[j])
                {
                    x += a[i];
                    a[i] = '*';
                    b[j] = '&';
                }
        sort(x.begin(), x.end(), [](const char a, const char b)
             { return a < b; });
        cout << x << '\n';
    }
    return 0;
}