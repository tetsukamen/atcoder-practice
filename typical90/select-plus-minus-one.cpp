#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int distance(vector<int> a, vector<int> b)
{
    int result = 0;
    for (int i = 0; i < a.size(); i++)
    {
        result += std::abs(a.at(i) - b.at(i));
    }
    return result;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B.at(i);
    }

    int d = distance(A, B);

    if (K >= d && (K - d) % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}