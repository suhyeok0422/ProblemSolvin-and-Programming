#include <stdio.h>

int main() 
{
  float res, num, now_g, total_gra;
  char sub[51], grade[3];
  
	for (int i = 0;i < 20;i++) 
  	{
		scanf("%s %f %s", &sub, &num, &grade);
		if (grade[0] != 'P' && grade[0] != 'F') 
    		{
			if (grade[0] == 'A') 
				now_g = 4.0;
			else if (grade[0] == 'B') 
				now_g = 3.0;
			else if (grade[0] == 'C') 
				now_g = 2.0;
			else 
				now_g = 1.0;
			
			if (grade[1] == '+') 
				now_g += 0.5;
			
			res += (now_g * num);
			total_gra += num;
		}
		else 
    		{
			if (grade[0] == 'F') 
				total_gra += num;
		}
	}
	printf("%f", (res / total_gra));
}
