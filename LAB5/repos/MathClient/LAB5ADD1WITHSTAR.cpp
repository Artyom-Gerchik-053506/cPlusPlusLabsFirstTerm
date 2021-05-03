#include "MathLibrary.h"

int main()
{
    int p, q, S;
   
    while (true)
    {
        cout << "p & q: ";
        cin >> p >> q;
        if (p >= 0 && q >= 0)
        {
            cout << "S(p, q) : " << funcforadd1star(p, q) << endl;
        }

        else
        {
            return 0;
        }

    }
   
}