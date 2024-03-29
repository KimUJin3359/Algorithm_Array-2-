#include <iostream>

using namespace std;

void print_arr(int num[5]);
void swap(int *a, int *b);

int main() {
	int num[5];
	int index = -1;
	int max_v = -1;
	int max_i;

	for (int i = 0; i < 5; i++)
		cin >> num[i];
	for (int i = 0; i < 4; i++)
	{
		if (num[i] > num[i + 1])
			index = i;
	}
	if (index == -1)
	{
		print_arr(num);
		return (0);
	}
	for (int i = index + 1; i < 5; i++)
	{
		if (num[i] > max_v && num[i] < num[index])
		{
			max_v = num[i];
			max_i = i;
		}
	}
	swap(&num[index], &num[max_i]);
	for (int i = index + 1; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])
				swap(&num[i], &num[j]);
		}
	}
	print_arr(num);
	return (0);
}

void print_arr(int num[5])
{
	for (int i = 0; i < 5; i++)
		cout << num[i] << " ";
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}