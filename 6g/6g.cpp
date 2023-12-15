#include <iostream>
int main()
{
	const int n = 7;
	int a[n];
	int i;
	int count = 0;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = n - 1; i > 0; --i)
	{
		if (a[i] > 9 && a[i] < 100)
		{
			std::cout << a[i] << std::endl;
			break;
		}
		if (a[i] % 2 == 1)
		{
			count++;
		}
	}
	std::cout << count;
	return 0;

}