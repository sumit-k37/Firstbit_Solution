//Develop a program to manage a music library. Define a structure to
//store song details (song ID, title, artist, and duration). Create a menu-
//driven program to add new songs and display the song library. Use
//functions to handle these operations.
#include<stdio.h>
#include<stdlib.h>

typedef struct song 
{
	int id,duration;
	char title[20],artist[20];
}song;

int addsong(song s[],int count);
int displaysong(song s[],int count);

int main()
{
	 song s[100];
	int choice=0,count=0;
	//int max=2;
	 //song s[100];
	//song* s=(song*)malloc(sizeof(song)*max);
	
while(1)
{
	printf("*********MUSIC LIBRARY**********\n");
	printf("1.Add song \n");
	printf("2. Dispay song \n");
	printf("3. exit\n");
	
	printf("\nEnter choice :\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		count=addsong(s,count);
			break;
		case 2:
		displaysong(s,count);
			break;
		case 3:
		printf("exit");
			
			break;
		default:printf("invalid choice");
	}	
	
}
}

int addsong(song s[],int count)
	{
	//(song ID, title, artist, and duration).
	printf("Enter song id=\n");
	scanf("%d",&s[count].id);
	printf("Enter song title=\n");
	scanf("%s",&s[count].title);
	printf("Enter artist =\n");
	scanf("%s",&s[count].artist);
	printf("Enter song duration=\n");
	scanf("%d",&s[count].duration);
	
	count++;
	
}

int displaysong(song s[],int count)
{
	for(int i=0;i<count;i++)
	{	
//	int i=count;
	//(song ID, title, artist, and duration).
	printf(" song id=%d \n",&s[i].id);
	printf("song title= %s \n",s[i].title);
	printf(" artist =%s \n",s[i].artist);
	printf("song duration=%d \n",&s[i].duration);
	}
	return 0;
}
