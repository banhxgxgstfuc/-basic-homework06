#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int y;
	printf("�п�J�@�Ӿ��:");
	scanf("%d",&y);
	if((y % 4==0)&&(y%100 !=0)||(y % 400==0))
	printf("%d�O�|�~",y);
	else
	printf("%d�O���~",y);
	return 0;
}
