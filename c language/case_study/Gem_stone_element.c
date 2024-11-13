#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k,l=0,n=0,final=0,sum;
	
	printf("enter number of elements");
	scanf("%d",&n);
	int count[n][26];
	char elements[n][100];
	for(i=0;i<n;i++)
	{
		//gets(elements[i]);
		scanf("%s",elements[i]);
	}
	
		for(k=0;k<n;k++)
		{
				
			l=strlen(elements[k]);
			char word[l+1];
			strcpy(word,elements[k]);
				
				for(j=0;j<l;j++)
				{
						char w=word[j];
						switch (word[j])
						{
							case'a':count[k][0]=1;
									break;
							case'b':count[k][1]=1;
									break;
							case'c':count[k][2]=1;
									break;
							case'd':count[k][3]=1;
									break;
							case'e':count[k][4]=1;
									break;
							case'f':count[k][5]=1;
									break;
							case'g':count[k][6]=1;
									break;
							case'h':count[k][7]=1;
									break;
							case'i':count[k][8]=1;
									break;
							case'j':count[k][9]=1;
									break;
							case'k':count[k][10]=1;
									break;
							case'l':count[k][11]=1;
									break;
							case'm':count[k][12]=1;
									break;
							case'n':count[k][13]=1;
									break;
							case'o':count[k][14]=1;
									break;
							case'p':count[k][15]=1;
									break;
							case'q':count[k][16]=1;
									break;
							case'r':count[k][17]=1;
									break;
							case's':count[k][18]=1;
									break;
							case't':count[k][19]=1;
									break;
							case'u':count[k][20]=1;
									break;
							case'v':count[k][21]=1;
									break;
							case'w':count[k][22]=1;
									break;
							case'x':count[k][23]=1;
									break;
							case'y':count[k][24]=1;
									break;
							case'z':count[k][25]=1;
									break;	
						}
				}
		}
		
		for(i=0;i<25;i++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+count[k][i];
			}
			if(sum==n)
			{
				final=final+1;
			}
		}
	
	printf("\n Total gem elements are %d",final);
}
