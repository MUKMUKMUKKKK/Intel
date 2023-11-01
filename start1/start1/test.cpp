#include <iostream>

//#define SQAURE(x)	((x) * (x)) // 매크로 함수의 예제
#define ABS (x)		(((x)<0)? - (x):(x)) // 모든인수에 반드시 괄호 넣어줌
// 전역 변수 / 데이터

//	printf("안녕하세요. C++의 세계에 오신것을 환영합니다\n")
	
class point
{
public:
	int x;
	int y;
	point(int x1 = 0, int y1 = 0) {		//디폴트값 설정
		x = x1; y = y1;
	}
	double Dist(point p);				//원형 선언
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
