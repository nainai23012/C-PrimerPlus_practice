/*********************************************************************
    ������:2�� �޸ĳ����嵥9.9�� ��string��������ַ����顣 ������ �ó���
	������Ҫ���������ַ����Ƿ������ ͬʱ���Խ������ַ���ͬ�ַ�
	���������бȽϣ� ���ж��Ƿ�Ϊ���С�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/26-���ڶ� 16:50:41
    ˵��:
*********************************************************************/
#include <iostream>
#include <string> 
#include <cstring>

// static.cpp -- using a static local variable
#include <iostream>
using std::string;
// constants
const int ArSize = 10;

// function prototype
//void strcount(const char * str);
void strcount(const string & str);

int main()
{
    using namespace std;
//    char input[ArSize];
    string input;
    char next;

    cout << "Enter a line:\n";
//    cin.get(input, ArSize);
    getline(cin, input);
    while (cin)
    {
//        cin.get(next);
//        while (next != '\n')    // string didn't fit!
//            cin.get(next);      // dispose of remainder
//		while (cin.get(next) && next != '\n')
//			;
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
//        cin.get(input, ArSize);
        getline(cin, input);
        if(input=="")
        	break;
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

//void strcount(const char * str)
void strcount(const string & str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
//    while (*str++)               // go to end of string
//        count++;
	count = str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
