int valor=0; //Inicia a variável

void setup()
{
	Serial.begin(9600); //Velocidade que será captado o sinal
   	pinMode(A0, INPUT); //Pino que receberá o sinal
}

void loop()
{
	valor = analogRead(A0); //Coleta o sinal da luminosidade
}