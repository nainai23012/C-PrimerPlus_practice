/*********************************************************************
    ������:3�� ��дһ�������� ������һ��ָ��string�����������Ϊ������ ��
	����string���������ת��Ϊ��д�� Ϊ�˿�ʹ�ñ�6.4�����ĺ���toupper(
	)�� Ȼ���дһ������ ��ͨ��ʹ��һ��ѭ�������ܹ��ò�ͬ��������
	������������� �ó��������������£�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/23-������ 15:51:18
    ˵��:
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;
void upper(const string & str1); 
int main(void) {
	cout<<"������һ��Сд���ַ���(q�˳�)��\n";
	string str1;
	getline(cin,str1);
	while(str1!="q")
	{
		upper(str1);
		cout<<"\n�ٴ������ַ�����\n"; 
		getline(cin,str1);
	}
	cout<<"�չ���"<<endl; 
	return 0;
}

void upper(const string & str1){
	int count = str1.size();
	char ch;
	for(int i=0;i<count;++i)
	{
		ch = (str1[i]>='a' && str1[i]<='z')? str1[i]-32:str1[i];
		cout<<ch; 
	}
}
