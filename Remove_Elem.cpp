#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 2, 3};
    int val = 3;
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    // cout << k;
    return 0;
}