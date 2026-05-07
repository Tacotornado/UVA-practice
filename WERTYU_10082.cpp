#include <iostream>
#include <string>

using namespace std;

string Keys = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; // this string will be used as a key for mapping the offsets //

int main()
{
    char c;
    int i;
    while (cin.get(c))
    {
        for (i = 0; Keys[i] != '\0' && Keys[i] != c; i++)
            ;
        if (Keys[i])
            cout << Keys[i - 1];
        else
            cout << c;
    }
}