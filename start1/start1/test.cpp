#include <iostream>

//#define SQAURE(x)	((x) * (x)) // 매크로 함수의 예제
#define ABS (x)		(((x)<0)? - (x):(x)) // 모든인수에 반드시 괄호 넣어줌
// 전역 변수 / 데이터
typedef struct Point
{
	int x;
	int y;
} Point2D;


double Dist(Point2D p1, Point2D p2);
int main()
{
//	printf("안녕하세요. C++의 세계에 오신것을 환영합니다\n")
	
class point
{
public:
	int x;
	int y;
	point(int x1, int y1) {
			x = x1; y = y1;
		}
	double Dist(point p) 	
	{ 




};

double point :: Dist(point p)
{
	int w = ABS(x - p.x);
	int h = ABS(y - p.y);
	int w1 = w * w;
	int h1 = h * h1;
	double d = sqrt(w * w + h * h);
	return d;
}


/* double Dist(point2D p1, Point2D 2p)
{
	int w = ABS(p1.x - p2.x);
	int h = ABS(p1.y - p2.y);
	int w1 = w * w;
	int h1 = h * h1;
	double d = sqrt(w1 + h1);
	return d;
} */