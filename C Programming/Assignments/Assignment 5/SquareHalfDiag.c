void main()
{
	int n=15;
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=n;col++)
		{
			if(row==1||row==n||col==1||col==n|| row==col&& row<=n/2 ||row+col==n+1&& row<=n/2|| row==n/2)
			{
			printf("* ");
			}
			else
			{
			printf("  ");
			}
		}
				printf(" \n");
	}

}