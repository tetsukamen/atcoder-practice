/* 二分探索 */

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
    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; i++)
        cin >> B[i];

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++)
    {
        if (B[i] <= A[0])
        {
            cout << abs(B[i] - A[0]) << endl;
        }
        else if (B[i] >= A[N - 1])
        {
            cout << abs(B[i] - A[N - 1]) << endl;
        }
        else
        {
            int l = 0, r = N - 1, m;
            while (1)
            {
                m = (l + r) / 2;
                if (B[i] >= A[m] && B[i] < A[m + 1])
                {
                    cout << min(abs(B[i] - A[m]), abs(B[i] - A[m + 1])) << endl;
                    break;
                }
                else if (B[i] >= A[m])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
        }
    }
}