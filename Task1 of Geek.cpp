#include <stdio.h>

int main(void)
{
	double h=0.01,a,f=1.0;
	int n,t;
	
	scanf("%lf",&a);
	scanf("%d",&n);
	a=2,n=3;
	t=n;
	
	while(n>0){
		f*=(1.0-h+h*h/2.0);
		n--;
	}
	f*=a;
	
	printf("y(%d)=%f",t,f);
	
	return 0;
}
