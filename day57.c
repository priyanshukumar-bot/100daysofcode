#include <stdio.h>
int main()
{
      int n;
    printf("enter no of elements in arrays\n");
    scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    printf("enter a[%d]\n",i);
    scanf("%d",&a[i]);
}
    printf("-1,");
   
        for (int i = 1; i < n; i++)
        {
            int k = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] > a[i])
                {
                    printf("%d,", a[j]);
                    break;
                }
                else
                {
                    k = 1;
                }
            }
            if (k == 1)
            {
                printf("-1,");
            }
           
        }
    
    return 0;
}