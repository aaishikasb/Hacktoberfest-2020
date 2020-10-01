#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string nationality;
        cin >> n >> nationality;
        int laddu = 0;
        for (int i = 0; i < n; i++)
        {
            string activity;
            cin >> activity;
            if (activity == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                laddu += 300;
                if (rank < 20)
                    laddu += 20 - rank;
            }
            if (activity == "TOP_CONTRIBUTOR")
            {
                laddu += 300;
            }
            if (activity == "BUG_FOUND")
            {
                int severe;
                cin >> severe;
                laddu += severe;
            }
            if (activity == "CONTEST_HOSTED")
            {
                laddu += 50;
            }
        }
        int month = 0;
        if (nationality == "INDIAN")
            month = laddu / 200;
        else
            month = laddu / 400;
        cout << month << endl;
    }
}