/*********************************************************************
    ������: 2�� ��дһ������ Ҫ���û��������10���߶���ɼ��� �������
	����һ�������С� ���������û������������(��������)�� ����һ������ʾ���г�
	���� Ȼ�󱨸�ƽ���ɼ��� ��ʹ��3�����鴦�������ֱ�������롢 ��
	ʾ�ͼ���ƽ���ɼ���
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 11:09:20
    ˵��:
*********************************************************************/
#include <iostream>
using namespace std;
void in_data(double arr[],unsigned int * count);  // ���� 
void show_data(const double arr[],const unsigned int count);  //��� 
void calc_data(const double arr[],const unsigned int count);   //���� 
const int SIZE =10;

int main(void) {
	double score[SIZE];
	unsigned int count=0;  //���� 
	cout<<"������10���߶���ɼ����Կո�ָ�������10���� 'q' ����¼�� ��\n";
	in_data(score,&count); //���� 
	show_data(score,count); //��ʾ 
	calc_data(score,count); //����ƽ������� 
	return 0;
}
void in_data(double arr[],unsigned int * count) //����
{ 
	while((*count)<10 && cin>>arr[*count])
	{
		(*count)++;
	}
//	for(int i=0;i<SIZE;++i)
//	{
//		cin>>arr[i];
//		if(arr[i]<0)
//			break;  //���븺���������¼�� 
//		++count;
//	}
//	return count;
}
void show_data(const double arr[],const unsigned int count)  //��� 
{
	for(int i=0;i<count;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void calc_data(const double arr[],const unsigned int count)   //����ƽ���ɼ�
{
	double total=0;
	for(int i=0;i<count;++i)
		total += arr[i];
	
	cout<<"ƽ���ɼ�Ϊ�� "<<total/count<<endl;
} 


