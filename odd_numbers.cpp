#include <iostream>
#include <vector>
int main()
{
	std::cout << "array count: ";
	int count = 0;
	std::cin >> count;
	int count_add = 0;
	int odd_count = 0;
	int arr1[count];
	int arr[count];
	int maxValue = 0;
	for (int i = 0; i < count; ++i)
	{
		std::cout << "Enter the number: " << std::endl;
		std::cin >> arr[i];
		if (arr[i] % 2 == 1)
		{
			odd_count += 1;
		}
		count_add += arr[i];
	}

	int newArr[count];
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "the  count of odd numbers : " << odd_count << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "This is your mass, but the 5th element has changed\n ";
	for (int i = 0; i < count; ++i)
	{
		if (i == 5)
		{
			newArr[i] = count_add / 2;
			continue;
		}
		newArr[i] = arr[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < count; ++i)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
		std::cout << newArr[i] << " ";
		arr1[i] = arr[i];
	}
	for (int i = 0; i < count; ++i)
	{
		if (arr1[i] == maxValue)
		{
			arr1[0] = maxValue;
			arr1[i] = arr[0];
			break;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "max value element swap to array first element \n";
	for (int i = 0; i < count; ++i)
	{
		std::cout << arr1[i] << " -- ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
