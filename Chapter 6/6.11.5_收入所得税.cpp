/*********************************************************************
    ������: 5�� ��Neutronia������ ���ҵ�λ��tvarp�� ��������˰�ļ��㷽ʽ���£�
5000 tvarps�� ����˰
5001��15000 tvarps�� 10%
15001��35000 tvarps�� 15%
35000 tvarps���ϣ� 20%
���磬 ����Ϊ38000 tvarpsʱ�� ����˰Ϊ5000 0.00 + 10000 0.10 +
20000 0.15 + 3000 0.20�� ��4600 tvarps�� ���дһ������ ʹ��ѭ����
Ҫ���û��������룬 ����������˰�� ���û����븺���������ʱ�� ѭ����������
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/15-������ 15:45:17
    ˵��:
*********************************************************************/
#include <iostream>
using namespace std;
double calc(double inc);  //���� ����˰�� 
int main(void) {
	double income,tax;  //����  ˰��
	cout<<"�������������룺(���븺���������ʱ�˳�)��";
	while((cin>>income) && (income >= 0))
	{
		tax = calc(income);
		cout<<"��������Ϊ��"<<income<<"\n��Ҫ��˰��"<<tax<<endl;
		cout<<"�ٴ������������룺"; 
	}
	return 0;
}

double calc(double inc)
{
	double result = 0.0;
	if(inc <= 5000)
		result = 0.0;
	else if(inc > 5000 && inc <= 15000)
		result = (inc-5000) * 0.1;
	else if(inc > 15000 && inc <= 35000)
		result = 10000 * 0.1 + (inc-15000) * 0.15;
	else if(inc > 35000)
		result = 10000 * 0.1 + 20000 * 0.15 + (inc-35000) * 0.2;
	else
		result = 0.00;
	return result;
}

