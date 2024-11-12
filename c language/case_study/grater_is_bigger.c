#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,l,flag=0,q,z,k,p,t;
	char word[100];
	printf("Enter total words \n");
	scanf("%d",&t);
	char text[t][100];
	for(p=0;p<=t;p++)
	{		
			printf("Enter word \n");
			gets(text[p]);
		    strcpy(word,text[p]);
			l=strlen(word);
			for(j=l-1;j>=0;j--)
			{
				q=word[j];
				z=word[j-1];
				char temp;
				if(q>z)
				{
					temp=word[j];
					word[j]=word[j-1];
					word[j-1]=temp;
					for(k=l-1;k>j;k--)
					{
						q=word[k];
						z=word[k-1];
						char temp2;
						if(q<z)
						{
							temp2=word[k];
							word[k]=word[k-1];
							word[k-1]=temp2;
						}
					}
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				if(word[l-1]<word[0])
				{
					char temp;
					temp=word[0];
					word[0]=word[l-1];
					word[l-1]=temp;
				}
				printf("%s\n",word);	
			}
			
			
	}

}
	
	/*
	printf("Enter total words \n");
	scanf("%d",&t);
	char word[t][100];
	for(i=0;i<t+1;i++)
	{
		gets(word[i]);
	}
	*/
