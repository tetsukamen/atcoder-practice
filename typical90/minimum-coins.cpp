/* 計算方法の工夫でオーダーが小さくなる */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <map>
using namespace std;

int main()
{
    long long N, A, B, C;
    cin >> N >> A >> B >> C;

    int answer = 9999;
    int L = 9999;
    int X, Y, Z;
    for (int x = 0; x <= L; x++)
    {
        for (int y = 0; x + y <= L; y++)
        {
            if ((A * x + B * y) <= N && (N - (A * x + B * y)) % C == 0)
            {
                int z = (N - (A * x + B * y)) / C;
                answer = min(answer, x + y + z);
            }
        }
    }
    cout << answer << endl;
}