/*==============================================================================================================
DEFININDO CADA FUNÇÃO:
==============================================================================================================*/

void frente(int velocidade){
  
  //define a velocidade de cada motor
  motor_esquerdo.setSpeed(velocidade);
  motor_direito.setSpeed(velocidade);
  
  //manda o motor girar pra frente (FORWARD)
  motor_esquerdo.run(FORWARD);
  motor_direito.run(FORWARD);
 
}

void tras(int velocidade){

  //define a velocidade de cada motor
  motor_esquerdo.setSpeed(velocidade);
  motor_direito.setSpeed(velocidade);
  
  //manda o motor girar pra tras (BACKWARD)
  motor_esquerdo.run(BACKWARD);
  motor_direito.run(BACKWARD);

}


void para(){

  //manda os motores pararem (RELEASE)
  motor_esquerdo.run(RELEASE);
  motor_direito.run(RELEASE);
  
}

void esperar_botao() {
  pinMode(10, INPUT_PULLUP);
  while (true) {
    if (!digitalRead(10)) {break;}
  }
}
