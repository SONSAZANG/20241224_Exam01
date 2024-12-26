#include <iostream>
#include <string>

using namespace std;

int getTotalScore(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}

	return total;
}

int getAvgScore(int array[], int size)
{
	int total = getTotalScore(array, size);

	return total / size;
}

void sort(int array[], int size, int order = 1)
{
	cout << ((order == 1) ? "�������� ����!" : "�������� ����!") << endl;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (order == 1 ? (array[j] > array[j + 1]) : (array[j] < array[j + 1]))
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int scoreArray[5];
	cout << "5���� ���� ������ �Է��ϼ���" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> scoreArray[i];
	}
	cout << endl;

	int totalScore = getTotalScore(scoreArray, 5);
	int avgScore = getAvgScore(scoreArray, 5);

	cout << "5�� ���� ������ ������ " << totalScore << "�� �̰� ����� " << avgScore << "�� �Դϴ�." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "scoreArray[" << i << "] = " << scoreArray[i] << endl;
	}

	int order = 0;
	while (true)
	{
		cout << "���ϴ� ���� ������ �Է��ϼ��� (�������� ����-1, �������� ����-2, ����-9)" << endl;
		cin >> order;

		if (order == 9)
		{
			cout << "���α׷� ����!!!" << endl;
			break;
		}

		sort(scoreArray, 5, order);

		for (int i = 0; i < 5; i++)
		{
			cout << "scoreArray[" << i << "] = " << scoreArray[i] << endl;
		}
	}
}