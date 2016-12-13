/*二8、请编写一个函数fun()，它的功能是：求自然数的阶乘之积。输入一个自然数n（n在1到10之间），函数返回“1！*2！*…*n！”的值。
例如，输入10 <CR>（<CR>为回车键），函数将返回6658606584104736800000000000.000000。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include"stdio.h"
double fun(int a)
{
	int i;
	double s=1,n=1;
	for(i=1;i<=a;i++)
	{
		n=n*i;
		s=s*n;
	}
	return s;
}
void main()
{
	FILE *wf;
	int a;
	double b;
	printf("请输入一个不超过20的自然数：");
	scanf("%d",&a);
	b=fun(a);
	printf("阶乘之和为：%lf\n",b);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%lf ",fun(20));
	fprintf (wf,"%lf ",fun(18));
	fprintf (wf,"%lf",fun(9));
	fclose(wf);
	/*******************************/
}
