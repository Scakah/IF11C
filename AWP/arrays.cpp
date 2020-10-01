#include <iostream>

using namespace std;

int main()
{
    int i_zahlenreihe2[3][5];

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 5; b++ )
        {
            i_zahlenreihe2[a][b] = ( ( (a*5) + (b) ) * 2 ) + 1;
            cout << i_zahlenreihe2[a][b] << '|';
        }
        cout << '\n';
    }
    return 0;
}