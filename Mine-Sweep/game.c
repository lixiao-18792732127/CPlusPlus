#include"game.h"

//�˵�����
int menu()
{
	printf("********************************************\n");
	printf("********************************************\n");
	printf("*************welcome  to saolei*************\n");
	printf("*************   1.      play   *************\n");
	printf("*************   0.      exit   *************\n");
	printf("********************************************\n");
	printf("********************************************\n");
	return 0;
}


//�����׵�λ��
void set_mine(char mine[rows][cols])
{
	int count = Count;
	int x = 0;
	int y = 0;
	srand((unsigned)time(NULL));
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//��ӡ����������ʾ�Ľ���
void display(char show[rows][cols])  
{
	int i = 0;
	int j = 0;
	printf(" ");
	for (i = 1; i < cols - 1; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf("%d", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf(" %c ", show[i][j]);
		}
		printf("\n");
	}
}

//�����׵ĸ���
int get_num(char mine[rows][cols], int x, int y)
{
	int count = 0;
	if (mine[x - 1][y - 1] == '1')//���Ϸ�
	{
		count++;
	}
	if (mine[x - 1][y] == '1')//���
	{
		count++;
	}
	if (mine[x - 1][y + 1] == '1')//���·�
	{
		count++;
	}
	if (mine[x][y - 1] == '1')//�Ϸ�
	{
		count++;
	}
	if (mine[x][y + 1] == '1')//�·�
	{
		count++;
	}
	if (mine[x + 1][y - 1] == '1')//���Ϸ�
	{
		count++;
	}
	if (mine[x + 1][y] == '1')//�ҷ�
	{
		count++;
	}
	if (mine[x + 1][y + 1] == '1')//���·�
	{
		count++;
	}
	return  count;
}
//ɨ��
int Sweep(char mine[rows][cols], char show[rows][cols])
{
	int count = 0;
	int x = 0;
	int y = 0;
	while (count!=((rows-2)*(cols-2)-Count))
	{
		printf("���������꣺\n");
		scanf("%d%d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("��ȵ����ˣ�\n");
			return 0;
		}
		else
		{
			int ret = get_num(mine, x, y);
			show[x][y] = ret + '0';
			//set_mine(mine);
			display(show);
			count++;
		}
	}
	printf("��ϲ��Ӯ�ˣ�\n");
	display(mine);
	return 0;
}


//��Ϸ
int Game(char mine[rows][cols],char show[rows][cols])
{
	set_mine(mine);
	display(show);
	//display(mine);
	Sweep(mine,show);
	return 0;
}



////��ʼ����ʾ�׵ĸ���������
//int show_mine(char *show[rows][cols])
//{
//
//	}
//	return 0;
//}
////��ʼ����ӡ����
//int print_mine(char mine[rows][cols])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows - 1; i++)
//	{
//		for (j = 0; j < cols - 1; j++)
//		{
//			mine[i][j] = '*';
//		}
//	}
//	return 0;
//}

//��ʼ��ɨ�׽���
//void init_mine(char mine[rows][cols], char show[rows][cols]) 
//{
//	memset(mine, '0', rows*cols*sizeof(char));
//	memset(show, '*', rows*cols*sizeof(char));
//	set_mine(mine);
//}