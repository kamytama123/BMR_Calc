#include <stdio.h>
//BMR Calculator

int main()
{
	int G, A;																//Define variables
	float W, H, BMR;

		printf("This program calculates your BMR, \"Basil Metabolic Rate\"\n");								//Explains what program does and promts user for gender
		printf("Please enter 1 if you are a woman and 2 if you are a man\n");

		scanf("%i", &G);
			
			if (G != 1 &&  G != 2){													//The following lines of text prompt the user for information needed to calculate BMR				
				puts("Error: Please run program again");
				
			}	
			if(G == 1){														//and print the corresponding BMR to the screen. Also displays error if incorrect choice
				printf("Please enter your weight in kg followed by your height in cm and your age in years\n");			//of input

				scanf("%f %f %d", &W, &H, &A);
			
				BMR = (10*W) + (6.25*H) - (5*A) - 161;
			
				printf("Your BMR is: %f\n", BMR);
				return;
			
			}if(G == 2){
				printf("Please enter your weight in kg followed by your height in cm and your age in years\n");

				scanf("%f %f %f", &W, &H, &A);
				
				BMR = (10*W) + (6.25*H) - (5*A) + 5;
				
				printf("Your BMR is %f\n", BMR);
				return;
			}
		
		

	return 0;
}