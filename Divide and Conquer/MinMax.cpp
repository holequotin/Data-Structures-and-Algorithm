#include <iostream>

using namespace std;
void MinMax(int l, int r, int arr[1000], int &max, int &min)
{
    if (l == r)
    {
        max = arr[l];
        min = arr[l];
    }
    else
    {
        int m = (l + r) / 2, max1, min1, max2, min2;
        MinMax(l, m, arr, max1, min1);
        MinMax(m + 1, r, arr, max2, min2);
        if (max1 > max2)
            max = max1;
        else
            max = max2;
        if (min1 < min2)
            min = min1;
        else
            min = min2;
    }
}
int main()
{
    int n, arr[1000], max, min;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MinMax(0, n - 1, arr, max, min);
    cout << "Max = " << max << endl
         << "Min = " << min << endl;
    return 0;
}
