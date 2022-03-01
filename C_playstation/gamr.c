#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    playstation:
    system("cls");
    system("COLOR 0b");
    printf("\n\t\t\t\t     Welcome to the Cplaystation\n");
    
    printf("\n\n\n\t\t\t\t     PRESS 1 FOR NUMBER GUESSING GAME\n");
    printf("\n\t\t\t\t     PRESS 2 FOR ROCK PAPER SCISSORS GAME \n");
    printf("\n\t\t\t\t     PRESS 3 FOR MATCHSTICK GAME \n");
    printf("\n\t\t\t\t     PRESS 4 FOR FLAMES GAME \n");
    printf("\n\t\t\t\t     PRESS 5 FOR QUIZ GAME \n");
    int n;
    printf("\n\n\n\n\t\t\t\t   WHICH GAME DO YOU WANT TO PLAY: ");
    scanf("%d", &n);
    system("cls");
    switch (n)
    {
    case 1:
        system("COLOR 0A");
        printf("Choice is 1 \n\n\n");
        guess:
        system("cls");
        printf("  \n\t\t\t\t   %c%c%c%c*___ NUMBER GUESSING GAME ___*%c%c%c%c\n\n", 4, 4, 4, 4, 4, 4, 4, 4);
        int number, guess, nguesses = 1;
        srand(time(0));
        number = rand() % 100 +1 ;

        do
        {
            printf("\n\t\t\t\t Guess the number between 1 to 100\n");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("\n\t\t\t\t Lower number please!\n");
            }
            else if (guess < number)
            {
                printf("\n\t\t\t\t Higher number please!\n");
            }
            else
            {
                printf("\n\n\t\t\t\tYou guessed it in %d attempts %c\n\n", nguesses, 1);
                printf("\n\t\t\t\t Thank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto guess;
                }
                else{
                goto playstation;
                }
            }
            nguesses++;
        } while (guess != number);
        break;

    case 2:
        system("COLOR 08");
        printf("Choice is 2 \n\n\n");
        rock:
        system("cls");
        printf( "\n\t\t\t\t    %c%c%c%c__ROCK PAPER SCISSORS GAME__%c%c%c%c\n\n\n", 6, 6, 6, 6, 6, 6, 6, 6);
        int R = 1;
        int P = 2;
        int S = 3;
        int Pscore = 0;
        int Cscore = 0;
        int choice;
        srand(time(NULL));
        printf("\n\t\t\t\t Rock=1 , Paper= 2, and Scissors= 3\n");
        int k;
        for (k = 0; k < 5; k++)
        {
            printf("\n\t\t\t\t Enter your choice:");
            scanf("%d", &choice);
            int computer = rand() % 3 + 1;
            if (choice == 1)
            {
                if (computer == 1)
                {
                    printf("\n\t\t\t\t Draw\n");
                    printf("\n\t\t\t\t Computer choose 1\n\n");
                }
                if (computer == 2)
                {
                    printf("\n\t\t\t\t Computer Wins!\n");
                    printf("\n\t\t\t\t Computer choose 2\n\n");
                    Cscore = Cscore + 1;
                }
                if (computer == 3)
                {
                    printf("\n\t\t\t\t Player Wins\n");
                    printf("\n\t\t\t\t Computer choose 3\n\n");
                    Pscore = Pscore + 1;
                }
            }
            else if (choice == 2)
            {
                if (computer == 2)
                {
                    printf("\n\t\t\t\t Draw\n");
                    printf("\n\t\t\t\t Computer choose 2\n\n");
                }
                if (computer == 3)
                {
                    printf("\n\t\t\t\t Player Wins!\n");
                    Pscore = Pscore + 1;
                    printf("\n\t\t\t\t Computer choose 3\n\n");
                }
                if (computer == 1)
                {
                    printf("\n\t\t\t\t Computer Wins!\n");
                    printf("\n\t\t\t\t Computer choose 1\n\n");
                    Cscore = Cscore + 1;
                }
            }
            else if (choice == 3)
            {
                if (computer == 3)
                {
                    printf("\n\t\t\t\t Draw\n");
                    printf("\n\t\t\t\t Computer choose 3\n\n");
                }
                if (computer == 2)
                {
                    printf("\n\t\t\t\t Player Wins!\n");
                    printf("\n\t\t\t\t Computer choose 2\n\n");
                    Pscore = Pscore + 1;
                }
                if (computer == 1)
                {
                    printf("\n\t\t\t\t Computer Wins!\n");
                    printf("\n\t\t\t\t Computer choose 1\n\n");
                    Cscore = Cscore + 1;
                }
            }
            else
            {
                printf("\n\t\t\t\t Wrong Answer\n");
            }
        }
        if (Cscore > Pscore)
        {
            printf("\n\n\n\t\t\t\tComputer wins the game by %d:%d \n\n", Cscore, Pscore);
            printf("\n\t\t\t\tThank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
             printf("\n\t\t\t\tPress A if you want to try again\n\n");
                printf("\n\t\t\t\tPress any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto rock;
                }
                else{
                goto playstation;
                }
        }
        else if (Cscore < Pscore)
        {
            printf("\n\n\n\t\t\t\tPlayer wins the game by %d:%d...%c\n\n", Pscore, Cscore, 1);
            printf("\n\t\t\t\tThank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
             printf("\n\t\t\t\tPress A if you want to try again\n\n");
                printf("\n\t\t\t\tPress any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto rock;
                }
                else{
                goto playstation;
                }
        }
        else if (Cscore = Pscore)
        {
            printf("\n\n\n\t\t\t\tNo winner!!!! \n it is a draw!\n\n");
            printf("\n\t\t\t\tThank You for playing\n\n\t\t\t\t Hope you enjoyed the game...\n\n");
             printf("\n\t\t\t\tPress A if you want to try again\n\n");
                printf("\n\t\t\t\tPress any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto rock;
                }
                else{
                goto playstation;
                }
        }
        system("cls");
        break;
    case 3:
        system("COLOR 06");
        printf("\n\t\t\t\tChoice is 3\n\n\n");
        matchstick:
        system("cls");
        printf(" \n\t\t\t\t    %c%c%c%c__MATCHSTICK GAME__%c%c%c%c\n\n", 5, 5, 5, 5, 5, 5, 5, 5);
        int m = 21, p;
         int c_choice;

        while (1)
        {
            srand(time(0));
        c_choice = rand() % 4 + 1;
        printf("\n\n\n\t\t\t\tPick 1 or 2 or 3 or 4 matches\n");
        scanf("%d",&p);
           if (p > 4 || p < 1)
                continue;

            m = m - p;

            printf("\n\t\t\t\tNumber of matches left = %d\n", m);

            if (m >= c_choice){
            printf("\n\t\t\t\tout of which computer picked up %d\n", c_choice);
            m = m - c_choice;
            printf("\n\n\t\t\t\tNumber of Match sticks left = %d\n", m);
            }
            else
            {
                printf("\n\t\t\t\tYou won the Game %c\n\n",2);
               printf("\n\t\t\t\tout of which computer picked up %d\n", m); 
               printf("\n\n\t\t\t\tNumber of Match sticks left = %d\n", 0);
                printf("\n\t\t\t\t Thank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
             printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto matchstick;
                }
                else{
                goto playstation;
                }
            }
            
            
            
            if (m == 1)
            {
                printf("\n\n\t\t\t\t Number of match stick left = %d\n", m);
                printf("\n\t\t\t\tYou lost the Game\n");
                printf("\n\t\t\t\tThank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
                printf("\n\t\t\t\tPress A if you want to try again\n\n");
                printf("\n\t\t\t\tPress any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto matchstick;
                }
                else{
                goto playstation;
                }

             }
            if (m == 0)
            {
                printf("\n\n\n\t\t\t\tNumber of match stick left = %d\n", m);
                printf("\n\t\t\t\tYou won the Game %c\n\n",2);
                printf("\n\t\t\t\tThank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\tPress A if you want to try again\n\n");
                printf("\n\t\t\t\tPress any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto matchstick;
                }
                else{
                goto playstation;
                }

            }
            

        }

        break;
    case 4:
        system("COLOR 09");
        printf("\n\t\t\t\tChoice is 4\n\n\n");
        flames:
        system("cls");
        printf(" \n\t\t\t\t\t   %c%c%c%c__FLAMES GAME__%c%c%c%c\n\n\n", 3, 3, 3, 3, 3, 3, 3, 3);
        printf("\t\t Welcome to our game.....willing that u are exited to check your relationship with ur partner.\n");
        printf("\t\t I think all of you would know that FLAMES game played by school students and teenagers\n\n");


        printf("\n\t\t\t\t\t ->Enter the two names:");

        int f[6] = {0, 0, 0, 0, 0, 0}, n, ch;
        int l1, l2;

        char n1[100], n2[100];
        scanf("%s %s", n1, n2);
        l1 = strlen(n1);
        l2 = strlen(n2);
        int i, j;
        for (i = l1 - 1; i >= 0; i--)
        {
            if (n1[i] != '\0')
            {
                for (j = l2 - 1; j >= 0; j--)
                {
                    if (n2[j] != '\0')
                    {
                        if (n1[i] == n2[j])
                        {
                            n1[i] = n2[j] = '\0';
                            break;
                        }
                    }
                }
            }
        }
        int count = 0;
        for (i = 0; i < l1; i++)
        {
            if (n1[i] != '\0')
                count = count + 1;
        }
        for (j = 0; j < l2; j++)
        {
            if (n2[j] != '\0')
                count = count + 1;
        }
        printf("\n\n\t\t\t\t count is %d\n\n", count);
        while (count > 0 && count < 20)
        {

            if (count == 1){
                printf("\n\t\t\t\t Bond between you both is friendship\n\n");
                printf("\n\t\t\t\t Thank You for playing\n\n\t\t\t\tHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            else if (count == 2){
                printf("\n\t\t\t\t Bond between you both is love\n\n");
                printf("\n\t\t\t\t Thank You for playing\n\nHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                    system("cls");
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            else if (count == 3){
                printf("\n\t\t\t\t Bond between you both is affection\n\n");
                printf("\n\t\t\t\t Thank You for playing\n\nHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                system("cls");
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            else if (count == 4){
                printf("\n\t\t\t\t Bond between you both is marriage\n\n");
                printf("\n\t\t\t\t Thank You for playing\n\nHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                system("cls");
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            else if (count == 5){
                printf("\n\t\t\t\t sorry to say but you both are enemies\n\n");
                printf("\n\t\t\t\tThank You for playing\n\nHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                system("cls");
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            else if (count == 6){
                printf("\n\t\t\t\t you both are siblings\n\n");
                printf("\n\t\t\t\t Thank You for playing\n\nHope you enjoyed the game...\n\n");
                 printf("\n\t\t\t\t Press A if you want to try again\n\n");
                printf("\n\t\t\t\t Press any other key to exit the game\n");
                if(toupper(getch()) == 'A'){
                goto flames;
                }
                else{
                goto playstation;
                }
            }
            count -= 6;
        }
        goto playstation;
        system("cls");

        break;
    case 5:
        system("COLOR 0E");
        printf("\n\t\t\t\t Choice is 5 \n\n\n");
        system("cls");
        printf("  \n\t\t\t\t   %c%c%c%c__QUIZ GAME___%c%c%c%c\n\n", 2, 2, 2, 2, 2, 2, 2, 2);
        int counter, H, G;
        char choi, answer;
    mainhome:
    system("cls");
        printf("\n\t\t\t     Welcome to the game");
        printf("\n\t\t\t_____________");
        printf("\n\t\t\t    Press S to start the game\n\t\t\t    Press Q to quit the game\n");
        choi = toupper(getch());
        printf("\n\t\t\n\n");
        if (choi == 'Q')
            goto playstation;
        else if (choi == 'S')
        {
            system("cls");

           printf("\n\n\n\n\n\n\n\n\n\n\t\t\tYour name:");
             char playername[20];
           scanf("%s",playername);
            system("cls");
            printf("\n\t\t\t Welcome %s", playername);
            printf("\n\n Here are some rules which you should know before playing:");
            printf("\n\n\n\n\t\t\t");
            printf("\n 1. You will be asked a total of 10 questions. Each right answer will give you 1 points!");
            printf("\n 2.  By this way you can score maximum 10 points.");
            printf("\n 3. You will be given 4 options and you have to press A, B ,C or D for the right option.");
            printf("\n 4. You will be asked questions until you gave any wrong answer");
            printf("\n 5. No negative marking for wrong answers!");
            printf("\n\n\t\t\tALL THE BEST");
            printf("\n\n\n Press Y  to start the game!\n Press any other key to return to the main menu\n");
        }
        if (toupper(getch()) == 'Y')
        {
            goto game;
        }
        else
        {
            goto mainhome;
            system("cls");
        }
    game:
        counter = 0;
        for (G = 1; G <= 10; G++)
        {
            system("cls");
            H = G;
            switch (H)
            {

            case 1:
                printf("\n\n\n\t\t\t\t What is the National Game of India?");
                printf("\n\n\n\t\t\t\t A.Football\t\tB.Basketball\n\n\t\t\t\t C.Cricket\t\tD.Hockey\n");
                answer = toupper(getch());
                if (answer == 'D')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\n\n\t\t\t\t Wrong!!! The correct answer is D.Hockey");
                    getch();
                    goto score;
                    break;
                }
            case 2:
                printf("\n\n\n\n\t\t\t\t Which of the following birds is known for its intelligence?");
                printf("\n\n\n\t\t\t\t A.Owl\t\tB.Kingfisher\n\n\t\t\t\t C.Crow\t\tD.Eagle\n");
                answer = toupper(getch());
                if (answer == 'A')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Owl");
                    getch();
                    goto score;
                    break;
                }

            case 3:
                printf("\n\n\n\t\t\t\t Who became the first cricketer to hit six sixes in an over in a ONE-DAY international match? ");
                printf("\n\n\n\t\t\t\t A.Sir Viv Richards\t\tB.Yuvraj Singh\n\n\t\t\t\t C.Herschelle Gibbs\t\tD.None of these\n");
                answer = toupper(getch());
                if (answer == 'C')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Herschelle Gibbs");
                    getch();
                    goto score;
                    break;
                }

            case 4:
                printf("\n\n\n\t\t\t\t The Laws of Electromagnetic Induction were given by?");
                printf("\n\n\n\t\t\t\t A.Faraday\t\tB.Tesla\n\n\t\t\t\t C.Maxwell\t\tD.Coulomb\n");
                answer = toupper(getch());
                if (answer == 'A')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Faraday");
                    getch();
                    goto score;
                    break;
                }

            case 5:
                printf("\n\n\n\t\t\t\t Hindi Divas is celebrated in India on...");
                printf("\n\n\n\t\t\t\t A.12th April\t\tB.14th September\n\n\t\t\t\t C.14th December\tD.14th October\n");
                answer = toupper(getch());
                if (answer == 'B')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.14th September");
                    getch();
                    goto score;
                    break;
                }

            case 6:
                printf("\n\n\n\t\t\t\t Which element is found in Vitamin B12?");
                printf("\n\n\n\t\t\t\t A.Zinc\t\tB.Cobalt\n\n\t\t\t\t C.Calcium\tD.Iron\n");
                answer = toupper(getch());
                if (answer == 'B')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Cobalt");
                    goto score;
                    getch();
                    break;
                }

            case 7:
                printf("\n\n\n\t\t\t\t Which cricket stadium is given the nickname as'Gabba'?");
                printf("\n\n\n\t\t\t\t A.Melbourne Cricket Ground\t\tB.Sydney Cricket Ground \n\n\t\t\t\t C.Adelaide Oval\t\t\tD.Brisbane Cricket Stadium\n");
                answer = toupper(getch());
                if (answer == 'D')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D.Brisbane Cricket Stadium");
                    getch();
                    goto score;
                    break;
                }

            case 8:
                printf("\n\n\n\t\t\t\t How many times a piece of paper can be folded at the most?");
                printf("\n\n\n\t\t\t\t A.6\t\tB.7\n\n\t\t\t\t C.8\t\tD.Depends on the size of paper\n");
                answer = toupper(getch());
                if (answer == 'B')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.7");
                    getch();
                    goto score;
                    break;
                }

            case 9:
                printf("\n\n\n\t\t\t\t Who is the first Indian to win a Nobel Prize?");
                printf("\n\n\n\t\t\t\t A.Rabindranath Tagore\t\tB.CV Raman\n\n\t\t\t\t C.Mother Teresa\t\tD.Hargobind Khorana\n");
                answer = toupper(getch());
                if (answer == 'A')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Rabindranath Tagore");
                    getch();
                    goto score;
                    break;
                }

            case 10:
                printf("\n\n\n\t\t\t\t Which is the longest River in the world?");
                printf("\n\n\n\t\t\t\t A.Nile\t\tB.Koshi\n\n\t\t\t\t C.Ganga\tD.Amazon\n");
                answer = toupper(getch());
                if (answer == 'A')
                {
                    printf("\n\nCorrect!!!");
                    counter++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Nile");
                    getch();
                    break;
                    goto score;
                }
            }
        }
    score:
        system("cls");
        if (counter >= 0 && counter <= 10)
        {
            printf("\n\n\t\t******* CONGRATULATION ******");
            printf("\n\t\t\t\t Your scored %d points\n\n", counter);
            goto go;
        }
    go:
        puts("\n\t\t\t\tPress P if you want to play the game again\n\n");
        puts("\n\t\t\t\tPress any key if you don't want to play further\n");
        if (toupper(getch()) == 'P'){
        system("cls");
            goto mainhome;
        }
        else
        {
            printf("\n\t\t\t\t Thank You for playing\n\nHope you enjoyed the game...\n\n");
            printf("\n\t\t\t\t Press E to exit the game\n");
            if(toupper(getch()) =='E'){
            goto playstation;
            }
        }
        break;

    default:
        printf("\n\t\t\t\t Choice other than 1, 2 , 3, 4 and 5");
        break;
    }
    return 0;
}