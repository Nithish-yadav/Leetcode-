#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // Time- O(n)
    int maxSum = INT_MIN; //-infinity
    int curSum = 0;

    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);

        if (maxSum < 0)
            curSum = 0;
    }

    cout << maxSum;
    return 0;
}

// Subarray
//  for (int start = 0; start < n; start++)
//  {
//      int cum = 0;
//      for (int end = start; end < n; end++)
//      {
//          for (int i = start; i <= end; i++)
//          {
//              cout << arr[i];
//          }
//          cout << " ";
//      }
//      cout << endl;
//  }

// BruteForce
// int n = 5;
// int arr[5] = {1, 2, 3, 4, 5};
// int maxSum = INT_MIN;

// for (int start = 0; start < n; start++)
// {
//     int curSum = 0;
//     for (int end = start; end < n; end++)
//     {
//         curSum += arr[end];
//         maxSum = max(curSum, maxSum);
//     }
// }
