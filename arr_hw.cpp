#include <iostream>
using namespace std;

// Sum and product of all arr no
void sumpro(int arr[], int size)
{
    int sum = 0;
    int pro = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        pro *= arr[i];
    }

    cout << "The sum of all numbers in array is: " << sum << endl;
    cout << "The product of all numbers in array is: " << pro << endl;
}
void minmax(int arr[], int size)
{
    int small = INT_MAX;
    int large = INT_MIN;
    int mini;
    int maxi;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            mini = i;
        }

        if (arr[i] > large)
        {
            large = arr[i];
            maxi = i;
        }
    }

    swap(arr[mini], arr[maxi]);

    cout << "The updated array is:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
void unique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;

                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void intersec(int arr1[], int sz1, int arr2[], int sz2)
{
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";

                arr2[j] = -1;
                break;
            }
        }
    }
}

//
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int un[] = {1, 2, 3, 4, 1, 2, 3};
    int szun = sizeof(un) / sizeof(int);

    int ar1[4] = {1, 2, 2, 4};
    int ar1sz = sizeof(ar1) / sizeof(int);
    int ar2[5] = {1, 2, 2, 7, 8};
    int ar2sz = sizeof(ar2) / sizeof(int);

    sumpro(arr, size);
    minmax(arr, size);
    unique(un, szun);
    intersec(ar1, ar1sz, ar2, ar2sz);
    return 0;
}