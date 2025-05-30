#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 1, 2, 1, 1};

    return 0;
}

// Sorting Approach
// sort(nums.begin(), nums.end());
// return nums[nums.size() / 2];

//
// Brute Force
//  int n = vec.size();
//  for (int val : vec)
//  {
//      int fre = 0;
//      for (int el : vec)
//      {
//          if (el == val)
//          {
//              fre++;
//          }
//      }7
//      if (fre > n / 2)
//      {
//          cout << val;
//      }
//  }