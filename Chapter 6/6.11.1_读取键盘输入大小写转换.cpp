/*********************************************************************
    ������: 6.11 �����ϰ
			1�� ��дһ������ ��ȡ�������룬 ֱ������@����Ϊֹ�� ������
			���루���ֳ��⣩ �� ͬʱ����д�ַ�ת��ΪСд�� ��Сд�ַ�ת��Ϊ��
			д��������cctype����ϵ�У� ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/15-������ 10:43:04
    ˵��:
*********************************************************************/
#include <iostream>
#include <cctype>
//const int Size 100;
int main(void) {
	using namespace std;
	char str1;
	while((str1=cin.get())!='@')
	{
		if(isdigit(str1))
			continue;
		else if(isupper(str1))
			cout<<char(tolower(str1));
		else if(islower(str1))
			cout<<char(toupper(str1));
	}
	return 0; 
}

