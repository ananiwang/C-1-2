/*
二11、请编写一个函数fun()，它的功能是：统计水仙花数的个数。输入一个自然数n（n在100到999之间），函数返回100到n之间水仙花数的个数（包含n）。
（提示：水仙花数是一个三位数，且各位数字的立方和与该三位数相同。）
例如，输入200 <CR>（<CR>为回车键），函数将返回1；输入999 <CR>（<CR>为回车键），函数将返回4。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include"stdio.h"
int fun(int m)
{
	int a,b,c,i,count=0;
	for(i=100;i<=m;i++)
	{
		c=i%10;			  /*c为个位*/
		b=i/10 %10;		  /*b为十位*/
		a=i/100;		  /*c为百位*/
		if(a*a*a+b*b*b+c*c*c==i)
			count++;
	}
	return count;
}
void main()
{
	FILE *wf;
	int m,count;
	printf("请输入一个三位数（100~999）：");
	scanf("%d",&m);
	count=fun(m);
	printf("水仙花个数为%d\n",count);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(370));
	fprintf (wf,"%d ",fun(400));
	fprintf (wf,"%d",fun(200));
	fclose(wf);
	/*******************************/
}
