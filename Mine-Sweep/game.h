#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define rows 11
#define cols 11
#define Count 10

int menu();//�˵�����
void display(char show[rows][cols]);
int Game(char mine[rows][cols],char show[rows][cols]);//��Ϸ
void set_mine(char mine[rows][cols]);//�����׵�λ��
int Sweep(char mine[rows][cols], char show[rows][cols]);//��ʼɨ��
int get_num(char mine[rows][cols], int x, int y);//�����׵ĸ���

//int print_mine(char mine[rows][cols]);//��ʼ������
//int SHOW_mine(char show[rows ][cols]);//��ʼ����ʾ�׵ĸ���������
//int get_mine_num(int x, int y);
//void init_mine(char mine[rows][cols], char show[rows][cols]);

