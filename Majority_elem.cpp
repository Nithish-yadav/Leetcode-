#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main()
{
    // Moores Voting Algorithm O(n)
    vector<int> vec = {1, 2, 1, 2, 1, 1};
    int n = vec.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }

        if (ans == vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    cout << ans;
    return 0;
}

// Sorting Approach O(nlogn)
// vector<int> vec = {1, 2, 1, 2, 1, 1};
// int n = vec.size();
// int freq = 1, ans = vec[0];
// sort(vec.begin(), vec.end());
// for (int i = 1; i < n; i++)
// {
//     if (vec[i] == vec[i - 1])
//     {
//         freq++;
//     }
//     else
//     {
//         freq = 1;
//         ans = vec[i];
//     }

//     if (freq > n / 2)
//     {
//         cout << ans;
//     }
// }

//
// Brute Force O(n2)
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
//      }
//      if (fre > n / 2)
//      {
//          cout << val;
//      }
//  }
