#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>
#include <time.h>

void Task1()
{
	int x = 1 + rand() % 5;
	int y = 1 + rand() % 5;
	printf("—лучайные числа x=%d и y=%d \n", x, y);

	if ((pow(x, 2) - pow(y, 2)) > (abs(pow(x - y, 2))))
	{
		printf("разность квадратов больше модул€ квадрата разности чисел \n");
	}
	printf("разность квадратов меньше модул€ квадрата разности чисел \n");
}

void Task2()
{
	int d, s;
	printf("¬ведите долготу: ");
	scanf_s("%d", &d);
	printf("¬ведите широту: ");
	scanf_s("%d", &s);

	if (d > 0 && s > 0)
	{
		printf("¬веденные координаты в юго-западном полушарии \n");
	}
	if (d > 0 && s < 0)
	{
		printf("¬веденные координаты в северо-западном полушарии \n");
	}

	if (d < 0 && s > 0)
	{
		printf("¬веденные координаты в юго-восточном полушарии \n");
	}
	if (d < 0 && s < 0)
	{
		printf("¬веденные координаты в северо-восточном полушарии \n");
	}
}


void Task3()
{
	int day, talk, cost = 20;

	printf("¬ведите день недели от 1 до 7 : ");
	scanf_s("%d", &day);

	printf("¬ведите продолжительность разговоров : ");
	scanf_s("%d", &talk);

	if (day == 6)
	{
		printf("—тоимость разговоров в —б со скидкой 20 процентов составл€ет %0.2f \n", float(talk*(cost-(cost*0.2))));
	}
	if (day == 7)
	{
		printf("—тоимость разговоров в ¬с со скидкой 20 процентов составл€ет %0.2f \n", float(talk*(cost - (cost*0.2))));
	}
	if (day < 6)
	{
		printf("—тоимость разговоров c ѕн по ѕт составл€ет %d \n", talk*cost);
	}
	
}

void Task4()
{
	int cost;
	printf("¬ведите стоимость покупки: ");
	scanf_s("%d", &cost);

	if (cost > 500 && cost < 1000)
	{
		printf("—умма ¬ашей покупки 500 < %d < 1000, ¬ам предоставл€етс€ скидка 5 процентов \n\n к оплате %0.2f \n", cost, float(cost - (cost*0.05)));
	}
	else if (cost > 1000)
	{
		printf("—умма ¬ашей покупки %d > 1000, ¬ам предоставл€етс€ скидка 10 процентов \n\n к оплате %0.2f \n", cost, float(cost - (cost*0.1)));
	}
	else
	{

	}
}

void Task5()
{
	int month;
	printf("¬ведите номер мес€ца по пор€дку : ");
	scanf_s("%d", &month);

	if (month > 12 || month == 0)
	{
		printf("“акого мес€ца не существует их всего 12 \n");
	}
		else if (month == 1 || month == 2 || month ==12)
		{
			printf("ћес€ц %d относитс€ к зиме \n", month);
		}
		else if (month >= 3 && month <= 5)
		{
			printf("ћес€ц %d относитс€ к весне \n", month);
		}
		else if (month >= 6 && month <= 8)
		{
			printf("ћес€ц %d относитс€ к лету \n", month);
		}
		else if (month >= 9 && month <= 11)
		{
			printf("ћес€ц %d относитс€ к осени \n", month);
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

	printf("¬ведите номер задани€: ");
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
		printf("’отите продолжить 1/0 \n");
		scanf_s("%d", &flag);
		if (flag == 1)
			goto start;

		system("pause");
	}

}
