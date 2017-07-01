#pragma once
#include <iostream>
using namespace std;
#include "time.h"
#define N 10000


void FindWord(int i, char word[N][15], char meaning[N][30])
{
	int k = 0;
	char usermeaning[30];
	cout << "Tips ：输入Exit退出查词" << endl;
	while (1)
	{
		cout << "请输入您想查找的意思：" ;
		cin >> usermeaning;
		if (!strcmp(usermeaning, "Exit"))
		{
			break;
		}
		char* p;
		for (int j = 0; j < i; j++)
		{
			p = strstr(meaning[j], usermeaning);
			if (p!=NULL)
			{
				cout << word[j] << " ";
				k++;
				cout << endl;
			}
		}
		if (!k)
		{
			cout << "对不起，没有找到您要查找的单词" << endl;
		}
	}
}