#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>
#include <time.h>

void Task1()
{
	int x = 1 + rand() % 5;
	int y = 1 + rand() % 5;
	printf("��������� ����� x=%d � y=%d \n", x, y);

	if ((pow(x, 2) - pow(y, 2)) > (abs(pow(x - y, 2))))
	{
		printf("�������� ��������� ������ ������ �������� �������� ����� \n");
	}
	printf("�������� ��������� ������ ������ �������� �������� ����� \n");
}

void Task2()
{
	int d, s;
	printf("������� �������: ");
	scanf_s("%d", &d);
	printf("������� ������: ");
	scanf_s("%d", &s);

	if (d > 0 && s > 0)
	{
		printf("��������� ���������� � ���-�������� ��������� \n");
	}
	if (d > 0 && s < 0)
	{
		printf("��������� ���������� � ������-�������� ��������� \n");
	}

	if (d < 0 && s > 0)
	{
		printf("��������� ���������� � ���-��������� ��������� \n");
	}
	if (d < 0 && s < 0)
	{
		printf("��������� ���������� � ������-��������� ��������� \n");
	}
}


void Task3()
{
	int day, talk, cost = 20;

	printf("������� ���� ������ �� 1 �� 7 : ");
	scanf_s("%d", &day);

	printf("������� ����������������� ���������� : ");
	scanf_s("%d", &talk);

	if (day == 6)
	{
		printf("��������� ���������� � �� �� ������� 20 ��������� ���������� %0.2f \n", float(talk*(cost-(cost*0.2))));
	}
	if (day == 7)
	{
		printf("��������� ���������� � �� �� ������� 20 ��������� ���������� %0.2f \n", float(talk*(cost - (cost*0.2))));
	}
	if (day < 6)
	{
		printf("��������� ���������� c �� �� �� ���������� %d \n", talk*cost);
	}
	
}

void Task4()
{
	int cost;
	printf("������� ��������� �������: ");
	scanf_s("%d", &cost);

	if (cost > 500 && cost < 1000)
	{
		printf("����� ����� ������� 500 < %d < 1000, ��� ��������������� ������ 5 ��������� \n\n � ������ %0.2f \n", cost, float(cost - (cost*0.05)));
	}
	else if (cost > 1000)
	{
		printf("����� ����� ������� %d > 1000, ��� ��������������� ������ 10 ��������� \n\n � ������ %0.2f \n", cost, float(cost - (cost*0.1)));
	}
	else
	{

	}
}

void Task5()
{
	int month;
	printf("������� ����� ������ �� ������� : ");
	scanf_s("%d", &month);

	if (month > 12 || month == 0)
	{
		printf("������ ������ �� ���������� �� ����� 12 \n");
	}
		else if (month == 1 || month == 2 || month ==12)
		{
			printf("����� %d ��������� � ���� \n", month);
		}
		else if (month >= 3 && month <= 5)
		{
			printf("����� %d ��������� � ����� \n", month);
		}
		else if (month >= 6 && month <= 8)
		{
			printf("����� %d ��������� � ���� \n", month);
		}
		else if (month >= 9 && month <= 11)
		{
			printf("����� %d ��������� � ����� \n", month);
		}
	
}

void Task5()

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));


	int task;
	int flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {Task1(); } break;
	case 2: {Task2(); } break;
	case 3: {Task3(); }	break;
	case 4: {Task4(); }	break;
	case 5: {Task5(); }	break;

	default:
		break;
	}

	{
		printf("������ ���������� 1/0 \n");
		scanf_s("%d", &flag);
		if (flag == 1)
			goto start;

		system("pause");
	}

}
