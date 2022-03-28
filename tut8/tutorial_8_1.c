#include <stdio.h>
 
void move(int disks, int source, int auxiliary, int target)
{
    if (disks > 0)
    {
        // move `n-1` discs from source to auxiliary using the target
        // as an intermediate pole
        move(disks - 1, source, target, auxiliary);
 
        // move one disc from source to target
        printf("Move disk %d FROM %d TO %d\n", disks, source, target);
 
        // move `n-1` discs from auxiliary to target using the source
        // as an intermediate pole
        move(disks - 1, auxiliary, source, target);
    }
}
 
int main()
{
    int n;
    int source;
    int target;
    int auxiliary;

    printf("Please enter the number of disks: ");
    scanf("%d", &n);

    printf("Please enter the source, target and auxilary rods numbers.\n");
    printf("For intstance 1 2 3 means source rod is 1, target rod is 2 and auxiliary rod is 3: \n");
    scanf("%d %d %d", &source, &target, &auxiliary);

    move(n, source, auxiliary, target);
 
    return 0;
}