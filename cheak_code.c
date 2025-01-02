#include <stdio.h>

int main()
{

  int pizza = 100, burger = 80, sandwich = 100, panipuri = 20;
  int order, qty, bill1, bill2;
  char reorder;

  printf("1.   Pizza          Price   100 rs \n");
  printf("2.   Burger         Price   80  rs \n");
  printf("3.   Sandwich       Price   100 rs \n");
  printf("4.   Panipuri       Price   20  rs \n");

  printf("Enter 1=Pizza | 2=Burger | 3=Sandwich | 4=Panipuri : ");
  scanf("%d", &order);
  printf("Order Qty : ");
  scanf("%d", &qty);

  switch (order)
  {
  case 1:
    printf("Your Bill : %d \n", bill1 = pizza * qty);
    printf("Reorder 1=Yes and 0=No : ");
    scanf("%s", &reorder);
    switch (reorder)
    {
    case 'y':
      printf("1.   Pizza      Price   100 rs \n");
      printf("2.   Burger     Price   80  rs \n");
      printf("3.   Sandwitch  Price   100 rs \n");
      printf("4.   Panipuri   Price   20  rs \n");

      printf("Enter 1=Pizza | 2=Burger | 3=Sandwich | 4=Panipuri : ");
      scanf("%d", &order);
      printf("Order Qty : ");
      scanf("%d", &qty);
      if (order == 1)
      {
        printf("Your Bill : %d \n", bill2 = bill1 + (pizza * qty));
      }
      else if (order == 2)
      {
        printf("Your Bill : %d \n", bill2 = bill1 + (burger * qty));
      }
      else if (order == 3)
      {
        printf("Your Bill : %d \n", bill2 = bill1 + (sandwich * qty));
      }
      else if (order == 4)
      {
        printf("Your Bill : %d \n", bill2 = bill1 + (panipuri * qty));
      }
      else
      {
        printf("Please Enter correct Number");
      }
      break;

    case 'n':
      printf("Your Bill : %d \n", bill1 = pizza * qty);
      break;

    default:
      // printf("You Entered Wrong Choice");
      break;
    }
    break;

  default:
    break;
  }
}