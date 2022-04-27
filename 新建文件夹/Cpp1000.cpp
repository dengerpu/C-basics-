#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	for(a=0;a<=1;a++)
		for(b=0;b<=1;b++)
			for(c=0;c<=1;c++)
				for(d=0;d<=1;d++)
					for(e=1;e<=1;e++)
					{
						if(a+b==2&&b+c==1&&(c+d==2||c+d==0)&&d+e==1)
							if(e==1)
								a+d==2;
					}
						for(a=0;a<=1;a++)
		for(b=0;b<=1;b++)
			for(c=0;c<=1;c++)
				for(d=0;d<=1;d++)
					for(e=1;e<=1;e++)
					{
					if(a==1)
						printf("A\n");
					if(b==1)
						printf("B\n");
					if(c==1)
						printf("C\n);
						if(d==1)
							printf("D\n");
						if(e==1)
							printf("E\n");
					}
	
return 0;
}