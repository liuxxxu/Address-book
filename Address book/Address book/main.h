#pragma once
#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

//��ϵ����Ϣ�ṹ��
struct contact
{
	string name;
	string sex;
	int age;
	int tele;
	string addr;
};

//ö�ٲ˵�ѡ��
enum Option
{
	EXIT,	//0
	ADD,	//1
	DELETE,	//2
	MODIFY,	//3
	SEARCH,	//4
	SORT,	//5
	DISPLAT	//6
};

void menu();