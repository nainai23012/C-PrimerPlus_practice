/*********************************************************************
    ������:2�� CandyBar�ṹ����3����Ա�� ��һ����Ա�洢candy bar��Ʒ����
�ƣ� �ڶ�����Ա�洢candy bar��������������С���� �� ��������Ա�洢
candy bar�������������� �� ���дһ������ ��ʹ��һ�������ĺ�����
����CandyBar�����á� charָ�롢 double��int��Ϊ������ �������3��ֵ
������Ӧ�Ľṹ��Ա�� ���3��������Ĭ��ֵ�ֱ�Ϊ��Millennium
Munch���� 2.85��350�� ���⣬ �ó��򻹰���һ����CandyBar������Ϊ��
���� ����ʾ�ṹ���ݵĺ����� �뾡����ʹ��const��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/23-������ 14:48:34
    ˵��:
*********************************************************************/
#include <iostream>
//#include <string>
#include <cstring>
using namespace std;
const int Size=80;

struct CandyBar{
//	string brand;
	char brand[Size]; //Ʒ�� 
	float weight; //���� 
	int count;  //���� 
};

void fill(CandyBar & c1,char * ch="Millennium Munch",double d1=2.85,int n1=350); 
void print(const CandyBar & c1); 

int main(void) {
	CandyBar cand[5];
	fill(cand[0],"�޹���",0.856,25);
	fill(cand[1],"�𹿰�",13500,1);
	fill(cand[2]);
	cout<<"\n*****************\n"<<endl;
	print(cand[0]);
	print(cand[1]);
	print(cand[2]);
	return 0;
}

void fill(CandyBar & c1,char * ch,double d1,int n1)
{
	strcpy(c1.brand,ch);
	c1.weight = d1;
	c1.count = n1;
//	cout<<"brand:";
//	cin.getline(c1.brand,Size);
//	cout<<"weight:";
//	cin>>c1.weight;
//	cin.get();
//	cout<<"count:";
//	cin>>c1.count;
//	cin.get();
}
void print(const CandyBar & c1)
{
	cout<<"brand: "<<c1.brand<<endl;
	cout<<"weight: "<<c1.weight<<endl;
	cout<<"count: "<<c1.count<<endl;
}

