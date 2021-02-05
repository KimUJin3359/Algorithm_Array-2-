#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int num_c;
	int map[10000];
	int max;
	int res;


	while (num_c <= num)
	{
		max = -1;
		cin >> num_c;
		for (int i = 0; i < 10000; i++)
			cin >> map[i];
		//sum_row
		for (int i = 0; i < 100; i++)
		{
			res = 0;
			for (int j = 0; j < 100; j++)
				res += map[100 * i + j];
			if (res > max)
				max = res;
		}
		//sum_col
		for (int j = 0; j < 100; j++)
		{
			res = 0;
			for (int i = 0; i < 100; i++)
				res += map[100 * i + j];
			if (res > max)
				max = res;
		}
		//sum_cross
		res = 0;
		for (int i = 0; i < 100; i++)
			res += map[i * 100 + i];
		if (res > max)
			max = res;
		res = 0;
		for (int i = 0; i < 100; i++)
			res += map[i * 100 + (99 - i)];
		if (res > max)
			max = res;
		cout << "#" << num_c << " " << max << endl;
		num_c++;
	}
}