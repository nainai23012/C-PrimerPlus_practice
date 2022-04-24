/*********************************************************************
    ������: 7�� �޸ĳ����嵥7.7�е�3�����鴦������ ʹ֮ʹ������ָ���
	������ʾ���䡣 fill_array( )����������ʵ�ʶ�ȡ�˶��ٸ����֣� 
	���Ƿ���һ��ָ�룬 ��ָ��ָ���������λ�ã� �����ĺ������Խ���
	ָ����Ϊ�ڶ��������� �Ա�ʶ���ݽ�β��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/19-���ڶ� 17:59:26
    ˵��:
*********************************************************************/
#include <iostream>
const int Max = 5;

// function prototypes
//int fill_array(double ar[], int limit);
//int fill_array(double *begin, double *end);
//void show_array(const double ar[], int n);  // don't change data
//void revalue(double r, double ar[], int n);
double * fill_array(double *begin, double *end);  //���� ���Ԫ�ص�ָ�� 
void show_array(double *begin, double *end);
void revalue(double *begin, double *end,double r);

int main()
{
    using namespace std;
    double properties[Max];
	double *pend;
//    int size = fill_array(properties, properties + Max);
//    int size = fill_array(properties, &properties[Max]+1);
//    show_array(properties, size);
    pend = fill_array(properties, properties + Max);
    show_array(properties, pend);
    if ((pend-properties) > 0)
    {
        cout << "����һ��ϵ�� : ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "��Ч�������룬���������г���: ";
        }
//      revalue(factor, properties, size);
//      show_array(properties, size);
//		show_array(properties, properties + size);
        revalue(properties, pend,factor);
		show_array(properties, pend);
    }
    cout << "���.\n";
    // cin.get();
    // cin.get();
    return 0;
}

//int fill_array(double ar[], int limit)
//int fill_array(double *begin, double *end)
double * fill_array(double *begin, double *end)
{
    using namespace std;
    double temp;
    int count=0;
    double * ptr = nullptr;
    for(ptr = begin; ptr < end; ptr++)
    {
        cout << "����ֵ #" << (count + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "��Ч�������룬���������г���.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *ptr = temp;
        ++count;
    }
    return ptr;
}

// the following function can use, but not alter,
// the array whose address is ar
//void show_array(const double ar[], int n)
void show_array(double *begin, double *end)
{
    using namespace std;
    int i=0;
    for(double * ptr  = begin; ptr < end; ptr++,i++)
//    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *ptr << endl;
    }
}

// multiplies each element of ar[] by r
//void revalue(double r, double ar[], int n)
void revalue(double *begin, double *end,double r)
{
//    for (int i = 0; i < n; i++)
    for(double * ptr  = begin; ptr < end; ptr++)
        (*ptr) *= r;
//        ar[i] *= r;
}
