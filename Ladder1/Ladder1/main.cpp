#include <iostream>
#define REPEAT 10

using namespace std;

int main()
{
	int case_n = 1;
	int map[100][100];

	while (case_n <= REPEAT)
	{
		int row, col;

		cin >> case_n;
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 2)
				{
					row = i;
					col = j;
				}
			}
		}
		while (row)
		{
			int flag = 1;

			row--;
			if (row == 0)
				break;
			while (col - 1 >= 0 && map[row][col - 1] == 1)
			{
				col--;
				flag = 0;
			}
			while (col + 1 <= 99 && flag && map[row][col + 1] == 1)
				col++;
		}
		printf("#%d %d\n", case_n, col);
		case_n++;
	}
}