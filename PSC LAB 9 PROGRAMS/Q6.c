#include<stdio.h>
#include<math.h>

int main()
{
        static int array[10][10];
        int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;

        printf("Enter no. of rows :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < m; i++)
        {
        for (j = 0; j < n; j++)
        {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array[i][j]);
                 a = array[i][j] * array[i][j];
                 sum1 = sum1 + a;
                }
        }

        normal = sqrt((double)sum1);
        printf("\nThe Normal of the given matrix is = %d \n", normal);
        for (i = 0; i < m; ++i) {
                sum = sum + array[i][i];
        }
        printf("\nTrace of the matrix is = %d \n", sum);

        return 0;
}