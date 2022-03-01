// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> vector1;
        for (int j = 0; j < n ; j++)
            cin >> a[j];
        int cnt = 1, max = 1, min = 1;
        int i;
        for (int i = 1; i < n; i++)

        {
            if ((a[i] - a[i - 1]) <= 2)
            {
             cnt++;
            }
            else
            {
             vector1.push_back(cnt);
             cnt = 1;
            }
        }
        vector1.push_back(cnt);
        int smallest_element = *min_element(vector1.begin(),vector1.end());

        int largest_element  = *max_element(vector1.begin(),vector1.end());
        cout<<smallest_element<<largest_element<<endl;
    }

    return 0;
}
