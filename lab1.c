#include <stdio.h>//���������� �������
#include<math.h>
int main() {
    float x1, x2, x3, y1, y2, y3, p, s; //��������� ����
    
    printf("������ ���������� ����� �����:\n"); //�������� �����
    printf("������ x1: ");
    scanf("%f", &x1); //�������� �����
    
    printf("������ y1: ");
    scanf("%f", &y1);

    printf ("\n ������ ���������� ����� �����:\n");
    printf("������ x2: ");
    scanf("%f", &x2);
    
    printf("������ y2: ");
    scanf("%f", &y2);
    
    printf("\n ������ ���������� ������ �����: \n");
    printf("������ x3: ");
    scanf("%f", &x3);
    
    printf("������ y3: ");
    scanf("%f", &y3);
    
    float ab = sqrt (pow (x2 - x1, 2) + pow(y2 - y1, 2));
    float bc = sqrt (pow (x3 - x1, 2) + pow(y3 - y2, 2));
    float ac = sqrt (pow (x3 - x1, 2) + pow(y3 - y1, 2));
    p = ab + ac + bc;
    float pp = p / 2;
    s = sqrt (pp * (pp - ac) * (pp - bc) * (pp - ab));
    
    printf("\n***���������***\n");
    
    printf("\n ������� AB = %2.f\n", ab );
    printf("������� AC = %2.f\n", ac );
    printf("������� BC = %2.f\n", bc );
    
    printf("\n ����� S = %2.f \n", s);
    printf("�������� P = %2.f", p);
    
    return 0;
  }
