#include"grade.h"
#include<stdio.h>
int main()
{
	int a,flag=1;
	SCORE*head=NULL;
	head=input();
	infile(head);
	while(flag)
	{
		system("cls");
		printf("浏览全部信息-1\n");
		printf("查找信息-2\n");
		printf("删除信息-3\n");
		printf("修改信息-4\n");
		printf("成绩排序-5\n");
		printf("加载信息-6\n");
		printf("退出-0\n");
		printf("请输入选项：\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				show(head);
				break;
			case 2:
				search(head);
				break;
			case 3:
				del(head);
				break;
			case 4:
				change(head);
				break;
			case 5:
				sort(head);
				break;
			case 6:
				load(head);
				break;
			default:
				flag=0;
		}
	}
	return 0;
}
