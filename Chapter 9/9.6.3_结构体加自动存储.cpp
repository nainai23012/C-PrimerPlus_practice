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
using std::cout;
using std::cin;
using std::endl;
const int SIZE=2;

struct chaff
{
	char dross[20];
	int slag;
};

void set_chaff(chaff & g);
void show_chaff(const chaff & g);

int main(void) {
	
	chaff arr1[SIZE];
//	cout<<"������������Ϣ��"<<endl;
	for(int i=0;i<SIZE;++i)
	{
		set_chaff(arr1[i]);
	}
	
	cout<<"\n\n\n��ʾ������Ϣ��"<<endl;
	for(int i=0;i<SIZE;++i)
		show_chaff(arr1[i]);
	return 0;
}

void set_chaff(chaff & g)
{
	char next;
	cin.getline(g.dross,20);
//	while (cin.get(next) && next != '\n')
//		;
	cin>>g.slag;
	cin.get();
}
void show_chaff(const chaff & g)
{
	cout<<g.dross<<" : "<<g.slag<<endl;
}


