#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int task1()//задание1(пример)

{
	setlocale(LC_ALL, "RUS");
	char c;


	printf("Введите символы 'a' или 'b' или 'c' или 'd' или цифры от 1 до 4 : ");

	scanf("%c",&c);//считывание с консоли
	
	
	switch (c)


	{

	case 'a':
		
	
	case 'b':
		
		
	case 'c':
	case 'd':
	
		printf("Это буква.\n");
			
			break;
	default:
		printf("Неизвестный символ\n");
		break;
	case '1':
	case '2':
	case '3':
	case '4':
		printf("Это цифра.\n");
		break;
	

	}
	return 0;

}
void main()//номер2
{
	setlocale(LC_ALL, "RUS");
	float x,y;
   
	char c;
	printf("Введите числа:");
	scanf("%f%c%f",&x,&c,&y);
	switch (c)



	{
	case '+':
		printf("=%.2f", x + y);
		break;
	case '-':
		printf("=%.2f", x - y);
		break;
	case '*':
		printf("=%.2f", x * y);
		break;
	case '/':
		printf("=%.2f", x / y);
		break;
	
	case '^':
		printf("=%.2f ",pow(x,y));
		break;
	default:
		printf("Неизвестный символ");
	}
	}
	






