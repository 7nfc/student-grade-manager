#include"grade.h"
void sort(SCORE*head)
{
	SCORE*end=NULL;
	int i;
	if(head==NULL)
	{
		printf("list null!\n");
		return;
	}
	do
	{
		i=0;
		SCORE*p=head;
		SCORE*p1=NULL;
		while(p->next!=end)
		{
			SCORE*p2=p->next;//p2随着p向后遍历链表
			if(p->average<p2->average)//大的值在后时
			{
				if(p1==NULL)head=p2;//当第一个值就比后面的值小
				else p1->next=p2;//不是头指针指向的值小，改变p2、p1的指向，使p2指向大的
				p->next=p2->next;
				p2->next=p;
				i=1;//若链表本身就排序好了那么直接循环结束
				p1=p2;
			}
			else//大的值正好在前
			{
				p1=p;
				p=p->next;//向后遍历
			}
		}
		end=p;//用于结束内循环
	}while(i);
	show(head);
	infile(head);
}
