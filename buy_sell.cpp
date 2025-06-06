#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(int);
    int maxProfit = 0, bestBuy = arr[0];
    // 7
    for (int i = 1; i < size; i++)
    {

        if (arr[i] > bestBuy)
        {
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }

    cout << maxProfit;
    return 0;
}

// 1 > 7 F (bestBuy = min(7,1) = 1)
//  5 > 1 T (maxProfit = max(0, 5-1) = 4) → bestBuy remains 1
//  3 > 1 T (maxProfit = max(4, 3-1) = 4) → bestBuy remains 1
// 6 > 1 T (maxProfit = max(4, 6-1) = 5) → bestProfit updated
// 4 > 1 T (maxProfit = max(5, 4-1) = 5) → no change
//
//
//
//

// Brute Force
//  int arr[5] = {2, 4, 1};
//  int size = sizeof(arr) / sizeof(int);

// int min = INT_MAX;
// int max = INT_MIN;
// int buyprice;
// int sellprice;
// for (int i = 0; i < size; i++)
// {

//     if (arr[i] < min)
//     {
//         min = arr[i];
//         buyprice = i;
//     }
// }
// for (int j = buyprice; j < size; j++)
// {
//     if (arr[j] > max)
//     {
//         max = arr[j];
//         sellprice = j;
//     }
// }

// cout << arr[buyprice] << " " << arr[sellprice] << endl;
// int profit = 0;
// profit = arr[sellprice] - arr[buyprice];
// cout << profit;