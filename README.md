# OS-assignment
program rivision of OS assignment
	
	for(i=0;i<10;i++)
	{
		if(max==a[i])
		{
		   printf("\n\n********************************************************************\n");
		   printf("Here %c owns maximum gifts %d hence served first at billing counter.\n",student[i],a[i]);
		   printf("And following order will followed");
		   printf("\n**********************************************************************\n");
		}

	}
	
	printf("\n\nPress any key to see the sequence\n\n");
	getch();
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	
	int temp2;
	for(step=0;step<9;++step)
	for(i=0;i<10-step-1;++i)
		{
			if(a[i]<a[i+1])
			{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			
			temp2=student[i];
			student[i]=student[i+1];
			student[i+1]=temp2;
			}
		}
	for(i=0;i<10;++i)
	{
		printf("\n%c has  %d is served",student[i],a[i]);
		printf("\nThen ");
		sleep(2);
	}
}
