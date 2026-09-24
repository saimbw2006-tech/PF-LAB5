#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2,p,q;
    printf("enter a b c:");
		scanf("%lf", &a);
		scanf("%lf", &b);
		scanf("%lf", &c);
    if (a == 0){
    	if(b!=0)
    	printf("linear root: x= %.2f, -c / b");
    	else
    	printf("not a valid equation");
    }
    else
    {
    	d = b*b - 4*a*c;
    	if (d>0){
    		x1 = ((-b + sqrt(d))/2*a);
    		x2 = ((-b - sqrt(d))/2*a);
    		printf("two real roots: x1=%.2f, x2 = %.2f",x1,x2);
    	}
    	else if (d==0)
    	printf("one repeated root: x=%.2f", -b/(2*a));
    	else{
    		p = -b/(2*a);
    		q = sqrt(fabs(d))/(2*a);
    		printf("complex roots: %2.f + %.2fi and %2.f - %2.fi",p,q,p,q);
}
}
}

		
	
	
