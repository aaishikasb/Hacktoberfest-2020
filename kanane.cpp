//maximum continuous array sum
//assumes that there is atleast 1 positive number, else just return the largest value
//Tho I'll solve it
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, start, end) for (int i = start; i < end; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int temp;
    rep(j, 0, n)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int max_so_far = 0, max_ending_here = 0, positive_flag = 0, biggest_element = -9999999;

    rep(i, 0, n)
    {
        if (a[i] > 0)
            positive_flag = 1;

        if (biggest_element < a[i])
            biggest_element = a[i];

        max_ending_here += a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    if (positive_flag)
        cout << max_so_far;
    else
        cout << biggest_element;
}