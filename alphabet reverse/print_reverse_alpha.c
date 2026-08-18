#include <unistd.h>

void print_reverse_alpha(void)
{
    char letter;

    letter = 'Z';
    while(letter >= 'A')
    {
        write(1, &letter, 1);
        letter--;
    }
}

int main(void)
{
    print_reverse_alpha();
}
