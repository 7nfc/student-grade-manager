#ifndef GRADE_H
#define GRADE_H

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

//结构体定义
typedef struct score{
	int num;
	char name[30];
	float math;
	float english;
	float computer;
	float average;
	struct score*next;
}SCORE;

#define LEN sizeof(SCORE)

//函数声明
SCORE *input();
void infile(SCORE*head);
void  show(SCORE*head);
void search(SCORE*head);
void del(SCORE*head);
void change(SCORE*head);
void sort(SCORE*head);
void load(SCORE*head);
void save(SCORE*head,FILE*file);

#endif
