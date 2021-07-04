void delay(int);
void madlibs();
void hangman();
void riddle();

void main()

{
	
//Initial Greetings & Name Entry:

	printf("Hey, I am WordBot.\n");
	delay(1);

	printf("Your virtual assistant.\n");
	delay(2);

	printf("Seems like, we are meeting for the first time.\n");
	delay(1);

	printf("May I know your name?\n\t\t\t\t\t");
	char name[20];
	gets(name);
    	
    printf("\nNice to meet you %s.", name);
	delay(1);

//Menu Initialization:
	
int menu_selection;
	
char temp[1];

    	printf("\nWhat would you like to do today?\n");
	    delay(1);

	    printf("I can run multiple programs from list below.\n\n");
	    delay(2);

	    menu: printf("(Choose a number from the menu below)\n\n");

   	    printf("------------\n1. Play Mad Libs\n2. Play Hangman\n3. Play Riddles\n0. Exit\n----------\n\t\t\t\t\t");

    	scanf("%d", &menu_selection);

	    gets(temp);


// (1)Calling Mad Libs Function:
	
if (menu_selection == 1)
	
{   
	    madlibs();
	    
	        printf("\nThat was fun!");
      	    printf("\nYou are very creative %s", name);
     	    printf("\n\n What would you like to do next?");
    	
goto menu;
	}

//(2) Calling Hangman Function:

	else if (menu_selection == 2)

	{
        		hangman();

        		goto menu;
	}

//(3) Calling Riddle Function:

	else if (menu_selection == 3)

	{

       	 	riddle();

       	 	goto menu;
	}

//(0) Exit Program:
	
else if (menu_selection == 0)

	{

    		goto exit;

	}
//Error Value:Special Processing

	else

	{

       		printf("ERROR: Invalid Selection");

    		goto menu;
	}

	
exit: printf("\n\n\t\t\t-CREDITS-\nMade By:\n1913004\tAniket Bachhas\n1913007\tMansi Bhujbal\n1913005\tAnoushka Bhat\n\nBranch: Electronics and Telecommunication\nDivision: E\nBatch: E1\n\n");

}


struct madlib {
	char entry[50]; };

void madlibs()
{

    	struct madlib lib[14];
    	int i=0;

        printf("Excellent Choice! Mad Libs is a game where I'll ask you random words\nthat will fill up the blanks and complete a predefined story.");
        printf("\nLet's Begin,\n");

        printf("\nGive me a Name, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nA time duration, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nA mode of Transport, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nAn Adjective, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nAnother Adjective, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nA Verb ending in 'ing', ");
    	gets (lib[i].entry);
    	i++;

        printf("\nAn animal, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nOne more Adjective, ");
    	gets (lib[i].entry);
    	i++;

    	printf("\nA Verb in past tense, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nAn Adjective, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nFour more words to go.");
    	delay(1);

        printf("\n\nA Verb in past tense, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nAnother Verb in past tense, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nA place, ");
    	gets (lib[i].entry);
    	i++;

        printf("\nLast one.");
    	delay(1);

        printf("\n\nA Verb, ");
    	gets (lib[i].entry);
    	i++;

        printf("\n\n Generating your story...");
    	delay(2);

        printf("\n__________\n\nThis story is called, 'MY TRIP TO DISNEY WORLD'");
    	i=0;
        printf("\n\nLast month, I went to Disney World with %s.\n", lib[i].entry);
    	i++;
        printf("We traveled for %s ", lib[i].entry);
    	i++;
        printf("by %s.\n\n", lib[i].entry);
    	i++;
        printf("Finally, we got there and it was very %s.\n", lib[i].entry);
    	i++;
        printf("There were %s people ", lib[i].entry);
    	i++;
        printf("%s everywhere.There were also people dressed up in ", lib[i].entry);
    	i++;
        printf("%s costumes.\n\n", lib[i].entry);
    	i++;
    	printf("I wish it had been more %s,", lib[i].entry);
    	i++;
    	printf(" but we %s anyway.", lib[i].entry);
    	i++;
        printf("We also went on some %s rides, called 'Magic Noun'. ", lib[i].entry);
    	i++;
        printf("%s nearly fell off a ride and had to be %s.\n", lib[0].entry, lib[i].entry);
    	i++;
        printf("Later we went to the hotel and %s.", lib[i].entry);
    	i++;
        printf("\n\nNext year, I want to go to %s, ", lib[i].entry);
    	i++;
        printf("where we can %s.\n\n", lib[i].entry);
        printf("END\n");
        printf("__________");
	}

void hangman()
{
    char ans[38], input, temp[1];
    	int i, tries=5, correct=0;

        printf("Welcome to Hangman.\n");
    	delay (1);
        printf("You will be given 5 tries to guess the entire phrase.\nEvery wrong attempt will reduce the number of tries by 1.\n");
    	delay(3);
        printf("Here you go:-\n\n");
        delay(1);

    	strcpy(ans, "S _ _ S _ _   _ _   _ H _   _ _ _ _ H");
    	loop:  if (tries == 0)
    	{
            printf("\nBETTER LUCK NEXT TIME.\n\n");
            delay(3);
        	goto menu;
    	}

        	if(correct == 8)
    	{
        	for (i=0; i<38; i++)
    	{ printf("%c", ans[i]); }
            printf("\nBINGO!! You figured out the answer:- SUNSET BY THE BEACH ");
        	delay (1);
            printf("\nCongratulations!\n");
        	delay (3);
    	goto menu;
    	}

    	for (i=0; i<38; i++)
    	{ printf("%c", ans[i]); }
    	printf ("\nYou have %d tries left.\n", tries);
 	   scanf("%c", &input);
    	gets(temp);
        printf("\n\n");

    	if (input == 'U' || input == 'u')
    	{
        	if (ans[2] == '_')
            {correct++;}
        	ans[2] = 'U';
    	}

    	else if (input == 'N' || input == 'n')
    	{
        	if (ans[4] == '_')
            {correct++;}
        	ans[4] = 'N';
    	}

    	else if (input == 'E' || input == 'e')
    	{
        	if (ans[8] == '_')
            {correct++;}
        	ans[8] = 'E';
        	ans[24] = 'E';
        	ans[30] = 'E';
    	}

    	else if (input == 'T' || input == 't')
    	{
        	if (ans[10] == '_')
            {correct++;}
        	ans[10] = 'T';
        	ans[20] = 'T';
    	}

    	else if (input == 'B' || input == 'b')
    	{
        	if (ans[14] == '_')
            {correct++;}
        	ans[14] = 'B';
        	ans[28] = 'B';
    	}

    	else if (input == 'Y' || input == 'y')
    	{
        	if (ans[16] == '_')
            {correct++;}
        	ans[16] = 'Y';
    	}

    	else if (input == 'A' || input == 'a')
    	{
        	if (ans[32] == '_')
 	       {correct++;}
        	ans[32] = 'A';
    	}

    	else if (input == 'C' || input == 'c')
    	{
        	if (ans[34] == '_')
            {correct++;}
        	ans[34] = 'C';
    	}

    	else
    	{
 	       tries--;
    	}

    	goto loop;
    	menu: printf("");
}


void riddle()
{
    printf("The trickiest of all, prepare for a challenge.\n");
    	delay(1);
        printf("Here's your riddle:-\n\n");
    	delay(1);
    	char ans[2];
        printf("I'm in you,\nBut not in him,\nI go up,\nBut not down,\nI'm in the colosseum,\nBut not a tower,\nI'm in a puzzle,\nBut not a riddle.");
        printf("\nWhat alphabet am I?\n\nYour Answer: ");
    	gets(ans);
    	if (strcmp(ans,"u") == 0 || strcmp(ans,"U") == 0)
    	{
            printf("Your Answer is absolutely correct.\n\n");
            delay(2);
    	}
    	else
    	{
            printf("WRONG ANSWER! Better Luck Next Time");
            delay(2);
    	}
}


void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not acheived
	while (clock() < start_time + milli_seconds)
    	;
}
