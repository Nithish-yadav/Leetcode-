#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 1};
    int size = sizeof(arr) / sizeof(int);

    int min = INT_MAX;
    int max = INT_MIN;
    int buyprice;
    int sellprice;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
            buyprice = i;
        }
    }
    for (int j = buyprice; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            sellprice = j;
        }
    }

    cout << arr[buyprice] << " " << arr[sellprice] << endl;
    int profit = 0;
    profit = arr[sellprice] - arr[buyprice];
    cout << profit;
    return 0;
}