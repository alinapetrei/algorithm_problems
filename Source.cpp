#include"Header.h"

void Solutions::printArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << ' ';
}

void Solutions::findPairBruteForce(int array[], int n, int target)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (array[i] + array[j] == target)
			{
				cout << "I've found the pair (" << array[i] << "," << array[j] << ")\n";
				return;
			}
	cout << "No pair found!\n";
}

void Solutions::findPairSortingArray(int array[], int n, int target)
{
	sort(array, array + n);

	int i = 0;
	int j = n - 1;
	while (i < j)
	{
		if (array[i] + array[j] == target)
		{
			cout << "I've found the pair (" << array[i] << "," << array[j] << ")\n";
			return;
		}
		else if (array[i] + array[j] > target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	cout << "No pair found!\n";
}

void Solutions::findPairUsingMap(int array[], int n, int target)
{
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		if (m.find(target - array[i]) != m.end())
		{
			cout << "I've found the pair (" << target - array[i] << "," << array[i] << ")\n";
			return;
		}

		m[array[i]] = i;
	}
	cout << "No pair found!\n";
}

int main()
{
	Solutions s;

	int nums[] = { 8, 7, 2, 5, 3, 1 };
	int numsBackup[] = { 8, 7, 2, 5, 3, 1 };
	int target = 10;
	int n = sizeof(nums) / sizeof(nums[0]);

	s.findPairBruteForce(nums, n, target);
	s.findPairSortingArray(nums, n, target);
	s.findPairUsingMap(numsBackup, n, target);

	return 0;
}