#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c.at(i) >> p.at(i);
    }
    int q;
    cin >> q;
    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }

    // 累積和を計算しておく
    vector<int> a_accum(n + 1, 0);
    vector<int> b_accum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (c.at(i) == 1)
        {
            a_accum.at(i + 1) = a_accum.at(i) + p.at(i);
            b_accum.at(i + 1) = b_accum.at(i);
        }
        else
        {
            a_accum.at(i + 1) = a_accum.at(i);
            b_accum.at(i + 1) = b_accum.at(i) + p.at(i);
        }
    }

    for (int i = 0; i < q; i++)
    {
        int a = a_accum.at(r.at(i)) - a_accum.at(l.at(i) - 1);
        int b = b_accum.at(r.at(i)) - b_accum.at(l.at(i) - 1);

        cout << a << " " << b << endl;
    }
}