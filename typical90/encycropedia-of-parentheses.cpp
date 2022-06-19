/* bit全探索とスタックの考え方 */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 1)
        return 0;

    for (int bit = 0; bit < (1 << N); bit++)
    {
        string s = "";
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                s = ')' + s;
            }
            else
            {
                s = '(' + s;
            }
        }
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            if (cnt < 0)
                break;
        }
        if (cnt == 0)
            cout << s << endl;
    }
}