#include "LearnWord.h"

int Review(int n,char ReviewWord[][15], char ReviewMeaning[][30])
{
	if (!n)
	{
		cout << "�����컹û��ѧϰ������" << endl;
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
	cout << "���Ѿ���ɵ��ʵĸ�ϰ����ѡ����Ӧ��ĸʹ����������" << endl;
	return 1;
}