#include <stdio.h>

int main() 
{
  int a, b, c;
	while (1) 
    {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
			break;
        
		if (a >= b + c || b >= c + a || c >= a + b)
			printf("Invalid\n");
        
		else if (a == b || b == c || a == c) 
        {
			if (a == b && b == c && c == a)
				printf("Equilateral\n");
			else
				printf("Isosceles\n");
		}
		else
			printf("Scalene\n");
	}
}
