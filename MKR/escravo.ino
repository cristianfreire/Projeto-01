#include <MKRGSM.h>
#include &lt;Wire.h&gt;

// variaveis de requisição
bool set;
bool VAR_REQ;
//
void setup(){

  Wire.begin(); //inicia comunicação i2c
  Wire.onReceive(set_dados);   //chamada da função 'set_dados'
}

void loop() {
  delay(100);
}


void set_dados(){
  set = Wire.read();

  if(){
    //leitura dos sensores
    }
  
  
  }
