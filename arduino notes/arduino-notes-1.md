# Introdução ao Arduino

O nosso código base em arduino é dividido em duas grandes áreas:

```c
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

## Setup

É usada para configurar nosso projeto antes dele ser iniciado.

## Loop

É usada para processos que devem repetir durante ativação do projeto.

## Funções

Funções são subprogramas e toda nossa programação em arduino é baseada no uso de funções e subprogramas.

## Definições

Por vezes iremos definir certos valores para facilitar o nosso uso ao longo do código, similar a configuração inicial.

```c
#define RODA_FRENTE_DIR 4
#define RODA_FRENTE_ESQ 5
#define RODA_TRAS_DIR 6
#define RODA_TRAS_ESQ 7
```
## Bibliotecas

Bibliotecas são conhecimentos que adicionamos ao nosso programa, quando vamos adicionar um novo módulo ao projeto, precisamos também buscar a biblioteca associada a este módulo para podermos aplicar.

1. Exemplo: Roda da marca XYZ
2. Busca na documentação o nome da biblioteca e baixa
3. Insere no projeto através do `#include`