/*********************************************************************
    ������: 2�� ʹ��array���󣨶��������飩 ��long double��������long long��
			���±�д�����嵥5.4�� ������100!��ֵ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/13-������ 14:26:45
    ˵��:
*********************************************************************/
#include <iostream>
#include <array>
const int ArSize = 101;      // example of external declaration
int main()
{
	using namespace std; 
//    long long factorials[ArSize];
    array<long double,ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
    return 0;
}
