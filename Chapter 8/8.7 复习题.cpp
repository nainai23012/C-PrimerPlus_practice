/*********************************************************************
    ������:8.7 ��ϰ��
    ��Ȩ:
    ����: ��Ұ��
    ����: 2022/4/23-������ 10:41:35
    ˵��:
*********************************************************************/
#include <iostream>
int main(void) {
	using namespace std;
	return 0;
}

8.7 ��ϰ��
1�� ���ֺ����ʺ϶���Ϊ����������
	�𣺷������ã��̴��룬�ǵݹ顣 

2�� ����song( )������ԭ�����£�
	void song(const char * name, int times); 
a�� ����޸�ԭ�ͣ� ʹtimes��Ĭ��ֵΪ1��
	void song(const char * name, int times=1); 
b�� ����������Ҫ����Щ�޸ģ�                
	��;�����޸� 
c�� �ܷ�Ϊname�ṩĬ��ֵ��O. My Papa����
	void song(int times, const char * name="O. My Papa"); 

3�� ��дiquote( )�����ذ汾������ʾ����˫��������Ĳ����� ��д
3���汾�� һ������int������ һ������double������ ��һ������string��
����
	iquote(int x);
	iquote(double x);
	iquote(string x);
	
4�� ������һ���ṹģ�壺
	struct box{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};
a�� ���дһ�������� ����box�ṹ��������Ϊ�βΣ� ����ʾÿ����
Ա��ֵ��
	void fun1(const box & box1)
	{
		cout<<box1.maker<<endl;
		cout<<box1.height<<endl;
		cout<<box1.width<<endl;
		cout<<box1.length<<endl;
		cout<<box1.volume<<endl;
	}
b�� ���дһ�������� ����box�ṹ��������Ϊ�βΣ� ����volume��
Ա����Ϊ����3�ߵĳ˻���
		void fun2(box & box1)
	{
		box1.volume = box1.height * box1.width * box1.length
	}
	
5�� Ϊ�ú���fill()��show()ʹ�����ò����� ��Ҫ�Գ����嵥7.15����
Щ�޸ģ�
void fill(std::array<double, Seasons> * pa);  //ԭ���� 
void fill(std::array<double, Seasons> & pa);  //��Ϊ���� 


void show(std::array<double, Seasons> da); //ԭ���� 
void show(const std::array<double, Seasons> & da); //��Ϊ���� 

6�� ָ������ÿ��Ŀ���Ƿ����ʹ��Ĭ�ϲ�������������ɣ� ��
�������ַ������޷���ɣ� ���ṩ���ʵ�ԭ�͡�
a�� mass(density, volume)�����ܶ�Ϊdensity�� ���Ϊvolume������
�������� ��mass(denstity)�����ܶ�Ϊdensity�� ���Ϊ1.0�����׵������
������ ��Щֵ�����Ͷ�Ϊdouble��
	double mass(double density,double volume=1.0):
	 
b�� repeat(10, ��I'm OK��)��ָ�����ַ�����ʾ10�Σ� ��repeat(��But
you're kind of stupid��)��ָ�����ַ�����ʾ5�Ρ�
	void repeat(int n , const char * ar);
	void repeat(const char * ar , int n=5);
	
c�� average(3, 6)��������int������ƽ��ֵ��int���ͣ� �� ��
average(3.0, 6.0)��������doubleֵ��ƽ��ֵ��double���ͣ� ��
	int average(int x,int y);
	double average(double x,double y);

d�� mangle(��I'm glad to meet you��)�����ǽ�ֵ����char��������char*
������ �ֱ𷵻��ַ�I��ָ���ַ�����I'm mad to gleet you����ָ�롣
	�𣺲��� ����ֵ��ͬ��
	 
7�� ��д�������������нϴ�ֵ�ĺ���ģ�塣
	template <typename T>
	T lage(const T x,const T y)
	{
		return x>y?x:y;
	}
	
8�� ������ϰ��6��ģ��͸�ϰ��4��box�ṹ�� �ṩһ��ģ�����
���� ����������box������ ����������ϴ��һ����
	template<>box max(box b1,box b2)
	{
		return b1.volume>b2.volume?b1:b2;
	 } 

9�� ���������루�ٶ���Щ������һ�����������һ���֣� �У�
v1�� v2�� v3�� v4��v5�ֱ����������ͣ�
	int g(int x);
	...
	float m=5.5f;
	float & rm = m;
	defltype(m) v1=m;  float
	defltype(rm) v2=m;  float &
	defltype((m)) v3=m;  float &
	defltype(g(100)) v4;  int
	defltype(2.0 * m) v5;  double  2.0Ϊdouble���� 








 
