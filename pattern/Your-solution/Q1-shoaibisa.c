#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
   scanf("%d", &n);
  	// Complete the code to print the pattern.

    int i,j,k,l;
    for(i=0; i<n;i++){ //till n times
      //  k=n;
        for(j=n; j>=n-i; j--){  // for decreasing terms from n to n-i
            printf("%d ",j);
        }
        for(l=1; l<n-i; l++){    // repeating j
            printf("%d ",j);
        }

       printf("\n");
    }


    return 0;
}
