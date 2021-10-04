#include <iostream>
using namespace std;
//ham min thi lam tuong tu
int maxOfArray(int l, int r, int arr[1000])
{
    if (l == r)
        return arr[l];
    else
    {
        int m = (l + r) / 2;
        return std::max(maxOfArray(l, m, arr), maxOfArray(m + 1, r, arr));
    }
}
int main()
{
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxOfArray(0, n - 1, arr) << endl;
    return 0;
}
