#include<stdio.h>

int main(){

    int array1[2][2] = {{0,1},
                         {2,3}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; i++)
    {
        printf("%d\n",array1[i][j]);
    }
    
  }
  
}