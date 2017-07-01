#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include "LearnWord.h"
#include "FindMeaning.h"
#include "FindWord.h"
#include "interface.h"
#include "ReviewWord.h"

int main()
{
	Interface();

	//读取文件//
	char filename[] = "C:\\Program Files (x86)\\电子辞典\\dict.xyz";
	FILE* fp;
	fp = fopen(filename, "r");
	char citiao[N][50];
	char word[N][15], meaning[N][30];
	if (fp==NULL)
	{
		cout << "error!" << endl;
	}
	int i = 0;
	while (!feof(fp))
	{
		fgets(citiao[i], 50, fp);
		sscanf(citiao[i], "%s%s", word[i], meaning[i]);
		i++;
	}
	fclose(fp);

	while (1)
	{
		char cmd[10];
		cin >> cmd;
		if (!strcmp(cmd, "Exit"))
		{
			return 0;
		}
		else if (!strcmp(cmd, "s"))
		{
			FindMeaning(i, word, meaning);
		}
		else if (!strcmp(cmd, "t"))
		{
			FindWord(i, word, meaning);
		}
		else if (!strcmp(cmd, "w"))
		{
			LearnWord(i, word, meaning);
		}
		else if (!strcmp(cmd, "c"))
		{
			system("cls");
			Interface();
		}
		else if (!strcmp(cmd, "q"))
		{
			return 0;
		}
		else if (!strcmp("r", cmd))
		{
			Review(n, ReviewWord, ReviewMeaning);
		}
		else
		{
			cout << "error!请正确输入相应字母！" << endl;
		}
	}
	return 0;
}

