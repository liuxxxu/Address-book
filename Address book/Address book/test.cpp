/*
ͨѶ¼����ϵͳ
���洢1000����ϵ�˵���Ϣ
������ϵ���������Ա����䡢�绰��סַ����Ϣ
ʵ������ɾ���ġ��顢������ʾ��ϵ����Ϣ�ȹ���
*/

#include"main.h"

int main()
{
	
	int input = 0;
	
	do
	{
		menu();
		cout << "��������ţ�";
		cin >> input;
		switch(input)
		{
		case ADD:
			break;
		case DELETE:
			break;
		case MODIFY:
			break;
		case SEARCH:
			break;
		case SORT:
			break;
		case DISPLAT:
			break;
		case EXIT:
			break;
		default:
			cout << "������ָ�����" << endl;
		}
	} while (input);

	return 0;
}