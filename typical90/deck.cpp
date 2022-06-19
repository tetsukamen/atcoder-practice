/* リスト形式の前後に要素を追加・削除したいならdeque */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    vector<int> t(Q);
    vector<int> x(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> t.at(i) >> x.at(i);
    }

    vector<int> A(Q, 0);
    int head = 0;
    int tail = Q - 1;
    for (int i = 0; i < Q; i++)
    {
        if (t.at(i) == 1)
        {
            A.at(head++) = x.at(i);
        }
        else if (t.at(i) == 2)
        {
            A.at(tail--) = x.at(i);
        }
        else
        {
            int index_r = head - x.at(i);
            if (index_r < 0)
                index_r += Q;
            cout << A.at(index_r) << endl;
        }
    }
}