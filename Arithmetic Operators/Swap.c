// #include <stdio.h>

// main()
// {
//     int a,b,temp;

//     printf("Enter your number a");
//     scanf("%d",&a);
//     printf("Your Number a before swap is %d", a);
//     printf("Enter your number b");
//     scanf("%d", &b);
//     printf("your Number b before swap is %d", b);
    


// }

#include <stdio.h>


main()
{
    int a,b,temp;

    printf("Enter your number a");
    scanf("%d",&a);
    printf("Your Number a before swap is %d", a);
    printf("Enter your number b");
    scanf("%d", &b);
    printf("your Number b before swap is %d", b);
    
temp = a;
a=b;
b=temp;
printf("the a after swap is %d", a);
printf("the b after swap is %d", b);

}
