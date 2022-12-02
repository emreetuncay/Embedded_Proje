#include <main.h>
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4000000)

void main()
{
   char dizi[]= {63,6,91,79,102,125,7,127,111};
   int x=0;
   set_tris_b(0b00000111);
   set_tris_c(0b00000000);
   output_c(0b00000000);
   output_c(dizi[0]); //Ekran 0 ba�las�n



   for(;;)
   {
     if(input(pin_b0) == 1) // art�rma butonu
    {
         x++;
         output_c(dizi[x]);
         delay_ms(500);
    }
     if(input(pin_b1) == 1) // azaltma butonu
    {
         x--;
         output_c(dizi[x]);
         delay_ms(500);
    }
     if(input(pin_b2) == 1) // s�f�rla butonu
    {
         x=0;
         output_c(dizi[0]);
        
    }
   }

}
