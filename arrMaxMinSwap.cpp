#include <iostream>
int main()
{
    const int count = 10;
    int arr[10];
    int max_val = 0;
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < count; ++i)
    {
        std::cin >> arr[i];
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            max_index = i;
        }
    }
    int min_val = arr[0];
    for (int i = 1; i < count; ++i)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
    }

    int arr2[count];
    for (int i = 0; i < count; ++i)
    {
        if (i == max_index || i == min_index)
        {
            continue;
        }
        arr2[i] = arr[i];
    }
    arr2[max_index] = min_val;
    arr2[min_index] = max_val;

    for (int i = 0; i < count; ++i)
    {
        std::cout << arr2[i] << "   ";
    }

    return 0;
}