#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int N;
    int first_flag = 0;
    while (cin >> N)
    {
        if (first_flag == 1)
            cout << '\n';

        if (first_flag == 0)
            first_flag++;

        // store names of frined group //
        map<string, int> group;
        vector<string> order;
        for (int i = 0; i < N; i++)
        {
            string name;
            cin >> name;
            group[name] = 0;
            order.push_back(name);
        }
        for (int i = 0; i < N; i++)
        {
            string current_person;
            int amt;
            int num_of_people;
            cin >> current_person >> amt >> num_of_people;
            if (num_of_people == 0)
            {
                // group[current_person] += amt;
                continue;
            }
            int amt_per_person = amt / num_of_people;
            // subtract amount spent and refund any leftover cash //
            group[current_person] = (group[current_person] - amt) + (amt % num_of_people);
            // update value given to each person //
            for (int j = 0; j < num_of_people; j++)
            {
                string giftee;
                cin >> giftee;
                group[giftee] += amt_per_person;
            }
        }
        // debug start//
        for (auto &name : order)
        {
            cout << name << " " << group[name] << "\n";
        }
        // debug end //
    }
}