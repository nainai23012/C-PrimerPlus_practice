/*********************************************************************
    ������:4�� ������һ�������ܣ�
	���ṩ���������ĺ�����ԭ�ͣ� �Ӷ���ɸó��� ע�⣬ Ӧ������
	show( )������ ÿ����ʹ��Ĭ�ϲ����� �뾡����ʹ��cosnt������ set( )ʹ��
	new�����㹻�Ŀռ����洢ָ�����ַ����� ����ʹ�õļ�������ƺ�ʵ
	����ʱʹ�õ����ơ� �����ܻ������޸�ͷ�ļ������ƣ� ɾ��using����ָ
	� ��ȡ�������õı������� ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/23-������ 16:58:55
    ˵��:
*********************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct stringy {
    char *str;
    int ct;
};
void set(struct stringy &in_stringy, char * in_string); 
void show(const struct stringy &in_stringy, int print_times = 1);
void show(const char * str, int print_times = 1);

int main(void) {
	
	stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    int i = 1+2; 
    cout<<"************"<<beany.str<<endl;
//    delete [] beany.str;
//    cout<<"************"<<beany.str<<endl;
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
	return 0;
}



void set(struct stringy &in_stringy, char * in_string)
{
    int string_length = strlen(in_string);
    in_stringy.str = new char(string_length + 1);
    strcpy(in_stringy.str, in_string);
    in_stringy.ct = string_length;
}
void show(const struct stringy &in_stringy, int print_times)
{
    for (int i = 0; i < print_times; i++)
    {
        cout << "member string of struct stringy: " << in_stringy.str << endl;
    }
}
void show(const char * str, int print_times)
{
    for (int i = 0; i < print_times; i++)
    {
        cout << "Print char string: " << str << endl;
    }
}

