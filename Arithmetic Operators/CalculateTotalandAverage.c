// #include<stdio.h>
// #include<conio.h>

// main()
// {
//     int rolNumb, m1, m2, m3, total;
//     float average;
//     printf("Enter your rollNumber");
//     scanf("%d", &rolNumb);
//     printf("Enter your Physics Mark");
//     scanf("%d", &m1);
//     printf("Enter your Chemistry mark");
//     scanf("%d", &m2);
//     printf("Enter your Mathematics mark");
//     scanf("%d", &m3);

//     total = m1+m2+m3;
//     average total/3.0;

//     printf ("Average is %f", average);



// }



#include <stdio.h>

main()
{
    int rolNumb, m1, m2, m3, total;
    float average;
    printf("Enter your rollNumber");
    scanf("%d", &rolNumb);
    printf("Enter your Physics Mark");
    scanf("%d", &m1);
    printf("Enter your Chemistry mark");
    scanf("%d", &m2);
    printf("Enter your Mathematics mark");
    scanf("%d", &m3);

    total = m1+m2+m3;
    average = total/3.0;

    printf ("Average is %f", average);
    

}