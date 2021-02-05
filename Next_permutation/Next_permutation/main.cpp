#include <iostream>

using namespace std;

void print_arr(int num[5]);
void swap(int &a, int &b);

int main() {
	int num[5];
	int index;
	int min_v = 2147483647;
	int min_i;

	for (int i = 0; i < 5; i++)
		cin >> num[i];
	for (int i = 0; i < 4; i++)
	{
		if (num[i] < num[i + 1])
			index = i;
	}
	for (int i = index + 1; i < 5; i++)
	{
		if (num[i] < min_v)
		{
			min_v = num[i];
			min_i = i;
		}
	}
	if (min_v == 5)
	{
		print_arr(num);
		return (0);
	}
	swap(num[index], num[min_i]);
	for (int i = index + 1; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
				swap(num[i], num[j]);
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

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}