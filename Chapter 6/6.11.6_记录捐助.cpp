/*********************************************************************
    ������: 6�� ��дһ������ ��¼��������ά���Ϸ�Ȩ�����塱���ʽ� �ó�
		��Ҫ���û������������Ŀ�� Ȼ��Ҫ���û�����ÿһ�������ߵ�������
		��� ��Щ��Ϣ��������һ����̬����Ľṹ�����С� ÿ���ṹ������
		��Ա�� ���������������ַ����飨��string���� �������洢�����
		double��Ա�� ��ȡ���е����ݺ� ������ʾ���о���10000�ľ�
		���ߵ�������������� ���б�ǰӦ����һ�����⣬ ָ������ľ��
		������Ҫ����ˣ�Grand Patrons�� �� Ȼ�� �����г������ľ���ߣ�
		���б�Ҫ��Patrons��ͷ�� ���ĳ�����û�о���ߣ� ����򽫴�ӡ��
		�ʡ�none���� �ó���ֻ��ʾ��������� ������������
    ��Ȩ:
    ����: ��Ұ�� 
    ����: 2022/4/15-������ 17:35:59
    ˵��:
*********************************************************************/
#include <iostream>
#include <string>
struct donation{
	std::string name;
	double money;
};
int main(void) {
	using namespace std;
	int num;  // ��������
	cout<<"����������ߵ�������";
	cin>>num;
	cin.get();
	// �����˿ռ�
	donation *strdon = new donation[num];   //ȫ������� 
	donation *strdonl = new donation[num];  //��Ҫ����� 
	donation *strdons = new donation[num];  //һ������ 
//	donation strdon[num];  //�����ṹ������
//	donation strdonl[num];  //>10000  Grand Patrons
//	donation strdons[num];  //Patrons
	int l=0,s=0;
	// ����д������ 
	for(int i=0;i<num;++i)
	{
		cout<<"�������"<<i+1<<"����Ա����Ϣ\n������";
		getline(cin,strdon[i].name);
		cout<<"�����";
		cin>> strdon[i].money;
		cin.get();
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

