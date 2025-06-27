#include <stdio.h>

int main() 
{

  char operator;
  double first,second;
  printf("Enter the operator (+,-,/,*)");
  scanf("%c",&operator);
  printf("Enter the operands");
  scanf("%lf %lf", &first ,&second);
  
  if (operator=='+')
  {
    printf("%lf",first+second);
  }
  else if (operator=='-')
  {
    printf("%lf",first-second);
  }
  else if (operator=='*')
  {
    printf("%lf",first*second);
    
  }
  else if (operator=='/')
  {
    printf("%lf",first/second);
  }
  else
  {
    printf("Error 404");
  }

  return 0;
}
