/*********************************************************************
    ������: 9�� �����ϰ������д��������ͽṹ�ĺ����� �����ǳ���Ŀ�
�ܣ� ���ṩ���������ĺ����� ����ɸó���
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/20-������ 10:50:21
    ˵��:
*********************************************************************/
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// ����������һ��������ʼԪ�ص�ָ�룬һ������ ��������ʵ��ѧ�������� 
int getinfo(student pa[], int n)
{
	int i=0;
	for(;i<n;++i)
	{
		cout << "����ѧ������Ϣ #" << i+1 << endl;
        cout << "����ȫ�� (�հ����˳���): ";
		cin.getline(pa[i].fullname,SLEN);
//		if(pa[i].fullname == '\n') break;
		cout << "���밮�� : ";
		cin.getline(pa[i].hobby,SLEN);
		cout << "�������� : ";
		cin>>pa[i].ooplevel;
		cin.get();
//		while (cin.get() != '\n')
//        	continue;
	}
	return i;
}

// һ������ ��ʾѧ��Ŀ¼ 
void display1(student st)
{
	cout<<"display1(ptr_stu[i]);\n";
	cout<<st.fullname<<" "<<st.hobby<<" "<<st.ooplevel<<endl;
}
void display2(const student *st)
{
	cout<<"display2(&ptr_stu[i]);\n";
	cout<<st->fullname<<" "<<st->hobby<<" "<<st->ooplevel<<endl;
}
void display3(const student pa[], int n)
{
	cout<<"display3(ptr_stu, entered);\n";
	for(int i=0;i<n;++i)
		cout<<pa[i].fullname<<" "<<pa[i].hobby<<" "<<pa[i].ooplevel<<endl;
}
void p7_9(void)
{
    cout << "����ѧ��������: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
//
    delete[] ptr_stu;
    cout << "Done.\n";
    return;
}
int main(void) {
	p7_9();
	return 0;
}
