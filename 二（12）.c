/*
二、12请编写一个函数fun()，它的功能是：求一数列的值。数列如下所示，函数返回其值。
100   50      10
∑ k + ∑ k*k + ∑  1/k.
k=1   k=1    k=1
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include<stdio.h>
double fun()
{
	int i;
	double	t1=0,t2=0,t3=0,t;
	for(i=1;i<=100;i++)
		t1+=i;
	for(i=1;i<=50;i++)
		t2+=i*i;
	for(i=1;i<=10;i++)
		t3+=1.0/i;
	t=t1+t2+t3;
	return t;
}
	void main()
{
	FILE *wf;
	double y;
	y=fun();
	printf("数列值为%lf\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%lf",fun());
	fclose(wf);
	/*******************************/
}
