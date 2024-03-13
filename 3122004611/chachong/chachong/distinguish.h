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
		char appearance[1000] = {0};//保存已统计字符
		int flag = 0, i = 0;
		double count = 0.0;
		for (char c : p1)
		{
			for (i = 0; i < flag; i++)//跳过重复字符
			{
				if (c == appearance[i])
					continue;
			}
			if (flag == 0)//数组为空时，将首个字符存入数组
			{
				appearance[flag] = c;
				flag++;
			}
			if (p2.find(c) != string::npos)//计算重复字符数量
			{
				count++;
			}
			if (count == p1.length())
				break;
		}
		return count / p1.length();
	}
};