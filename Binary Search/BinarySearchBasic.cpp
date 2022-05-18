#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int midElement = arr[mid];

        if (midElement == target)
            return mid;

        if (target < midElement)
        {
            end = mid - 1;
        }
        if (target > midElement)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    
    }
    return -1;
}

int main()
{
    int arr[] = {2, 7, 34, 78, 90, 112, 134};
    cout << binarySearch(arr, 7, 78);
}