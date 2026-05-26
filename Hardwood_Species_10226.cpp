/*
    input:
        first line is N num test cases
        second line is a blank line
        N lines each holding a tree name

        species names are 30 chars or less, species[10100], trees are 1,000,000 or less
        blank line between other test cases


    output:
        each species name and its percentage of population up to 4 decimal places, blank must be printed between consecutive test cases, print in alphabetical order

        not use map for sorting automatically

*/

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    // input logic

    int N;
    cin >> N;
    string blank;
    getline(cin, blank); // catch the blank line from buffer after N
    getline(cin, blank); // catch the blank line inputted by user

    for (int i = 0; i < N; i++)
    {
        string line;
        map<string, int> trees;
        int count = 0;

        while (getline(cin, line))
        {
            if (line == "")
            {
                break;
            }
            trees[line]++;
            count++;
        }

        // determining percentages an printing
        for (map<string, int>::iterator tree = trees.begin(); tree != trees.end(); ++tree)
        {
            double percentage = double(tree->second) / count * 100;

            cout << tree->first << " ";
            cout << fixed << setprecision(4) << percentage << '\n';
        }

        if (i < N - 1)
            cout << '\n'; // printing the blank between the consectutive cases

        // printing the current counts and trees
        // for (const auto &pair : trees)
        //{

        //}
    }

    return 0;
}