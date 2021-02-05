#include <iostream>

using namespace std;

int main()
{
	int num[10] = { -1, 3, -9, 6, 7, -6, 1, 5, 4, -2 };
	int size = sizeof(num) / sizeof(num[0]);

	for (int i = 1; i < 1 << size; i++)
	{
		int res = 0;
		for (int j = 0; j < size; j++)
		{
			if (i & (1 << j))
				res += num[j];
		}
		if (res == 0)
		{
			for (int j = 0; j < size; j++)
			{
				if (i & (1 << j))
					cout << num[j] << " ";
			}
			cout << endl;
		}
	}
}