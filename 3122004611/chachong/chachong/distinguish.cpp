#include"distinguish.h"


int main(int argc, char* argv[])
{
	Distinguish fushion;
	string originPattern = argv[1];
	string fakePattern = argv[2];
	string answear = argv[3];
	cout << argv[1] << endl;//����ļ�·��
	cout << argv[2] << endl;
	cout << argv[3] << endl;
	ifstream originPoint(originPattern);
	ifstream fakePoint(fakePattern);
	ofstream answearPoint(answear);
	if (!originPoint.is_open() || !fakePoint.is_open() || !answearPoint.is_open())//����ļ��Ƿ�������
	{
		cout << "failed to open files" << endl;
		return 0;
	}
	string originText((istreambuf_iterator<char>(originPoint)), istreambuf_iterator<char>());//���ļ�תΪ�ַ���
	string fakeText((istreambuf_iterator<char>(fakePoint)), istreambuf_iterator<char>());
	double similarity = fushion.CaculateSimularity(originText, fakeText);
	answearPoint << fixed << setprecision(2) << similarity << endl;
	originPoint.close();
	fakePoint.close();
	answearPoint.close();

	system("pause");
	return 0;
}