//Develop a program to manage a music library. Define a structure to
//store song details (song ID, title, artist, and duration). Create a menu-
//driven program to add new songs and display the song library. Use
//functions to handle these operations.
#include<stdio.h>
typedef struct musiclib 
{
	int id,duration,music;
	char title[20], artist[20];
}musiclib;

int addsong();
int display();

int main()
{	
struct musiclib s;
int choice;
//	int id,duration,music;
//	char title[20], artist[20];

	printf("Enter choice");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
			addsong();
			break;
		case 2:
			display();
			break;
	}
}

int addsong()
{
	int id,duration;
	char artist,title;
	printf("Enter the ID");
	scanf("%d",&id);
	printf("Enter the title");
	scanf("%d",title);
	printf("Enter the artist");
	scanf("%d",artist);
	printf("Enter the duration");
	scanf("%d",&duration);
	int display();
}

int display()
{

	printf(" Display Song :");
	printf("id=%d",&id);
	printf("title=%s",title);
	printf("artist=%s",artist);
	printf("duration=%d",&duration);
}