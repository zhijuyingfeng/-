#pragma once
#include <iostream>
using namespace std;
#include "time.h"
#define N 10000


void FindWord(int i, char word[N][15], char meaning[N][30])
{
	int k = 0;
	char usermeaning[30];
	cout << "Tips ������Exit�˳����" << endl;
	while (1)
	{
		cout << "������������ҵ���˼��" ;
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
			cout << "�Բ���û���ҵ���Ҫ���ҵĵ���" << endl;
		}
	}
}