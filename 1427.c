#include <stdio.h>
#include <string.h>

int main()
{
    char N[11]={0,};
    scanf("%s",&N,sizeof(N));
    int d=strlen(N);
    char temp;
  
    for (int i=0; i<d-1; i++)
    {
        for (int j=0; j<d; j++)
        {
            if (N[j]<N[j+1])
            {
                temp=N[j];
                N[j]=N[j+1];
                N[j+1]=temp;
            }
        }
    }
    printf("%s",N);
    return 0;
}
