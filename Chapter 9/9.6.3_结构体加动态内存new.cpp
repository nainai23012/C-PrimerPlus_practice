/*********************************************************************
    ������:3�� ������һ���ṹ������
	��дһ������ ʹ�ö�λnew�������һ�������������ֽṹ����
	�����һ���������С� Ȼ�� ���ṹ�ĳ�Ա��ֵ������char���飬 ʹ��
	����strcpy( )�� �� ��ʹ��һ��ѭ������ʾ���ݡ� һ�ַ�����������嵥
	9.10������һ����̬���������������� ��һ�ַ�����ʹ�ó���new����
	�������仺������
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/26-���ڶ� 17:16:02
    ˵��:
*********************************************************************/
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
const int SIZE=2;

struct chaff
{
	char dross[20];
	int slag;
};

void set_chaff(chaff * pch);
void show_chaff(const chaff * pch);

int main(void) {
	
//	chaff arr1[SIZE];
	chaff * pch = new chaff[SIZE];
	cout<<"������������Ϣ��"<<endl;
	set_chaff(pch);
	cout<<"\n\n\n��ʾ������Ϣ��"<<endl;
	show_chaff(pch);
	delete [] pch;

	return 0;
}

//void set_chaff(chaff & g)
void set_chaff(chaff * pch)
{
	char temp[20];
	char next;
	for(int i=0;i<SIZE;++i)
	{
		cin.getline(temp,20);
//		strcpy(pch[i].dross,temp);
		strncpy(pch[i].dross,temp,20);
//		while (cin.get(next) && next != '\n')
//			;
		cin>>pch[i].slag;
		cin.get();
	}
}
void show_chaff(const chaff * pch)
{
	for(int i=0;i<SIZE;++i)
	{
		cout<<pch[i].dross<<" : "<<pch[i].slag<<endl;
	}
	
}


