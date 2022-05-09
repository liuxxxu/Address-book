/*
通讯录管理系统
最多存储1000个联系人的信息
包含联系人姓名、性别、年龄、电话、住址等信息
实现增、删、改、查、排序、显示联系人信息等功能
*/

#include"main.h"

int main()
{
	
	int input = 0;
	
	do
	{
		menu();
		cout << "请输入序号：";
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
			cout << "请输入指定序号" << endl;
		}
	} while (input);

	return 0;
}