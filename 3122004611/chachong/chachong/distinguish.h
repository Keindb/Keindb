#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include <cassert>
using namespace std;
class Distinguish
{
public:
	string originPattern;
	string fakePattern;
	string answear;
	double CaculateSimularity(const string& p1, const string& p2)
	{
		char appearance[1000] = {0};//������ͳ���ַ�
		int flag = 0, i = 0;
		double count = 0.0;
		for (char c : p1)
		{
			for (i = 0; i < flag; i++)//�����ظ��ַ�
			{
				if (c == appearance[i])
					continue;
			}
			if (flag == 0)//����Ϊ��ʱ�����׸��ַ���������
			{
				appearance[flag] = c;
				flag++;
			}
			if (p2.find(c) != string::npos)//�����ظ��ַ�����
			{
				count++;
			}
			if (count == p1.length())
				break;
		}
		return count / p1.length();
	}
};