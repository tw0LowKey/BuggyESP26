#include <mbed.h>

Serial hm10(PA_11, PA_12); //UART6 TX,RX

DigitalOut led(D5);

bool c; //the character we want to receivesds

int main() {
  hm10.baud(9600);

  while(1) {
    if(hm10.readable()){//read a single character
        if(c == false ){
            led = 1;
        }
        else if(c == true){
            led = 0;
        }
    }
  }
}
