#include <iostream>

using namespace std;

void print_map(int map[5][5]);

int main()
{
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };

	int arr[5][5] = { 9, 20, 2, 18, 11, 19, 1, 25, 3, 21, 8, 24, 10, 17, 7, 15, 4, 16, 5, 6, 12, 13, 22, 23, 14 };
	int res[5][5] = { 0, };
	int dir = 3;
	int now_x = -1;
	int now_y = 0;
	for (int i = 0; i < 25; i++)
	{
		int min_v = 100;
		int min_i;
		for (int j = 0; j < 25; j++)
		{
			if (min_v > arr[j / 5][j % 5])
			{
				min_v = arr[j / 5][j % 5];
				min_i = j;
			}
		}
		arr[min_i / 5][min_i % 5] = 101;
		if (res[now_y + dy[dir]][now_x + dx[dir]] != 0 || now_x + dx[dir] > 4 ||
			now_x + dx[dir] < 0 || now_y + dy[dir] > 4 || now_y + dy[dir] < 0)
		{
			if (dir == 3)
				dir = 1;
			else if (dir == 1)
				dir = 2;
			else if (dir == 2)
				dir = 0;
			else if (dir == 0)
				dir = 3;
		}
		now_x = now_x + dx[dir];
		now_y = now_y + dy[dir];
		res[now_y][now_x] = min_v;
	}
	print_map(res);
}

void print_map(int map[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
}