#include <stdio.h>

int main()
{
    int player, computer = rand() % 3;
    /*
        0 --> snake
        1 --> water
        2 --> Gun
    */
    printf("Choose 0 For Snake. 1 For water. 2 For Gun\n");
    scanf("%d", &player);
    printf("You Choose: %d\n", player);
    printf("Computer choose : %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win\n");
    }

    else if (player == 0 && computer == 2)
    {
        printf("Opps You Loss\n");
    }

    else if (player == 1 && computer == 0)
    {
        printf("Opps You Loss\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's Draw\n");
    }

    else if (player == 1 && computer == 2)
    {
        printf("You win\n");
    }

    else if (player == 2 && computer == 0)
    {
        printf("You win\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Opps You Loss\n");
    }

    else if (player == 2 && computer == 2)
    {
        printf("It's Draw\n");
    }
    else{
        printf("Something wrong");
    }

    return 0;
}