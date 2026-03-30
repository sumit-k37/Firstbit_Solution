//Develop a program to manage a music library. Define a structure to
//store song details (song ID, title, artist, and duration). Create a menu-
//driven program to add new songs and display the song library. Use
//functions to handle these operations.
#include<stdio.h>
#include<stdlib.h>
typedef struct musiclib 
{
	int id,duration;
	char title[20], artist[20];
}musiclib;

int addsong(musiclib m[],int count );
int display(musiclib m[],int count );

int main()
{	
//struct musiclib;
int choice,count=0;
	musiclib m[30];

while(1)
{
	printf("*********MUSIC LIBRARY**********\n");
	printf("1.Add song \n");
	printf("2. Dispay song \n");
	printf("3. exit\n");

	printf("Enter choice");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:
		count=addsong(m,count);
			break;
			
		case 2:
			display(m,count);
			break;
		case 3:
			exit(0);
			break;
			default:
				printf("Invalid choice");
		}	
	}
}

int addsong(musiclib m[],int count)
{	
	printf("Enter the ID");
	scanf("%d",&m[count].id);
	printf("Enter the title");
	scanf("%s",m[count].title);
	printf("Enter the artist");
	scanf("%s",m[count].artist);
	printf("Enter the duration");
	scanf("%d",&m[count].duration);
	count++;
	return count;
}
 
int display(musiclib m[],int count)
{
	for(int i=0;i<count;i++)
	{
	printf(" Display Song :");
	printf("id=%d",m[i].id);
	printf("title=%s",m[i].title);
	printf("artist=%s",m[i].artist);
	printf("duration=%d",m[i].duration);
	}
}