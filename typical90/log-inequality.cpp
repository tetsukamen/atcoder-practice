
/*
実数で計算すると誤差で計算結果が狂うことがある
対数を式変換して整数領域で計算するとより正確に計算できる場合がある
 */

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
    long double A, B, C;
    cin >> A >> B >> C;

    if (A < pow(C, B))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}