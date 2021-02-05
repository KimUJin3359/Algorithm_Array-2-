#include <iostream>

using namespace std;

void initialize_map(int map[100][100], int size);

int main()
{
	int map[100][100];
	int size;	//map size
	int case_n = 1;	//case number
	int row, col;
	int dead_l;

	while (case_n <= 10)
	{
		dead_l = 0;
		cin >> size;
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				cin >> map[row][col];
		}

		for (col = 0; col < size; col++)
		{
			int flag = 0;
			for (row = 0; row < size; row++)
			{
				if (map[row][col] == 1)
					flag = 1;
				if (flag == 1 && map[row][col] == 2)
				{
					dead_l++;
					flag = 0;
				}
			}
		}
		cout << "#" << case_n << " " << dead_l << endl;
		case_n++;
	}
}

void initialize_map(int map[100][100], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			map[i][j] = 0;
	}
}