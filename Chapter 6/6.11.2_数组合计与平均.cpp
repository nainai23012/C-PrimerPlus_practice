/*********************************************************************
    ������: 2�� ��дһ������ ��ཫ10��donationֵ���뵽һ��double������
		�������Ը�⣬ Ҳ��ʹ��ģ����array�� �� ������������������ʱ������
		���룬 ��������Щ���ֵ�ƽ��ֵ�Լ��������ж��ٸ����ִ���ƽ��ֵ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/15-������ 13:33:23
    ˵��:
*********************************************************************/
#include <iostream>
#include <array> 
#include <cstdlib>          // support for exit()
int main(void) {
	using namespace std;
	const unsigned int SIZE = 10; //������� 
	double total=0,avg=0;  //�ϼ� ƽ��ֵ 
	unsigned int count=0,lagNum=0;  //���� 
//	double donation[SIZE];  //����1 ��������
	array<double, SIZE> donation;  //����2 arrayģ������ 
	cout<<"����������10����ֵ���Կո��س��ָ������������ʱ���������룩:\n";
	while(count<SIZE && (cin>>donation[count]))  //С�����ֵ������������Ч 
	{
		total += donation[count];
		++count; 
	}
	if(count>0) 
		avg = total/count;
	else
		cout<<"û����Ч���������룡",exit(EXIT_FAILURE); 
	//�жϴ���ƽ��ֵ������
	for(int i=0;i<count;++i)
		(donation[i] > avg)?lagNum++:1==1; 
	cout<<"���ƣ�"<<count<<" �����ݡ�\n�ܼ�: "<<total<<" ƽ��ֵΪ�� "<<avg;
	cout<<"\n������ "<<lagNum<<" �����ݴ���ƽ��ֵ��";
	return 0;
}

