#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long p, long long q)
{
    long long r, tmp;
    while (1)
    {
        if (p < q)
        {
            tmp = p;
            p = q;
            q = tmp;
        }

        r = p % q;
        if (r == 0)
        {
            break;
        }
        else
        {
            p = q;
            q = r;
        }
    }
    return q;
}

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long l = gcd(gcd(A, B), C);

    cout << (A / l) + (B / l) + (C / l) - 3 << endl;

    return 0;
}