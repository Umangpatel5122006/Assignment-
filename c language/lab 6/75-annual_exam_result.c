//This programe is designed to show annual exam result
#include<stdio.h>
void main()
{
	int a[10],sum=0,i=0,s1[10],s2[10],s3[10],max1,max2,max3,r1,r2,r3,mt[10],t,tr;
	printf("Enter Roll numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Subject1 marks \n");//scanning marks of subject1
	for(i=0;i<10;i++)
	{
		scanf("%d",&s1[i]);
	} 
	max1=s1[0];
	r1=1;
	for(i=0;i<10;i++)//finding highest marks of subject1
	{
		if(max1<s1[i])
		{
			max1=s1[i];
			r1=i+1;
		}
	}
	printf("Enter Subject2 marks \n");//scanning marks of subject2
	for(i=0;i<10;i++)
	{
		scanf("%d",&s2[i]);
	}
	max2=s2[0];
	r2=1;
	for(i=0;i<10;i++)//finding highest marks of subject2
	{
		if(max2<s2[i])
		{
			max2=s2[i];
			r2=i+1;
		}
	}
	printf("Enter Subject3 marks \n");//scanning marks of subject3
	for(i=0;i<10;i++)
	{
		scanf("%d",&s3[i]);
	}
	max3=s3[0];
	r3=1;
	for(i=0;i<10;i++)//finding highest marks of subject3
	{
		if(max3<s3[i])
		{
			max3=s3[i];
			r3=i+1;
		}
	}
	printf("\n");
	printf("Roll no.\tSubject1\tSubject2\tSubject3\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\n",i+1,s1[i],s2[i],s3[i]);//to print all data in matrix form
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		mt[i]=s1[i]+s2[i]+s3[i];
		printf("Total marks of Roll no. %d is %d \n",i+1,mt[i]);//to print sum of all subject of student 
	}
	t=mt[0];
	tr=1;
	for(i=0;i<10;i++)//finding highest total marks
	{
		if(t<mt[i])
		{
			t=mt[i];
			tr=i+1;
		}
	}
	printf("Roll no. %d secured highest total marks %d \n",tr,t);
	printf("Roll no. %d secured %d marks in Subject1 \n",r1,max1);
	printf("Roll no. %d secured %d marks in Subject2 \n",r2,max2);
	printf("Roll no. %d secured %d marks in Subject3 \n",r3,max3);
}
