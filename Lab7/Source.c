#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int task1()//�������1(������)

{
	setlocale(LC_ALL, "RUS");
	char c;


	printf("������� ������� 'a' ��� 'b' ��� 'c' ��� 'd' ��� ����� �� 1 �� 4 : ");

	scanf("%c",&c);//���������� � �������
	
	
	switch (c)


	{

	case 'a':
		
	
	case 'b':
		
		
	case 'c':
	case 'd':
	
		printf("��� �����.\n");
			
			break;
	default:
		printf("����������� ������\n");
		break;
	case '1':
	case '2':
	case '3':
	case '4':
		printf("��� �����.\n");
		break;
	

	}
	return 0;

}
void main()//�����2
{
	setlocale(LC_ALL, "RUS");
	float x,y;
   
	char c;
	printf("������� �����:");
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
		printf("����������� ������");
	}
	}
	






