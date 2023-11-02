#include <iostream>
#include "Point.h"

#define MIN(x,y)    (((x) > (y)) ? (y) : (x))
#define MAX(x,y)    (((x) < (y)) ? (y) : (x))


    double Dist(Point p1, Point p2){          //두점(자신을 제외)간의 거리계산.            
        int w = p1.x - p2.x;
        int h = p1.y - p2.y;

        return sqrt(w * w + h * h);          
    }

class Rect
{
public:             // 접근 지시자 설정 , 클래스 멤버 변수 선언
    Point p11, p22; //클래스 변수 선언
    Point LL, LR, UL, UR;    // 초기화가 가능하다
};
//    Rect(Point p1, Point p2)
//    {
//    //   /* int xl = MIN(p1.x, p2.x);       // 사각형 점 위치선언
//    //    int xr = MAX(p1.x, p2.x);       // 로컬 변수로써 외부에서 사용 할 수 없음
//    //    int yl = MIN(p1.y, p2.y);
//    //    int yu = MAX(p1.y, p2.y);
//    //    LL = Point(xl, yl);             //점 위치 설정
//    //    LR = Point(xr, yl);
//    //    UL = Point(xl, yu);
//    //    UR = Point(xr, yu);*/
//    //    p11 = p1; p22 = p2;             //사각형 꼭지점들의 정의
//    //}
//    //Point GetLL() {return Point (MIN (p11.x, p22.x), MIN (p11.y, p22.y));}
//    //Point GetLR() {return Point (MAX (p11.x, p22.x), MIN (p11.y, p22.y));}
//    //Point GetUR() {return Point (MIN (p11.x, p22.x), MAX (p11.y, p22.y));}
//    //Point GetUL() {return Point (MAX (p11.x, p22.x), MAX (p11.y, p22.y));}
//
//
//
//
//};
void swap_v(int a, int b) //call- by -value
{
    int temp(a);
    printf("[swap]초기값 a = %d  b = %d\n", a, b);
    a = b;  b = temp;
    printf("[swap]결과값 a = %d  b = %d\n", a, b);
}
void swap_p(int *a, int *b) //call - by -refrerence   , 고전적인 c언어 방식
{   
    int temp(*a); //주소의 값
    printf("[swap]초기값 a = %d  b = %d\n", *a, *b);
    *a = *b;  *b = temp;
    printf("[swap]결과값 a = %d  b = %d\n", *a, *b);
}
void swap_r(int &a, int &b) //call - by -refrerence   , 고전적인 c언어 방식
{
    int temp(a); //주소의 값
    printf("[swap_r]초기값 a = %d  b = %d\n", a, b);
    a = b;  b = temp;
    printf("[swap_r]결과값 a = %d  b = %d\n", a, b);
}



int main()
{
//{
//    Point p1, p2(10, 10), p3(20, 30), p4; // p1은 기본좌표 (0.0)이다 
//    p4 = p3;
//    double d = p1.Dist(p2);
//    double d1 = p2.Dist(p3);
//    double d2 = p1.Dist(p2, p3);
//
//    PrintP(p1);     PrintP(p2);         PrintP(p3);
//    PrintP(p4);
//    printf("점간의 거리계산 : \nd(p1,p2) = %.2f  d1(p2,p3) = %.2f  d2(p2,p3) = %.2f", d, d1, d2);

    Point arr[3]; // 객체 배열 : 3개의 point 클래스 객체가 default 초기화 됨.
    arr[0].SetP(10, 10); PrintP(arr[0]);
    arr[1].SetP(20, 30); PrintP(arr[1]);
    arr[2].SetP(40, 60); PrintP(arr[2]);
    printf("Class Point 객체 크기 : %d\n", sizeof(arr));
    point* parr[3];
    printf("Point 객체 포인터 배열 크기 : %d\n", sizeof(parr));
    Parr[0]->SetP(10, 10); PrintP(*Parr[0]);

    char* Name[10];
    

    printf("Class Pint 객체 크기 : %d\n", sizeof(Point))
    Point* Parr[3];
    printf("Point 객체 포인터 배열 크기 : %d\n", sizeof(parr));
    Parr[0]->SetP(10, 10); PrintP(*parr[0]);
    Parr[1]

    //Rect r(p2, p3);
    //printf("두 점\n");
    //PrintP(p2);
    //PrintP(p3);
    //printf("에 의해 정의된 사각형의 꼭지점의 좌표는\n");
    //PrintP(r.GetLL());
    //PrintP(r.GetLR());
    //PrintP(r.GetUL());
    //PrintP(r.GetUR());                             //상수 영역에 있는 변수
                          // 마찬가지

    // const 가 붙으면 상수화가 되여 변수를 입력하실 컴파일 오류

    //int a(10), b(20);
    //printf("초기값 a = %d , b = %d\n", a, b);
    //swap_r(a, b); // 변수의 주소 &a , &b
    //printf("결과값 a = %d , b = %d\n", a, b);

    //int n = 1234, n1 = 1000;
    //int& m = n; // 다른 변수의 이름을 입력하여 레퍼런스 초기화
    //printf("[레퍼런스 변수 테스트] n = %d, m = %d\n", n, m);
    //m = n1;
    //m = 5678;
    //printf("[레퍼런스 변수 테스트] n = %d, m = %d\n", n, m); // 레퍼런스의 값을 변경하니 N값도 변경이 된다
    //                                                         // 레퍼런스는 벨류와 포인터의 중간지점이다, 값도 변경이 가능하고 포인터처럼 주소불러오기도 가능하지만 포인터처럼 그값만 바뀌는게아니라 모든값이 바뀐다
    




    return 0;
}