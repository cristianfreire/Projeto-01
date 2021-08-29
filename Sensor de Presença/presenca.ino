#define pPin 8

void setup(){
	Serial.begin(9600); // abre a porta serial a 9600 bps:
}

void loop(){
  	int detector_presenca = 0;
    
    detector_presenca = sensor_presenca();

    if(detector_presenca != 0){
        Serial.print(detector_presenca);
    }

  	delay(100);
}

// Funções

int sensor_presenca(){
    int sinalPir = digitalRead(pPin);

    return sinalPir;
}
