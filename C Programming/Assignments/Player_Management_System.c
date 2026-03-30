#include<stdio.h>
typedef struct player {
	int jerseyno;
	char name[20];
	int runs,wicket,matches;
}player;


int addplayer(player* p,int *n);
int displayplayer(player* p,int n);

int main()
{
	struct player p[100];
	int n=0,choice=0;
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
		addplayer( p,&n);
		break;
//	case 2:
//		removeplayer(player p,int *n);
//		break;
//	case 3:
//		Searchplayer(player p,int *n);
//		break;
//	case 4:
//		updateplayer(player p,int *n);
//		break;
	case 5:
		displayplayer( p,n);
		break;	
//	case 6:
//		top3player(player p,int *n);
//		break;
	case 7:
		printf("exit()");
		break;
	}
}
}

	int addplayer(player* p,int *n)
	{
		printf("Enter jersey no=");
		scanf("%d",&p[*n].jerseyno);
		printf("Name of Player=");
		scanf("%s",p[*n].name);
		printf("Enter runs=");
		scanf("%d",&p[*n].runs);
		printf("Enter wicket=");
		scanf("%d",&p[*n].wicket);
		printf("Enter matches=");
		scanf("%d",&p[*n].matches);
		(*n)++;
		printf("Player Added..!");
	}

	int displayplayer(player* p,int n)
	{
		if(n==0)
		
		printf("no record available\n");
	
		else{
		
		
		for(int i=0;i<n;i++)
		{
			printf("Jersey no is",p[n].jerseyno);	//int jerseyno;char name[20]  runs,wicket,matches;
			printf("Name is",p[n].name);
			printf("Runs are",&p[n].runs);
			printf("wicket are",&p[n].wicket);
			printf("Total matches are",&p[n].matches);
		}
}
}

	
