/*********************************************************************
    ������: 3�� ������һ���ṹ������
a�� ��дһ�������� ��ֵ����box�ṹ�� ����ʾÿ����Ա��ֵ��
b�� ��дһ�������� ����box�ṹ�ĵ�ַ�� ����volume��Ա����Ϊ������ά���ȵĳ˻���
c�� ��дһ��ʹ�������������ļ򵥳���
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 14:26:04
    ˵��:
*********************************************************************/
#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_struct(box a);  //��ʾ��Աֵ 
void address_struct(box * a);  //���ṹ���ַ 

int main(void) {
	box a={"ֽ����",10,20,30}; 
	show_struct(a);   //���� a 
	address_struct(&a); //���� b
	show_struct(a);   //���� a 
	return 0;
}
void address_struct(box * a)  //���ṹ���ַ 
{
	a->volume = a->height * a->width * a->length;
}
void show_struct(box a)  //��ʾ��Աֵ 
{
	cout<<a.maker<<endl; 
	cout<<a.height<<endl; 
	cout<<a.width<<endl; 
	cout<<a.length<<endl; 
	cout<<a.volume<<endl; 
}
