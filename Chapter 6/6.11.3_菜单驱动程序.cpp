/*********************************************************************
    ������: 3�� ��дһ���˵���������ĳ��Ρ� �ó�����ʾһ���ṩ4��ѡ���
		�˵�����ÿ��ѡ����һ����ĸ��ǡ� ����û�ʹ����Чѡ��֮�����ĸ
		������Ӧ�� ������ʾ�û�����һ����Ч����ĸ�� ֱ���û�������Ϊ
		ֹ�� Ȼ�� �ó���ʹ��һ��switch��䣬 
		�����û���ѡ��ִ��һ���򵥲����� �ó��������������£�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/15-������ 14:44:39
    ˵��:
*********************************************************************/
#include <iostream>
#include <cstdlib> // exit()
int main(void) {
	using namespace std;
	char choice;  //ѡ�� 
	bool flag = true;
	cout<<"��ѡ��˵�\n";
	cout<<"****** �˵� ******\n";
	cout<<"A:�µ�        B:����     \n";
	cout<<"C:����        D:����     \n";
	cout<<"Q:�˳�                   \n";
	while(flag && cin>>choice)
	{
		switch(choice)
		{
		case 'a':
		case 'A':
            cout << "�µϾ��Ǵ�˵�еġ��Ƴ���" << endl;
            break;	
		case 'b':
		case 'B':
            cout << "�����������ı���" << endl;
            break;
		case 'c':
		case 'C':
            cout << "���Ǽ�������" << endl;
            break;
		case 'd':
		case 'D':
            cout << "�����ǵ¹�Ʒ��." << endl;
            break;
		case 'q':
		case 'Q':
			cout << "��ӭ�´�������ѯ��" << endl;
            flag = false;
            break;
//            exit(EXIT_FAILURE);
        default:
            cout << "������������������!" << endl;
            cin.clear();     // reset input
            while (cin.get() != '\n')
                continue; 
		}
	}
	
	return 0;
}

