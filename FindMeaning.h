#pragma once
#include <iostream>
using namespace std;
#include "time.h"
#define N 10000

void FindMeaning(int i, char word[N][15], char meaning[N][30])
{
	int k = 0;
	char userword[15];
	cout << "Tips : ����Exit���˳����" << endl;
	while (1)
	{	
		
		cout << "��������Ҫ���ҵĵ���: ";
		cin >> userword;
		if (!strcmp("Exit", userword))
		{
			break;
		}
		for (int j = 0; j<i; j++)
		{
			if (!strcmp(userword, word[j]))
			{
				cout << userword << "����˼�� " << meaning[j] << endl<<endl;
				k++;
				break;
			}
		}
		if (!k)
		{
			cout << "�Բ���û���ҵ���Ҫ���ҵĵ���" << endl<<endl;
		}
	}

}