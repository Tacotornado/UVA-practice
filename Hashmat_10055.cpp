
/*
    Hashmat is a soldier who fights others but before fights he needs to determine run a comparison between he and his oponents warrior number

    Input: each line contains two numbers:

    hashmats_army ops_army

    or

    ops_army hashmats_army

    for each line compute the difference

*/

// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// int main()
// {
//     long long N, M;

//     while (cin >> N >> M)
//     {
//         long long dif = llabs(N - M);
//         cout << dif << '\n';
//     };
//     return 0;
// }

// improved version //

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    long long N, M;

    while (cin >> N >> M)
    {
        cout << llabs(N - M) << '\n';
    }

    return 0;
}