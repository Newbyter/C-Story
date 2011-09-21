#include <stdio.h>

int main()
{
	// 2011-9-20 by jianru.lin@gmail.com
	printf("#1(jianru.lin): oh yeah~!\n");
	// your turn
	// ...
	printf("I don't know what to say!\n");
	printf("I think I need write something new!\n");
	int m,n,t=0;
	printf("please enter two nem:");
	scanf("%d,%d",&m,&n);
       if(m<n)
       {t=m;m=n;n=t}
       else
       {
　　    do
       {
　　    r=m%n;
　　    m=n;
　　    n=r;
　　   }while(r);
       }
　　printf("The GCD is %d !\n",m);
	return 0;
}
