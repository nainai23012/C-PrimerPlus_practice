/*********************************************************************
    ������:6�� ��дģ�庯��maxn( )�� ������һ��T����Ԫ����ɵ������һ
	����ʾ����Ԫ����Ŀ��������Ϊ������ ����������������Ԫ�ء� �ڳ�
	��������в��ԣ� �ó���ʹ��һ������6��intԪ�ص������һ������4��
	doubleԪ�ص����������øú����� ���򻹰���һ�����廯�� ����charָ
	������������е�ָ��������Ϊ������ ����������ַ����ĵ�ַ�� ��
	���ж���������ַ����� �򷵻����е�һ���ַ����ĵ�ַ�� ʹ����5��
	�ַ���ָ����ɵ����������Ըþ��廯��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/24-������ 11:20:15
    ˵��:
*********************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
template<typename T>
void max5(T arr[],int n);
template <> void max5(char *arr[],int n);
int main(void) {
	int arr[6]={5,6,8,99,4,45};
	double arr2[4]={5.1, 666.1, 8.2, 99.0};
	char * arr3[5]={"yangggg","xin","yangggg","john","ha"};
	 
	max5(arr,6);
	max5(arr2,4);
	max5(arr3,5);
	
	return 0;
}


template <> void max5(char *arr[],int n)
{
	int count=strlen(arr[0]);
	int index=1;
	for(int i = 0;i<n;++i)
		(count<strlen(arr[i]))?count=strlen(arr[i]),index=i+1:1;
	cout<<index<<endl;
}

template<typename T>
void max5(T arr[],int n)
{	
//	cout<<sizeof(arr)/sizeof(arr[0])<<endl;
	T max=arr[0];
	for(int i=1;i<n;++i)
		(max<arr[i])?(max=arr[i]):1;
	cout<<max<<endl;
}
