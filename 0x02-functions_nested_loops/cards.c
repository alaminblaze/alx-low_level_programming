/*
 * program to evaluate face value.
 * Realease under the vegas public license.
 * (c) 2014 the collefe blackjack team
 */
#include<stdio.h>
#include<stdlib.h>
#include<main.h>
main(int)
{
char card_name[3];
puts("Enter the cards name: ");
scanf("%2s", card_name);
int val = 0;
if (card_name[0] == 'K')
{
val = 10;
}
else if (card_name[0] == 'Q')
{
val = 10;
}
else if (card_name[0] == 'J')
{
val = 10;
}
else if (card_name[0] == 'A')
{
val = 11;
}
else
{
val = atoi(card_name);
}
printf("the value of the card is: %i\n ", val);
return 0;
}
