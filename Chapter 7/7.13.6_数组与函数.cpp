/*********************************************************************
    ������: 6�� ��дһ������ ��ʹ�����к�����
	Fill_array( )��һ��double��������ƺͳ�����Ϊ������ ����ʾ�û�
	����doubleֵ�� ������Щֵ�洢�������С� �����鱻�������û�������
	������ʱ�� ���뽫ֹͣ�� ������ʵ�������˶��ٸ����֡�
	Show_array( )��һ��double��������ƺͳ�����Ϊ������ ����ʾ��
	��������ݡ�
	Reverse-array( )��һ��double��������ƺͳ�����Ϊ������ ������
	���������е�ֵ��˳��ת��
	����ʹ����Щ������������飬 Ȼ����ʾ���飻 ��ת���飬 Ȼ��
	��ʾ���飻 ��ת�����г���һ�������һ��Ԫ��֮�������Ԫ�أ� Ȼ��
	��ʾ���顣
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 17:23:34
    ˵��:
*********************************************************************/
#include <iostream>
using namespace std;
const int MAX=10;
int Fill_array(double arr[],int size);
int Show_array(double arr[],int size);
int Reverse_array(double arr[],int size);

int main(void) {
	double arr[MAX];
	int count;
	cout<<"�������֣�";
	count = Fill_array(arr,MAX);  //���� 
	cout<<"���������ˣ�"<<count<<" �����֣�\n"; 
	Show_array(arr,count);  //��ʾ 
	Reverse_array(arr,count);  //��ת 
	Show_array(arr,count);
	return 0;
}

int Fill_array(double arr[],int size)
{
	int i=0;
	while( i<size && cin>>arr[i])
	{
		++i;
	}
	return i;
}

int Show_array(double arr[],int size)
{
	for(int i=0;i<size;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int Reverse_array(double arr[],int size)
{
	double temp;
	for(int i=0;i<size/2;++i)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}





