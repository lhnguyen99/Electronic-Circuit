#include <16f877a.h>
#fuses HS
#use delay (clock = 20M)
#define LED pin_B0
#define ON ouput_high
#define OFF output_low
int8 timer = 1000;
// -----------------------

void main()
{
   output_b(0b00000000);
   while (true)
   {
      ON (LED);
      delay_ms(timer);
      OFF (LED);
      delay_ms(timer);
   }
}
