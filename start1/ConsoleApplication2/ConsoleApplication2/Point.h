#pragma once
class Point
{
private:            //���� ������ (�ܺ� ���� �Ұ�)         


public:             //���� ������ (�ܺ� ���� ����)

    int x, y;    // ��� ���� ����, ��ü�� ��ǥ
    Point(int x = 0, int y = 0) : x(x), y(y) // <- initializer // ������ ���� , ��� ������ �ƱԸ�Ʈ ������ �ٸ��� ����
    {                                     // << �ܺ������� �ʼ����� �Ѵ� // �����ڴ� ���ϰ��� ����.
        //x = x1; y = y1;                  // �Լ��� Ư�� (default, overload(������ �̸��� �Լ����� �ƱԸ�Ʈ(���԰�)�̴ٸ���.) ��)
    }
    void SetP(int x1 = 0, int y1 = 0) { x = x1; y = y1; }

    //double Dist(Point p)            //��� �Լ� : �� ������ �Ÿ� ���. double ������ return (w,h �� ������ ��(��Ÿ���� ����) �� ����ϸ� �������� �Ÿ��� ���Ҽ� ����)
    //{
    //    int w = x - p.x;
    //    int h = y - p.y;           

    //    return sqrt(w * w + h * h);          // �������� ���ϴ� �Լ� (�������� �Ÿ� 
                                             // sqrt ��ü�� double���̱� ������ �����Ͻ� ������ �����ʴ´�.
};                                       // ��Ʈ�� + k �� ��Ʈ�� + c �� �Է½� �ڵ����� �ּ�ó���� �ȴ�