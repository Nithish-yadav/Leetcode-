#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // vector<int> height = {1, 1};
    int n = height.size();
    int lp = 0;
    int rp = n - 1;
    int maxWater = 0;
    while (lp < rp)
    {
        int width = rp - lp;
        int heightt = min(height[lp], height[rp]);
        int area = width * heightt;
        maxWater = max(maxWater, area);

        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }

    cout << maxWater << endl;
    return 0;
}

// vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
// vector<int> height = {1, 1};
// int n = height.size();
// int maxWater = 0;
// for (int left = 0; left < n; left++)
// {
//     for (int right = left + 1; right < n; right++)
//     {
//         int width = right - left;
//         int heightt = min(height[left], height[right]);
//         int area = height[width] * height[heightt];
//         maxWater = max(maxWater, area);
//     }
// }
// cout << maxWater << endl;