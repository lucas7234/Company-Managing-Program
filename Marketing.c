//help marketing to increase sales and budget

#include <math.h>
#include <stdio.h>

main()
{
//collect informations about rival and your budget
  int sell;
  int budget;
  int rivalsell;
  int rivalbudget;
  int percent;
  printf("\nPlease enter annual average sales.");
  scanf(" %d", &sell);
  printf("\nPlease enter your company's budget.");
  scanf(" %d", &budget);
  printf("\nPlease enter rival's annual average sales.");
  scanf(" %d", &rivalsell);
  printf("\nPlease enter your rival company's budget.");
  scanf(" %d", &rivalbudget);
  
  //give solutions for winnings to your rival
  if (rivalsell>sell)
  {
    printf("\nYour rival's sailing is %d percent ahead of you.", (percent=(rivalsell/sell)*100));
    printf("\nTo your sailing is ahead of rival, you may need to increase sales by %d%% at leisure. ", percent+10);
    printf("\nAnd you will get $%d budget after marketing! ", ((budget)+(budget+(percent+10))));
  }
  else
  {
    printf("\nYour sailing is %d percent ahead of your rival.", (percent=(sell/rivalsell)*100));
    printf("\nWhy don't we just increase our sales by 10% and have %d%% sales? ", percent+10);
    printf("\nAnd you will get $%d budget after marketing! ", ((budget)+(budget+(percent+10))));
  }
  printf("\nThank you for using!");
  return 0;
}
