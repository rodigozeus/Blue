/*
 * Blue - Robô seguidor de linha sendo desenvolvido pelo aluno Gustavo Santos do Centro de Ensino Médio 03 do Gama sob orientação do Professor Rodrigo Damaceno
 */


//Biblioteca do Shield Ponte-H (esta plaquinha em cima do arduíno)
#include <AFMotor.h>

#define velocidade 100 //pode ser até 255

/*
==============================================================================================================
MAPEAMENTO DE HARDWARE:
==============================================================================================================*/

AF_DCMotor motor_esquerdo(4);
AF_DCMotor motor_direito(3);


/*
==============================================================================================================
CONFIGURAÇÃO:
==============================================================================================================*/
void setup() {

esperar_botao(); //essa função serve pra ele não executar o código de cara, pra evitar querer sair andando em cima da mesa conectado ao computador.
    
}


/*
==============================================================================================================
PROGRAMA PRINCIPAL:
==============================================================================================================*/
void loop() {

frente();
delay(5000);  //Espera 5 segundos (5000 milisegundos)
esquerda();
delay(2000);
direita();
delay(2000);
tras();
delay(5000);
para();
delay(10000);

}
