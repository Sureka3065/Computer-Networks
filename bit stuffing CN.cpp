# include<stdio.h>
int main()
{
	char data[20],stuffeddata[30];
	int i,j,count;
	printf("enter the data: ");
	scanf("%s",data);
	i=0;
	j=0;
	count=0;
	while(data[i]1='\0')
	{
		stuffeddata[j]=data[i];
		if(data[i]=='1')
		{
			count++;
		}
		else
		{
			count=0;
		}
		if(count==5)
		{
			stffeddata[++j]='0';
			count=0;
		}
		i++;
		j++;
	}
	stuffeddata[j]='\0';
	printf("original dat:%s\n",data);
	printf("after bit stuffing:%s\n",stuffeddata);
	return 0;
}
