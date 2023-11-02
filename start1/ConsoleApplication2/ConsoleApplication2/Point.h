#pragma once
class Point
{
private:            //접근 지시자 (외부 참조 불가)         


public:             //접근 지시자 (외부 참조 가능)

    int x, y;    // 멤버 변수 선언, 객체의 좌표
    Point(int x = 0, int y = 0) : x(x), y(y) // <- initializer // 생성자 정의 , 멤버 변수와 아규먼트 변수는 다르게 선언
    {                                     // << 외부접근이 필수여야 한다 // 생성자는 리턴값이 없다.
        //x = x1; y = y1;                  // 함수적 특성 (default, overload(동일한 이름의 함수지만 아규먼트(대입값)이다르다.) 등)
    }
    void SetP(int x1 = 0, int y1 = 0) { x = x1; y = y1; }

    //double Dist(Point p)            //멤버 함수 : 두 점간의 거리 계산. double 값으로 return (w,h 의 제곱의 합(피타고라스 정리) 를 사용하면 두점과의 거리를 구할수 있음)
    //{
    //    int w = x - p.x;
    //    int h = y - p.y;           

    //    return sqrt(w * w + h * h);          // 제곱값을 구하는 함수 (점과점의 거리 
                                             // sqrt 자체가 double형이기 때문에 컴파일시 문제가 되지않는다.
};                                       // 컨트롤 + k 와 컨트롤 + c 를 입력시 자동으로 주석처리가 된다
