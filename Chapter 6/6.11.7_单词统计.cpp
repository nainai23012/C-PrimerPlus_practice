/*********************************************************************
    ������: 7�� ��дһ������ ��ÿ�ζ�ȡһ�����ʣ� ֱ���û�ֻ����q�� Ȼ
	�� �ó���ָ���ж��ٸ�������Ԫ����ͷ�� �ж��ٸ������Ը�����ͷ��
	���ж��ٸ����ʲ����������ࡣ Ϊ�ˣ� ����֮һ�ǣ� ʹ��isalpha( )����
	������ĸ�������ַ���ͷ�ĵ��ʣ� Ȼ�����ͨ����isalpha( )���Եĵ�
	�ʣ� ʹ��if��switch�����ȷ����Щ��Ԫ����ͷ�� �ó�������������
	�£�
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/16-������ 10:00:02
    ˵��:
*********************************************************************/
#include <iostream>
#include <cstring> 
int main(void) {
	using namespace std;
	unsigned int y_word=0,f_word=0,n_word=0;  // Ԫ�� ���� ���� ���ʵ����� 
    char input[128];
    cout<<"����һ�λ���ͳ���û������˶��ٸ�����	����q|QΪֹ�� "<<endl;
    while (cin >> input)
    {
        if (!(strcmp(input, "q")) || !(strcmp(input, "Q")))
        {
            break;
        }
        else
        {
        	char temp = input[0];
        	if(isalpha(temp)) //������ַ�����ĸ������ 
        	{
        		switch(temp)
	        	{
	        		case 'a':
	        		case 'e':
	        		case 'i':
	        		case 'o':
	        		case 'u':
	        		case 'A':
	        		case 'E':
	        		case 'I':
	        		case 'O':
	        		case 'U':
	        			++y_word;break;  //Ԫ������ 
	       			default:
	        			++f_word;
				} 
			}
			else  //����ĸ��ͷ����ͳ�� 
			{
				++n_word;
			} 

		}		
    }
    cout << "Ԫ�� ���� �������ʵ������ֱ��ǣ� " << y_word << " �� " << f_word << " �� " <<n_word << endl;
	return 0;
}
