/*********************************************************************
    ������: 8�� ��дһ������ ����һ���ļ��ļ��� ����ַ��ض�ȡ����
		���� ֱ�������ļ�ĩβ�� Ȼ��ָ�����ļ��а������ٸ��ַ���
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/16-������ 10:52:36
    ˵��:
*********************************************************************/
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
//    cout << "Enter name of data file: ";
//    char filename[SIZE];
//    cin.getline(filename, SIZE);
	char filename[] = "sometext.txt";
    ifstream inFile;        // ����������� 

    inFile.open(filename);  // �������� 
    if (!inFile.is_open())  // �ж��Ƿ�·����Ч 
    {
        cout << "�޷����ļ��� " << filename << endl;
        cout << "������ֹ��\n";
        exit(EXIT_FAILURE);
    }
	char str;  //�����Ǵ�ӡ�ַ�   ÿ���ַ� 
//	char str[SIZE];  //�����Ǵ�ӡ�ַ�  ÿ������ 
    int count = 0;          // ����

    inFile >> str;        // ��ȡ��һ��Ԫ�� 
    while (inFile.good())   // while input good and not at EOF
                            //�����������Ҳ���EOFʱ
    {
        ++count;            // ����
        inFile >> str;    // ��ȡ��һ��Ԫ�� 
    }
    if (inFile.eof())
        cout << "�ѵ����ļ���β.\n";
    else if (inFile.fail())
        cout << "���������ݲ�ƥ�����ֹ.\n";
    else
        cout << "������δ֪ԭ����ֹ.\n";
    cout<<"*****************************\n";
    if (count == 0)
        cout << "û�����ݴ���.\n";
    else
    {
        cout << "���ƶ�ȡ�ַ�: " << count << endl;
    }
    inFile.close();         // �ر��ļ����� 
    return 0;
}
