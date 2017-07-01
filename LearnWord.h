#pragma once
#include <iostream>
using namespace std;
#include "time.h"
#define N 10000
int n;//定义学习单词数
char ReviewWord[200][15], ReviewMeaning[200][30];
void LearnWord(int i, char word[N][15], char meaning[N][30])
{
	//char ReviewWord[200][15], ReviewMeaning[200][30];
	srand(time(0));
	int arr[N];
	//int n;//定义学习单词数
	cout << "请输入你今天想学习的单词数：" << endl;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		arr[j] = rand() % i;
		for (int k = 0; k < j; k++)
		{
			if (arr[k] == arr[j])
			{
				i--;
			}
		}
	}
	char anyletter;
	scanf("%c", &anyletter);
	cout << "输入空格学习下一个单词" << endl;
	for (int j = 0; j < n; j++)
	{
		cout << word[arr[j]] << " ";
		sprintf(ReviewWord[j], "%s", word[arr[j]]);
		sprintf(ReviewMeaning[j], "%s", meaning[arr[j]]);
		scanf("%c", &anyletter);
		cout << meaning[arr[j]] << endl;
		if (j < n - 1)
		{
			scanf("%c", &anyletter);
		}
	}
	scanf("%c", &anyletter);
	cout << "单词学习已结束,请选择相应字母使用其他功能" << endl;
}