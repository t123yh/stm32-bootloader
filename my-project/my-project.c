#include <libopencm3/cm3/scb.h>

#define APP_ADDRESS	0x08008000

int main(void) {
    /* Set vector table base address. */
    SCB_VTOR = APP_ADDRESS & 0xFFFF;
    /* Initialise master stack pointer. */
    asm volatile("msr msp, %0"::"g"
        (*(volatile uint32_t *)APP_ADDRESS));
    /* Jump to application. */
    (*(void (**)())(APP_ADDRESS + 4))();
}
