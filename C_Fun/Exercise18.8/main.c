#include <stdio.h>

/*Memory Locations in an Array*/
int main()
{
    int num[6] = {1,2,5,6,7};
    int x = 0;

    for(; x<5; x++) {
        printf("%d at %p\n",num[x],&num[x]);

    }
    return 0;
}
