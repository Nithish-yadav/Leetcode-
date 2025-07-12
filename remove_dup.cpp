#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Two-Pointer
    vector<int> nums = {1, 1, 2, 3};
    int i = 0;

    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    int l = i + 1;

    for (int k = 0; k < l; k++)
    {
        cout << nums[k] << " ";
    }
    cout << "\n";

    return 0;
}
