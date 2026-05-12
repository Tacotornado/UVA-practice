#include <iostream>
#include <string>

using namespace std;

string S = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main()
{
    int i;
    char N;
    while (cin.get(N))
    {
        if (N >= 'A' && N <= 'Z')
        {
            N += 32;
        }
        for (i = 0; S[i] != '\0' && S[i] != N; i++)
            ;
        if (S[i])
            cout << S[i - 2];
        else
            cout << N;
    }
}