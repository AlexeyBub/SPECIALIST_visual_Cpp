//Listing 2.1. ���� Point.h: ����������� ������ Point 

#ifndef POINT_H 
#define POINT_H 

class Point           //��������� �������� ������ Point  
{                     //������ �������� (�� ���������) ����� ������ 

private:              //������������ �������� ����� (������) ������ 

      int x_, y_;     //�����-������ (��������) ������ (������������� � 
                      //����� � ��� ����������� ������������ ���������) 

public:               //������������ �������� ����� - ���������� ������ 

//** 1 **����������� ��������� ������ 
//����������� ���� ������ ������� (������-���������) 
// Get...() � Set...() �������� ����������� ��������� ������ 

      int GetX()            //����-������� (�����) ��� ������ ���������� �_ 
      {                     //����������� ������ � ������ ������ ��������� ��� 
           return x_;       // ���������� (inline) (����� ����� ��������) 
      } 

      int GetY();           //��� �������� ������, � ��� ����������� ���������  
                            //����� ��, �� ����� �������� ������ (��� �����) 
      void SetX(int);       //����� ��� ��������� �������� ���������� �_, 
                            //����������� ��� � ���� ��������� ������� 
      void SetY(int);       //����������� � ����� ���������� Point.cpp 

}; 

//����������� ���������� ������� ������ ���� ������� ����������� � ����� 
//�� ������, �� ���� ������� ��� ����������� � ������������ �����. 
//����� �������-������, ������������ ��� ��������� ������, ������ ���� 
//��������� ��������������� (��������) ��� ������ ��������� ��������� :: 

inline int Point::GetY()          //����� inline ���� ��������� ���� 
{ 
      return y_; 
} 

#endif 