#include<stdio.h>
#include<stdlib.h>

typedef struct player 
{
	int jerseyno;
	char name[20];
	int runs,wicket,matches;
}player;

player* addplayer(player* p,int *count,int *max);
int displayplayer(player* p,int count);
int Searchplayer(player* p,int count);
int removeplayer(player* p,int *count);
int updateplayer(player* p,int count);
int top3player(player* p,int count);

int main()
{
	int max=2;
	//struct player p[max];
	player* p=(player*)malloc(sizeof(player)*max);
	int count=0,choice=0;
	
	
while(choice!=7)
{
printf("*******Player mgmt System*****\n");
printf("1. Add Player \n 2. Remove Player \n 3. Search Player \n"); 
printf("4. Update Player \n"); 
printf("5. Display All \n 6. Top 3 Players \n 7. Exit \n");


printf("Enter Choice=");
scanf("%d",&choice);

switch(choice)
	{
	case 1:
		p=addplayer( p,&count,&max);
		break;
		
	case 2:
		removeplayer(p,&count);
		break;
		
	case 3:
		Searchplayer(p,&count);
		break;
	case 4:
		updateplayer( p, count);
		break;
	case 5:
		displayplayer( p,count);
		break;	
	case 6:
		top3player(p,count);
		break;
	case 7:
		printf("exit\n");
		break;
		}
	}
}

player* addplayer(player* p,int *count,int *max)
	{
		if(*count >=*max)
		{
			int newsize=(*max)*2;
			p=realloc(p,sizeof(player)*newsize);
			*max=newsize;
			printf("Memory increases \n");
		}	
		int jersey;
		printf("Enter jersey no= \n");
		scanf("%d",&jersey);
		for(int i=0;i<*count;i++)
		{
			if(jersey==p[i].jerseyno)
			{
			printf("Duplicate Entry \n");
			return p;
			}
			
		}	
		p[*count].jerseyno=jersey;
		
		printf("Name of Player= \n");
		scanf("%s",p[*count].name);
		printf("Enter runs= \n");
		scanf("%d",&p[*count].runs);
		printf("Enter wicket= \n");
		scanf("%d",&p[*count].wicket);
		printf("Enter matches=\n");
		scanf("%d",&p[*count].matches);
		
		(*count)++;
		printf("Player Added..! \n");
		return p;
		}

int displayplayer(player *p,int count)
	{
		if(count==0)
		{
		printf("no record available\n");
		}
		else
		{
		for(int i=0;i<count;i++)
			{
			printf("Jersey no is %d \n",p[i].jerseyno);
			printf("Name is %s\n",p[i].name);
			printf("Runs are %d \n",p[i].runs);
			printf("wicket are %d \n",p[i].wicket);
			printf("Total matches are %d \n",p[i].matches);
		
			}	
		}
		
	}
	
int Searchplayer(player* p,int count)
	{
		int jersey;
		printf("Enter Jersey no. to search \n ");
		scanf("%d",&jersey);
		
		for(int i=0;i<count;i++)
		{
			if(p[i].jerseyno==jersey)
				{
					printf("jersey no %d \n",p[i].jerseyno);
					printf("Name is %s\n",p[i].name);
					printf("Runs are %d \n",p[i].runs);
					printf("wicket are %d \n",p[i].wicket);
					printf("matches are %d \n",p[i].matches);
					break;
				}
				
			if(jersey!=p[i].jerseyno)
			{
				printf("Enter Valid Jersey no \n");
				break;
			}
		}
	}
int removeplayer(player* p,int *count)
{
	int jno;
	printf("Enter the jersey no to remove \n");
	scanf("%d",&jno);
	for(int i=0;i<*count;i++)
	{
	if(p[i].jerseyno==jno)
	{
		for(int j=0;j<=*count;j++)
		{
			p[j]=p[j+1];
		}
		(*count)--;
		printf("Player removed \n");
	}
	else
	{
		printf("Enter Valid Jersey no \n");
	}
	}	
	return;	
}

int updateplayer(player* p,int count)
{
	int upjerseyno,flag=0;
	printf("Enter the jersey no. to UPDATE \n :");
	scanf("%d",&upjerseyno);
	
	for(int i=0;i<count;i++)
	{
		if(upjerseyno==p[i].jerseyno)
		{
			printf("Enter jersey no to update: \n");
			scanf("%d",&p[i].jerseyno);
			printf("Enter name to update:\n ");
			scanf("%s",p[i].name);
			printf("Enter runs to update: \n");
			scanf("%d",&p[i].runs);
			printf("Enter wicket to update: \n");
			scanf("%d",&p[i].wicket);
			printf("Enter matches to update:\n ");
			scanf("%d",&p[i].matches);
			printf("Player Added \n");
			 flag=1;
			break;
		}
		if(flag==0)
			{
				printf("Enter Valid jersey no to update \n");
			}
		}
		return 1;
	}
	
int top3player(player* p,int count)
{
	if(count<3)
	{
		printf("Player not sufficient \n");
	}
	for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(p[i].runs<=p[j].runs)
			{
				player temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("Top 3 Players are :");
	printf(" jerseyno= %d \n",p[i].jerseyno);
	printf(" name= %s \n",p[i].name);
	printf("runs= %d \n",p[i].runs);
	printf("wicket= %d \n",p[i].wicket);
	printf("matches= %d \n",p[i].matches);
}
return 1;
}
	
	
