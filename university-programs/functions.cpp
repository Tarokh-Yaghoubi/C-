void bubbleSort(int numbers[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                numbers[j] ^= numbers[j + 1];
                numbers[j + 1] ^= numbers[j];
                numbers[j] ^= numbers[j + 1];
            }
        }
    }
}


int binarySearch(int arr[], int left, int right, int x)
{
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] > x)
        return binarySearch(arr, left, mid - 1, x);
    else
        return binarySearch(arr, mid + 1, right, x);
}
