#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            cout << i;
        }
    }

    return 0;
}