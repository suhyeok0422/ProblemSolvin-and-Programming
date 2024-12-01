#include <stdio.h>
#include <string.h>

int arr[21] = {0};
char now_chr[7];
int now_num, N;

int main() {
	scanf("%d", &N);

	for (int i = 0;i < N;i++) 
  {
		scanf("%s", &now_chr);
		
		if (strcmp(now_chr, "all") == 0) 
    {
			for (int j = 1;j < 21;j++) 
				arr[j] = 1;
		}
		else if (strcmp(now_chr, "empty") == 0) 
    {
			for (int j = 1;j < 21;j++) 
				arr[j] = 0;
		}
		else 
    {
			scanf("%d", &now_num);
			if (strcmp(now_chr, "add") == 0) 
				arr[now_num] = 1;
			else if (strcmp(now_chr, "remove") == 0) 
				arr[now_num] = 0;
			else if (strcmp(now_chr, "check") == 0) 
				printf("%d\n", arr[now_num]);
			else 
      {
				if (arr[now_num] == 1)
					arr[now_num] = 0;
				else 
					arr[now_num] = 1;
			}
		}
	}
}
