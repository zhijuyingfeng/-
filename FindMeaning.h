#pragma once
#include <iostream>
using namespace std;
#include "time.h"
#define N 10000

void FindMeaning(int i, char word[N][15], char meaning[N][30])
{
	int k = 0;
	char userword[15];
	cout << "Tips : 输入Exit以退出查词" << endl;
	while (1)
	{	
		
		cout << "请输入您要查找的单词: ";
		cin >> userword;
		if (!strcmp("Exit", userword))
		{
			break;
		}
		for (int j = 0; j<i; j++)
		{
			if (!strcmp(userword, word[j]))
			{
				cout << userword << "的意思是 " << meaning[j] << endl<<endl;
				k++;
				break;
			}
		}
		if (!k)
		{
			cout << "对不起，没有找到您要查找的单词" << endl<<endl;
		}
	}

}