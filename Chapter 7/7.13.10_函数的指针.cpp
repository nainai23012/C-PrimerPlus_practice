/*********************************************************************
    ������: 10�� ���һ����Ϊcalculate( )�ĺ����� ����������doubleֵ��һ��ָ
������ָ�룬 ����ָ��ĺ�����������double������ ������һ��
doubleֵ�� calculate( )����������Ҳ��double�� �����ر�ָ��ĺ���ʹ��
calculate( )������double��������õ���ֵ�� ���磬 ����add( )�����Ķ�
�����£�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/20-������ 15:18:43
    ˵��:
*********************************************************************/
#include <iostream>
double add(double x, double y);
double mul(double x, double y);
double calculate(double x,double y,double (*pad)(double x, double y));

int main(void) {
	using namespace std;
	double a,b;
	cout<<"�������������֣��Կո�ָ���"; 
	while(cin>>a>>b)
	{
		cout<<"a,b,add = "<<calculate(a,b,add)<<endl;
		cout<<"a,b,mul = "<<calculate(a,b,mul)<<endl;
		cout<<"����������������"; 
	}
	return 0;
}

double calculate(double x,double y,double (*pad)(double x, double y))
{
	return pad(x,y);
}
double add(double x, double y)
{
    return x + y;
}
double mul(double x, double y)
{
    return x * y;
}
