	/* WAP to roll a dice.*/

	int randomValue;

	srand(time(NULL));

	randomValue = (rand() % 6) + 1;		// 1, 2, 3, 4, 5, 6

//	puts("Rolling the dice...");
	usleep(2000000); 

//	printf("You got: %d", randomValue);
