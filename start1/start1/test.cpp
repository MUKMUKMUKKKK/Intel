#include <iostream>

//#define SQAURE(x)	((x) * (x)) // ��ũ�� �Լ��� ����
#define ABS (x)		(((x)<0)? - (x):(x)) // ����μ��� �ݵ�� ��ȣ �־���
// ���� ���� / ������

//	printf("�ȳ��ϼ���. C++�� ���迡 ���Ű��� ȯ���մϴ�\n")
	
class point
{
public:
	int x;
	int y;
	point(int x1 = 0, int y1 = 0) {		//����Ʈ�� ����
		x = x1; y = y1;
	}
	double Dist(point p);				//���� ����
	double Dist(int x1, int y1);
	double Dist(point p1, point p2);
}
	

double point::Dist(point p);
		{
			int w = (x - p.x);
			int h = (y - p.y);
			double d = sqrt(w * w + h * h);
			return d;
		}

		double point::Dist(int x1, int y1);
		{	
			int w = (x - p.x);
			int h = (y - p.y);
			double d = sqrt(w * w + h * h);
			return d;
		}
		double point::Dist(point p1, point p2)
		{
			int w = (p1.x - p2.x);
			int h = (p1.y - p2.y);



		}
