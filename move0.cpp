#include <iostream>
#include <vector>
using namespace std;

// Two Pointers method

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    for (int val : nums)
    {
        cout << val;
    }
    return 0;
}