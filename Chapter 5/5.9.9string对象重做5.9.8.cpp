/*********************************************************************
    ������: 9�� ��дһ������ǰһ����ϰ�������ĳ��� ��ʹ��string�������
	���ַ����顣 ���ڳ����а���ͷ�ļ�string�� ��ʹ�ù�ϵ�����������
	�Ƚϲ��ԡ�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/14-������ 13:41:08
    ˵��:
*********************************************************************/
#include <iostream>
//#include <cstring> 
int main(void) {
	using namespace std;
	unsigned int n_word=0,nulspace = 0;
//    char input[128];
    string input;
    cout<<"����һ�λ���ͳ���û������˶��ٸ�����	����doneΪֹ�� "<<endl;
    while (cin >> input)
    {
//        if (strcmp(input, "done"))
        if (input!="done")
        {
            n_word++;
        }
        else
            break;
    }
    cout << "�������� " << n_word << " ������." << endl;
	return 0;
}
