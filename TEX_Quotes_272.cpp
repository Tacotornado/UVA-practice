#include <iostream>
#include <string>

using namespace std;

int main()
{
    int quote_counter = 0;
    char c;
    while (cin.get(c))
    {
        if (c == '"')
        {
            quote_counter++;
            if (quote_counter % 2 == 1)
            {
                cout << "``";
            }
            else
            {
                cout << "''";
            }
        }
        else
        {
            cout << c;
        }
    }
}

/*

// another solution //

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int c, q = 1;
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            printf("%s", q ? "``" : "''");
            q = !q;
        }
        else printf("%c", c);
    }

    return 0;
}
*/