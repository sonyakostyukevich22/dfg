#include<iostream>

using UP = bool(*) (int);

bool s(int a)
{
	return a < 0;
}

int f(int* arr, int first, int last, UP p)
{
	int temp = 0;
	for(; first < last; ++first)
	{
		if (p(arr[first]))
		{
			temp += arr[first];
		}
	}
	return temp;
}


int main()
{
	int arr[7]{ -2,3,-6,2,3,-6,-9 };
	std::cout << f(arr, 0, 7, s) << std::endl;
	system("pause");
	return 0;
}