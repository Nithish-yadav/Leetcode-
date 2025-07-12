#include <iostream>
#include <vector>
using namespace std;
//
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suff = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suff *= nums[i + 1];
        ans[i] *= suff;
    }

    for (int val : ans)
    {
        cout << val << endl;
    }
    return 0;
}

// vector<int> nums = {1, 2, 3, 4};
// int n = nums.size();
// vector<int> ans(n, 1);

// for (int i = 0; i < nums.size(); i++)
// {
//     int product = 1;
//     for (int j = 0; j < nums.size(); j++)
//     {
//         if (i != j)
//         {
//             product *= nums[j];
//         }
//     }
//     ans[i] = product;
// }

// for (int val : ans)
// {
//     cout << val << endl;
// }