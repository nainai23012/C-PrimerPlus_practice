/*********************************************************************
    ������:9.6 �����ϰ  
		golf.cpp 
		1�� ������һ��ͷ�ļ���
		�������ͷ�ļ��� ����һ�����ļ����� ���е�һ���ļ���Ϊ
	golf.cpp�� ���ṩ����ͷ�ļ��е�ԭ��ƥ��ĺ������壻 ��һ���ļ�Ӧ
	����main( )�� ����ʾԭ�ͻ��������������ԡ� ���磬 ����һ�����û���
	���ѭ���� ��ʹ����������������һ����golf�ṹ��ɵ����飬 ����
	���������û����߶���ѡ�ֵ���������Ϊ���ַ���ʱ�� ѭ����������
	main( )����ֻʹ��ͷ�ļ���ԭ�ͻ��ĺ���������golf�ṹ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/26-���ڶ� 15:56:42
    ˵��:
*********************************************************************/
#include <iostream>
int main(void)
{
    golf g[10];
    int n = 0;
    cout << "����������Ϣ: " << endl;

    while ((n < 10) && (setgolf(g[n])))
    {
        n++;
        cout << "��һλr: " << endl;
    }

    cout << "�鿴���и߶���ѡ�ֵ���Ϣ: " << endl;
    for (int i = 0; i < n; i++)
    {
        showgolf(g[i]);
    }

}

void setgolf(golf & g,const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cin.getline(fullname,40);
	if (strcmp(g.fullname, "") == 0)
		return 0;
	std::cin>>g.handicap;
	std::cin.get();
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout<<g.fullname;
	std::cout<<g.handicap;
}
