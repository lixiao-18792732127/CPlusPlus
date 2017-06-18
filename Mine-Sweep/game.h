#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define rows 11
#define cols 11
#define Count 10

int menu();//菜单函数
void display(char show[rows][cols]);
int Game(char mine[rows][cols],char show[rows][cols]);//游戏
void set_mine(char mine[rows][cols]);//设置雷的位置
int Sweep(char mine[rows][cols], char show[rows][cols]);//开始扫雷
int get_num(char mine[rows][cols], int x, int y);//计算雷的个数

//int print_mine(char mine[rows][cols]);//初始化雷阵
//int SHOW_mine(char show[rows ][cols]);//初始化显示雷的个数的雷阵
//int get_mine_num(int x, int y);
//void init_mine(char mine[rows][cols], char show[rows][cols]);

