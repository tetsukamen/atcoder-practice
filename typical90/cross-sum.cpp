#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a.at(i).at(j);
        }
    }

    vector<int> row_sum(h, 0);
    vector<int> col_sum(w, 0);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            row_sum.at(i) += a.at(i).at(j);
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            col_sum.at(i) += a.at(j).at(i);
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int sum = row_sum.at(i) + col_sum.at(j) - a.at(i).at(j);

            if (j != 0)
            {
                cout << " ";
            }
            cout << sum;
        }
        cout << endl;
    }
}