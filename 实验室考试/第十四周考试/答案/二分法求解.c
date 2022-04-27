double fun(double a,double b)
{
	double f,m,r;
	double y;
	f=a;r=b;
	m=(f+r)/2.0;
	do
	{
		y=exp(m)-sin(m)-sqrt(m)-2;
		if(y>0)
		{
			r=m;
			m=(f+r)/2;
		}
		else
		{
			f=m;
			m=(f+r)/2;
		}
	}while(fabs(y)>1e-10);
	return m;
}