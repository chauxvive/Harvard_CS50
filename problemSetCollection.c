//Week 1 problem set (NOT week 0)

//1. Mario!

/*

Here’s how the program might work if the user inputs 8 when prompted:

// Height: 8
//       #
//      ##
//     ###
//    ####
//   #####
//  ######
// #######
// ########

//Attempt 2: 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
    height = get_int("Height?\n");
    }
     while (height <= 0);

    printf("Height: %i\n", height);

    for (int i=0; i<height+1; i++)
        {
        for (int x=0; x<i; x++){
		printf("# ");}
       printf("\n");
		}
}

// Aghhh! This is SO close but backwards!! Rats. 

//When I print it looks like this:

//Height: 6

//# 
//# # 
//# # # 
//# # # # 
//# # # # # 
//# # # # # #

//Ok, back to the drawing board. I'm still really close to the first version. 

//Mario V2:


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
    height = get_int("Height?\n");
    }
     while (height <= 0);

    printf("Height: %i\n", height);



    for (int i=0; i<height; i++)
        {
        for (int x=height-i-1; x>0; x--)
            {
               printf(" ");
               }
        for (int x=0; x<=i; x++)
            {
               printf("#");
            }
            printf("\n");
		}
}

//This took longer than I care to admit.

//Mario, Version 3!! Double pyramid version.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
    height = get_int("Height?\n");
    }
     while (height <= 0);

    printf("Height: %i\n", height);



    for (int i=0; i<height; i++)
        {
        for (int x=height-i-1; x>0; x--)
            {
               printf(" ");
               }
        for (int x=0; x<=i; x++)
            {
               printf("#");
            }
            printf("  ");

        for (int x=0; x<=i; x++)
            {
                printf("#");
            }
            printf("\n");
		}
    }


//Adding the second half of the pyramid should've been straightforward, but being sure exactly where to nest the loop was...not. I had to remember the first loop was built into the first half of the pyramid. 
