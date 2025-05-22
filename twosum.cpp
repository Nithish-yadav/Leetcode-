#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int size = nums.size();
    vector<int> result;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
        if (!result.empty())
            break;
    }

    if (!result.empty())
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    else
        cout << "No valid pair found." << endl;

    return 0;
}
