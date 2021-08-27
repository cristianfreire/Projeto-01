#include <MKRGSM.h>
#include &lt;Wire.h&gt;

// variaveis de requisição

bool VAR_REQ;
//

void setup(){

Wire.begin(); //inicia comunicação i2c

}



void loop(){

  Wire.beginTransmission(0x09); // Incio de comunicação com o escravo no endereço 0x09
  Wire.write(VAR_REQ); //requisição
  Wire.endTransmission(); // Comunicação encerrada  
  delay() //definição de um tempo

}
