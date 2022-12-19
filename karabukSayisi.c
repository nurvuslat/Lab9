//The C program that finds whether the entered number is the number of Karabük

#include <stdio.h>

int main()
{
	int number, digit, kb;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	kb = number;
	digit = kb % 10;
	
	while (kb > 0)
	{
		if (kb % 10 == digit)
		{
			kb /= 10;
			
			if (kb==0)
			{
				printf("Karabuk number.");
			}
			
		}
		else
		{
			printf("is not a Karabuk number.");
			break;
		}	
		
			
	
			
		
	}
 	return 0;	

	
	
}
