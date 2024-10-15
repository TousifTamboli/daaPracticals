#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int high = arr.size() - 1;
    int low = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target == arr[mid])
        {
            return mid; 
        }

        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;

    int result = binarySearch(arr, target);

    if (result == -1)
    {
        cout << "No element found" << endl;
    }
    else
    {
        cout << "Found at :" << result;
    }

    return 0;
}