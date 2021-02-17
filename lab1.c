#include <stdio.h>//підключення бібліотек
#include<math.h>
int main() {
    float x1, x2, x3, y1, y2, y3, p, s; //Оголошуємо змінні
    
    printf("Введіть координати першої точки:\n"); //Введення чисел
    printf("Введіть x1: ");
    scanf("%f", &x1); //Введення даних
    
    printf("Введіть y1: ");
    scanf("%f", &y1);

    printf ("\n Введіть координати другої точки:\n");
    printf("Введіть x2: ");
    scanf("%f", &x2);
    
    printf("Введіть y2: ");
    scanf("%f", &y2);
    
    printf("\n Введіть координати третьої точки: \n");
    printf("Введіть x3: ");
    scanf("%f", &x3);
    
    printf("Введіть y3: ");
    scanf("%f", &y3);
    
    float ab = sqrt (pow (x2 - x1, 2) + pow(y2 - y1, 2));
    float bc = sqrt (pow (x3 - x1, 2) + pow(y3 - y2, 2));
    float ac = sqrt (pow (x3 - x1, 2) + pow(y3 - y1, 2));
    p = ab + ac + bc;
    float pp = p / 2;
    s = sqrt (pp * (pp - ac) * (pp - bc) * (pp - ab));
    
    printf("\n***Результат***\n");
    
    printf("\n Сторона AB = %2.f\n", ab );
    printf("Сторона AC = %2.f\n", ac );
    printf("Сторона BC = %2.f\n", bc );
    
    printf("\n Площа S = %2.f \n", s);
    printf("Периметр P = %2.f", p);
    
    return 0;
  }
