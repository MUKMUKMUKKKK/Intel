#include <iostream>

#define MIN(x,y)    (((x) > (y)) ? (y) : (x))
#define MAX(x,y)    (((x) < (y)) ? (y) : (x))

class Point
{
private:            //접근 지시자 (외부 참조 불가)         
    

public:             //접근 지시자 (외부 참조 가능)

    int x, y;    // 멤버 변수 선언, 객체의 좌표
    Point(int x1 = 0, int y1 = 0) //: x(x1 + 1),y(y1 + 1) <- initializer // 생성자 정의 , 멤버 변수와 아규먼트 변수는 다르게 선언
    {                                     // << 외부접근이 필수여야 한다 // 생성자는 리턴값이 없다.
        x = x1; y = y1;                  // 함수적 특성 (default, overload(동일한 이름의 함수지만 아규먼트(대입값)이다르다.) 등)
    }                                      
    double Dist(Point p)            //멤버 함수 : 두 점간의 거리 계산. double 값으로 return (w,h 의 제곱의 합(피타고라스 정리) 를 사용하면 두점과의 거리를 구할수 있음)
    {
        int w = x - p.x;
        int h = y - p.y;           

        return sqrt(w * w + h * h);          // 제곱값을 구하는 함수 (점과점의 거리 
                                             // sqrt 자체가 double형이기 때문에 컴파일시 문제가 되지않는다.
    }                                        // 컨트롤 + k 와 컨트롤 + c 를 입력시 자동으로 주석처리가 된다
    double Dist(Point p1, Point p2){          //두점(자신을 제외)간의 거리계산.            
        int w = p1.x - p2.x;
        int h = p1.y - p2.y;

        return sqrt(w * w + h * h);          
    }
};
class Rect
{
public:             // 접근 지시자 설정 , 클래스 멤버 변수 선언
    Point p11, p22; //클래스 변수 선언
    Point LL, LR, UL, UR;    // 초기화가 가능하다

    Rect(Point p1, Point p2)
    {
       /* int xl = MIN(p1.x, p2.x);       // 사각형 점 위치선언
        int xr = MAX(p1.x, p2.x);       // 로컬 변수로써 외부에서 사용 할 수 없음
        int yl = MIN(p1.y, p2.y);
        int yu = MAX(p1.y, p2.y);
        LL = Point(xl, yl);             //점 위치 설정
        LR = Point(xr, yl);
        UL = Point(xl, yu);
        UR = Point(xr, yu);*/
        p11 = p1; p22 = p2;             //사각형 꼭지점들의 정의
    }
    Point GetLL() {return Point (MIN (p11.x, p22.x), MIN (p11.y, p22.y));}
    Point GetLR() {return Point (MAX (p11.x, p22.x), MIN (p11.y, p22.y));}
    Point GetUR() {return Point (MIN (p11.x, p22.x), MAX (p11.y, p22.y));}
    Point GetUL() {return Point (MAX (p11.x, p22.x), MAX (p11.y, p22.y));}
};

void PrintP(Point p)
{
    printf("Point(%d, %d), p.x, p.y");

}

int main()
{
    Point p1, p2(10, 10), p3(20, 30), p4; // p1은 기본좌표 (0.0)이다 
    p4 = p3;
    double d = p1.Dist(p2);
    double d1 = p2.Dist(p3);
    double d2 = p1.Dist(p2, p3);

    PrintP(p1);     PrintP(p2);         PrintP(p3);
    PrintP(p4);
    printf("점간의 거리계산 : \nd(p1,p2) = %.2f  d1(p2,p3) = %.2f  d2(p2,p3) = %.2f", d, d1, d2);
    
    Rect r(p2, p3);
    printf("두 점\n");
    PrintP(p2);
    PrintP(p3);
    printf("에 의해 정의된 사각형의 꼭지점의 좌표는\n");
    PrintP(r.GetLL());
    PrintP(r.GetLR());
    PrintP(r.GetUL());
    PrintP(r.GetUR());
    return 0;
}


