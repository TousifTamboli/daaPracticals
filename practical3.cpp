#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part sambhal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        // left mai hai aur pivot se chota hai
        while (arr[i] <= pivot)
        {
            i++;
        }
        // right mai hai aur pivot se bada hai
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // left wala part
    quickSort(arr, s, p - 1);

    // right wala part
    quickSort(arr, p + 1, e);
}

int main()
{

    vector<int> arr = {3, 1, 4, 5, 2};
    int s = 0;
    int e = arr.size() - 1;

    quickSort(arr, s, e);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}