/*********************************************************************
    ������: 8�� �ڲ�ʹ��array����������ɳ����嵥7.15�����Ĺ����� ��д
		���������İ汾��
			a�� ʹ��const char *����洢��ʾ�������Ƶ��ַ����� ��ʹ��double
		����洢��֧��
			b�� ʹ��const char *����洢��ʾ�������Ƶ��ַ����� ��ʹ��һ��
		�ṹ�� �ýṹֻ��һ����Ա����һ�����ڴ洢��֧��double���顣 ����
		�����ʹ��array��Ļ���������ơ�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 18:31:25
    ˵��:
*********************************************************************/
//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
//const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct cost{
	double expenses[Seasons];
};

//void fill(std::array<double, Seasons> * pa);
//void show(std::array<double, Seasons> da);
//void fill(double arr[]);
//void show(double arr[]);
void fill(struct cost * ptr);  //�ṹ�巨  b��  
void show(struct cost * ptr);
int main()
{
//    std::array<double, 4> expenses;  //array ���� 
//    double expenses[Seasons];  //���鷽��  a�� 
//    fill(expenses);
//    show(expenses);

	cost * pexpenses = new cost;  //�ṹ�巨  b��  
    fill(pexpenses);  //�ṹ�巨  b��  
    show(pexpenses);
    // std::cin.get();
    // std::cin.get();
    delete pexpenses;
    return 0;
}

//void fill(std::array<double, Seasons> * pa)
//void fill(double arr[])
void fill(struct cost * ptr)  //�ṹ�巨  b��  
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> ptr->expenses[i];
    }
}

//void show(std::array<double, Seasons> da)
//void show(double arr[])
void show(struct cost * ptr)  //�ṹ�巨  b��  
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
//        std::cout << Snames[i] << ": $" << arr[i] << '\n';
//        total += arr[i];
        std::cout << Snames[i] << ": $" << ptr->expenses[i] << '\n';
        total += ptr->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}

