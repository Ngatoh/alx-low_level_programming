#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - generates a random valid password for 101-crackme
 *
 * Return: a pointer to the generated password
 */
char *generate_password(void)
{
    char *password = malloc(9 * sizeof(char)); /* 8 characters + null byte */
    int i;

    if (!password)
        return NULL;

    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        int rand_num = rand() % 62;

        if (rand_num < 26)
            password[i] = rand_num + 'a';
        else if (rand_num < 52)
            password[i] = rand_num - 26 + 'A';
        else
            password[i] = rand_num - 52 + '0';
    }

    password[i] = '\0';

    return password;
}

/**
 * main - entry point, generates a random password for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
    char *password = generate_password();

    printf("%s\n", password);

    free(password);

    return 0;
}
