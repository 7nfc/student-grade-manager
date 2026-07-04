#include"grade.h"
void load(SCORE*head)
{
	if(NULL==head)return;
	FILE*fp;
	SCORE*p=head;
	if((fp=fopen("grade.txt","r"))==NULL)
	{
		printf("打开文件失败\n");
		return;
	}
	
	while(p!=NULL)
	{
		SCORE*q=(SCORE*)malloc(LEN);
		int temp=fscanf(fp,"%d%s%f%f%f%f",&q->num,q->name,&q->math,&q->english,&q->computer,&q->average);
		if(temp==EOF)
		{
			free(q);
			break;
		}
		printf("%6d%20s%10.2f%10.2f%10.2f%10.2f\n",p->num,p->name,p->math,p->english,p->computer,p->average);
		p=p->next;

	}
	fclose(fp);
	system("pause");
}
