/*
二10、请编写一个函数fun()，它的功能是：进行素数判断。输入一个自然数n（n在2到10000之间），若n为素数，函数返回1，否则返回0。
（提示：只能被1和它本身整除的数为素数。）
例如，输入107 <CR>（<CR>为回车键），函数将返回1。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include"stdio.h"
int fun(int a)
{
	int i;
	for(i=2;i<=a/2;i++)
	if(a%i==0)
		break;
	if(i<=a/2)
		return 0;
	else
		return 1;
}
void main()
{
	FILE *wf;
	int a,flag;
	printf("请输入一个整数（2~10000）：");
	scanf("%d",&a);
	flag=fun(a);
	if (flag==0)
		printf("%d不是素数\n",a);
	else
		printf("%d是素数\n",a);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(109));
	fprintf (wf,"%d ",fun(1209));
	fprintf (wf,"%d",fun(9987));
	fclose(wf);
	/*******************************/
}
