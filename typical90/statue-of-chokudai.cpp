/* 三角関数を使う */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    double T, L, X, Y, Q;
    cin >> T >> L >> X >> Y >> Q;
    vector<double> E(Q);
    for (int i = 0; i < Q; i++)
        cin >> E[i];

    double y, z, distance, theta;
    for (int i = 0; i < Q; i++)
    {
        y = -L / 2 * sin(E[i] / T * M_PI * 2);
        z = -L / 2 * cos(E[i] / T * M_PI * 2) + L / 2;
        distance = sqrt(X * X + (Y - y) * (Y - y));
        theta = atan(z / distance);
        cout << setprecision(11) << theta / M_PI / 2 * 360 << endl;
    }
}