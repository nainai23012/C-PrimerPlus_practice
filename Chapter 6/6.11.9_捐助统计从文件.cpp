/*********************************************************************
    ������: ��ɱ����ϰ6�� �����ļ��ж�ȡ�������Ϣ�� ���ļ��ĵ�һ��
	ӦΪ��������� ���µ�����ӦΪ�ɶԵ��С� ��ÿһ���У� ��һ��Ϊ���
	�������� �ڶ���Ϊ������ �����ļ����������棺
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/16-������ 13:33:14
    ˵��:
*********************************************************************/
#include <iostream>
#include <string>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
struct donation{
	std::string name;
	double money;
};

int main(void) {
	using namespace std;
	int num;  // ��������
	string FileName = "contributions.txt" ;
	ifstream inFile;
	inFile.open(FileName.c_str());
    inFile >> num;  // ��ȡ��һ�� ���� 
    inFile.get();
	donation *strdon = new donation[num];   //ȫ������� 
	donation *strdonl = new donation[num];  //��Ҫ����� 
	donation *strdons = new donation[num];  //һ������ 
//	donation strdon[num];  //�����ṹ������
//	donation strdonl[num];  //>10000  Grand Patrons
//	donation strdons[num];  //Patrons
	int l=0,s=0;
	// ������ȡ���� 
	for(int i=0;i<num;++i)
	{
//		cout<<"�������"<<i+1<<"����Ա����Ϣ\n������";
		getline(inFile,strdon[i].name);
//		cout<<"�����";
		inFile>> strdon[i].money;
		inFile.get();
		if(strdon[i].money>10000)
		{
			strdonl[l].money = strdon[i].money;
			strdonl[l].name	= strdon[i].name;
			++l;
		}
		else
		{
			strdons[s].money = strdon[i].money;
			strdons[s].name	= strdon[i].name;
			++s;
		}
	}
	// �����Ϣ 
	cout<<"\n��Ҫ����ˣ�Grand Patrons��\n";
	if(l>0)
	{
		for(int i=0;i<l;++i)
		cout<<strdonl[i].name<<" : "<<strdonl[i].money<<endl;
	}
	else
		cout<<"none\n";
		
	cout<<"\n��������ˣ�Patrons��\n";
	if(s>0)
	{
		for(int i=0;i<s;++i)
		cout<<strdons[i].name<<" : "<<strdons[i].money<<endl;
	}
	else
		cout<<"none\n";
		// �ͷſռ�
	delete [] strdon; 
	delete [] strdonl; 
	delete [] strdons; 
	return 0;
}
