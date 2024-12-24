#include <iostream>

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

int main()
{
	int scoreArray[5];
	cout << "5개의 과목 성적을 입력하세요" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> scoreArray[i];
	}
	cout << endl;

	int totalScore = getTotalScore(scoreArray, 5);
	int avgScore = getAvgScore(scoreArray, 5);

	cout << "5개 과목 점수의 총합은 " << totalScore << "점 이고 평균은 " << avgScore << "점 입니다." << endl;
}