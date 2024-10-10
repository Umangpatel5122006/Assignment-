//This programe is designed to check whether number is Armstrong or not using function
int Armstrong();
void main()
{
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	Armstrong(n);
}
int Armstrong(int n)
{
	int b=n;
	int sum=0,q,c=0;
	while(n>0)
	{
		q=n%10;
		sum=sum+q*q*q;
		n=n/10;
	}
	if(b==sum)
	printf("Number is Armstrong");
	else
	printf("Number is not Armstrong");
}
