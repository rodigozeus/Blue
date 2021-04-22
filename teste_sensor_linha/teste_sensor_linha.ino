/*
 
  Código criado para testar leituras analógicas de sensores de linha (reflexividade baseados em infravermelho)
  Especificamente para 2 sensores posicionados em linha.
 
 */

//Define os pinos em que os 2 sensores estão conectados

#define direita A5
#define esquerda A0



//Cria as variáveis para armazenamento das leituras

int sensor_D;
int sensor_E;



void setup() {

  //inicializa todos os sensores como input
  pinMode(direita, INPUT);
  pinMode(esquerda, INPUT);
  
  //inicializa comunicação com o computador
  Serial.begin(9600); 
}





void loop() {

//Lê e armazena as leituras dos 2 sensores
sensor_D = analogRead(direita);
sensor_E = analogRead(esquerda);


//Informa ao computador via serial a leitura de cada um

  
  Serial.print(" / Esquerda:");
  Serial.print(sensor_E);
  
  Serial.print(" / Direita:");
  Serial.println(sensor_D);


}
