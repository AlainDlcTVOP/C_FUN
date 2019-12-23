#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define WAVELENGTH 35
#define PERIOD .1

int main()
{
    float graph, s, x;

    for (graph = 0; graph < 2 * PI; graph += PERIOD)
    {
        s = cos(graph);
        s += 1.0; /* compensate for negative values */
        for (x = 0; x < s * WAVELENGTH; x++)
            putchar('*');
        putchar('\n');
    }
    return (0);
}