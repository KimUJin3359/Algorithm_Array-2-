#include "stdio.h"
#define ABS(x) (x) < 0 ? ~(x) + 1 : (x)

int main()
{
	int num[5][5] = { 9, 20, 2, 18, 11, 19, 1, 25, 3, 21, 8, 24, 10, 17, 7, 15, 4, 16, 5, 6, 12, 13, 22, 23, 14 };
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };
	int x;
	int y;
	int dir;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			int res = 0;
			for (dir = 0; dir < 4; dir++)
			{
				if (0 <= y + dy[dir] && y + dy[dir] <= 4 && 0 <= x + dx[dir] && x + dx[dir] <= 4)
					res += ABS(num[y][x] - num[y + dy[dir]][x + dx[dir]]);
			}
			printf("(%d, %d) : %d\n", y, x, res);
		}
	}
}