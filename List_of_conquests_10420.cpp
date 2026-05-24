// List of Conquests //

/*
    count number of women this hoe ass mf has been with in each country
    Input :
            first line : an int n for the number of lines
                         the following n lines consist of
                         <country> <name of the woman>

    Output:
            in alphabetical order:
            <country> <number of women>


    notes:
        this sounds like a problem that could be solved with a map since it
        is automatically ordered.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        map<string, int> frau;
        for (int i = 0; i < N; i++)
        {
            string country;
            string name;

            cin >> country;     // cin just grabs up to first white space
            getline(cin, name); // catch the rest of the string to clean for upcoming country
            frau[country]++;
        }

        // itteration part

        for (auto &kv : frau)
        {
            string country = kv.first;
            int count = kv.second;

            cout << country << " " << count << '\n';
        }
    }
    return 0;
}