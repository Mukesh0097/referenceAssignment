#include <stdio.h>

int main(int argc, char *argv[])
{
    // The arguments passed from command line are called command line arguments.These arguments are handled by main() function.Write a program to demonstrate the command line argument

    if (argc < 2)
    {
        printf("No argument passed through command line.\n");
    }
    else
    {

        printf("First argument is: %s\n", argv[1]);
    }
}
