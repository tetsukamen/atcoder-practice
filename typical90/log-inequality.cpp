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