#include "bsp.h"

void main()
{
    System_Init();

    GPIO_Init();
    while (1)
    {
        GCC_HALT();
    }
}
