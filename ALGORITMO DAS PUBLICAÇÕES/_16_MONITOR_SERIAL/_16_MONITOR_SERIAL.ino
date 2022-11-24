/*
****************************************************
  Título:                       #16 MONITOR SERIAL
  DATA:                           20/11/2022
  MANTIDO POR:              ASTRON MAKER/Wellington S. O.
  INSTAGRAM:                      @astronmaker
  EMAIL:                      astronmaker@gmail.com
  GITHUB:                 https://github.com/well1ngt0nso
  VERSÃO ARDUINO IDE:                1.8.19
  DESCRIÇÃO:       Como utilizar o monitor serial,
                   simples exemplo de uso
*****************************************************
*/void setup() {
  // declaração de variáveis de tipo ponto flutuante e atribuição de um valor
  float temp = 25.7 ,
        pres = 3.4;
  /* Inicializando comunicação como velocidade de 9600, é necessário para que se
     estabeleça a conexão entre os dispositivos, nesse caso a placa e o computador*/
  Serial.begin(9600);

  // Plotando texto na tela, no caso o que estiver entre as aspas ""
  Serial.print("Temperatura: ");

  /* Plotando valor da variável temp em seguida, o "ln" no final possibilita
    a quebra de linha, começa plotar os dados em uma nova linha*/
  Serial.println(temp);

  // Plotando texto novamente na tela
  Serial.print("Pressão: ");

  // Plotando valor da variável pres
  Serial.print(pres);

}
void loop() {
}
