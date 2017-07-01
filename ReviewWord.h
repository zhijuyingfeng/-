#include "LearnWord.h"

int Review(int n,char ReviewWord[][15], char ReviewMeaning[][30])
{
	if (!n)
	{
		cout << "您今天还没有学习单词呢" << endl;
		return 0;
	}
	char a;
	scanf("%c", &a);
	for (int j = 0; j < n; j++)
	{
		cout << ReviewWord[j] ;
		scanf("%c", &a);
		cout << ReviewMeaning[j] << endl;
		scanf("%c", &a);
	}
	cout << "您已经完成单词的复习，请选择相应字母使用其他功能" << endl;
	return 1;
}