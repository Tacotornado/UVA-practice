#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> sentences;
    string line;
    int max_chars = 0;

    // input logic //
    while (getline(cin, line))
    {
        sentences.push_back(line);

        if (line.length() > max_chars)
            max_chars = line.length();
    }

    // padding strings that are smaller in length than max
    for (string &s : sentences)
    {
        if (s.length() < max_chars)
        {
            int difference = max_chars - s.length();
            s.append(difference, ' ');
        }
    }

    // printing logic

    for (int cols = 0; cols < max_chars; cols++)
    {
        for (int rows = sentences.size() - 1; rows >= 0; rows--)
        {
            cout << sentences[rows][cols];
        }
        cout << '\n';
    }

    return 0;
}
// WRONG ORDER WHOOPS //
// for (int i = sentences.size() - 1; i >= 0; i--)
// {
//     for (int j = 0; j < max_chars; j++)
//     {
//         cout << sentences[i][j];
//     }
//     cout << "\n";
// }