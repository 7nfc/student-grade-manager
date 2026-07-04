#include"grade.h"
void show(SCORE*head)
{
	SCORE*p;
	p=head;
	while(p!=NULL)
	{
		printf("%6d%20s%10.2f%10.2f%10.2f%10.2f\n",p->num,p->name,p->math,p->english,p->computer,p->average);
		p=p->next;
	}
	system("pause");
}
