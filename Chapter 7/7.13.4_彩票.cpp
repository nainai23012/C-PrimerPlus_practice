/*********************************************************************
    ������: 4�� ����ݵĲ�Ʊ���л�����ʹ��������嵥7.4��ʾ�ļ򵥲�Ʊ��
	���ı��塣 ����Щ�淨�У� ��Ҵ�һ�鱻��Ϊ����루field number�� ��
	������ѡ�񼸸��� ���磬 ���Դ������1��47��ѡ��5�����룻 �����Դ�
	�ڶ������䣨��1��27�� ѡ��һ�����루��Ϊ��ѡ���룩 �� ҪӮ��ͷ
	���� ������ȷ�������еĺ��롣 ��ͷ���ļ�����ѡ�����������ļ���
	��ѡ����ѡ���뼸�ʵĳ˻��� ���磬 ����������У� ��ͷ���ļ����Ǵ�
	47����������ȷѡȡ5������ļ������27����������ȷѡ��1�������
	���ʵĳ˻��� ���޸ĳ����嵥7.4�� �Լ����е����ֲ�Ʊͷ���ļ��ʡ�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 14:40:53
    ˵��:
*********************************************************************/
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2);
int main()
{
    using namespace std;
    double total1, choices1;
    double total2, choices2;
    cout << "����Ϸ��������ѡ���������Ȼ������ʰȡ��������\n ��47ѡ5+27ѡ1 ������: 47 5 27 1\n";
    while ((cin >> total1 >> choices1>> total2 >> choices2) && choices1 <= total1
			&& choices2 <= total2)
    {
        cout << "���Ļ񽱼���Ϊ�� ";
        cout << probability(total1, choices1, total2, choices2);      // compute the odds
        cout << " ��֮һ.\n";
        cout << "��һ����������Ϊ�� (q to quit): ";
    }
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2)
{
    long double result1 = 1.0;  // here come some local variables
    long double result2 = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers1, p = picks1; p > 0; n--, p--)
        result1 = result1 * n / p ;     
	for (n = numbers2, p = picks2; p > 0; n--, p--)
        result2 = result2 * n / p ; 
    return result1 * result2;
}
