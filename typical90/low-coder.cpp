#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S.at(i);
    }

    map<string, int> Map;
    for (int i = 0; i < N; i++)
    {
        if (Map[S[i]] == 0)
        {
            cout << i + 1 << endl;
            Map[S[i]] = 1;
        }
    }
}