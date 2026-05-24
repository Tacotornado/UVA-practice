/*
    problem:
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        cin.ignore();

        pair<char, int> counts[26];
        for (int i = 0; i < 26; i++)
        {
            counts[i] = {'A' + i, 0};
        }

        string line;
        for (int i = 0; i < N; i++)
        {
            getline(cin, line);
            // changing letters to lowercase //
            // cout << &line << " " << c;
            for (char &c : line)
            {
                if (c >= 'A' && c <= 'Z')
                    c += 32;

                if (c >= 'a' && c <= 'z')
                    counts[c - 'a'].second++;
            }
        }
        sort(counts, counts + 26, [](const pair<char, int> &a, const pair<char, int> &b)
             {
                 if (a.second != b.second)
                 {
                     return a.second > b.second;
                 }
                 return a.first < b.first; // letter charcter condition when counts tied
             });

        for (int i = 0; i < 26; i++)
        {
            if (counts[i].second > 0)
            {
                cout << counts[i].first << " " << counts[i].second << '\n';
            }
        }
    }
    return 0;
}