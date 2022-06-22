# Lista de exercícios

## Problema 1 (🐍`python`)

Faça um programa que apresente todos os números, de 45 até 22, pulando (caindo) de 3 em 3 nessa sequência:

exemplo:
```
45, 42, 39, 36, ...
```

⚠️ O 22 deve está incluso na sequência, caso apareça nos pulos de 3 em 3.

## Problema 2 (🐍`python`)

Faça um programa que receba um valor de `inicio`, um valor valor de `termino` e um valor de `passo`.

O seu programa deve apresentar uma sequencia começando pelo `inicio`, terminando na `entrada` e dando pulos de `passo` em `passo`.

|Entradas|Saídas|
|:-|-:|
|Inicio: 10 <br> Termino: 23 <br> Passo: 2|10 <br> 12 <br> 14 <br> 16 <br> 18 <br> 20 <br> 22|
|Inicio: 45 <br> Termino: 22 <br> Passo: 3|45 <br> 42 <br> 39 <br> 36 <br> 33 <br> 30 <br> 27 <br> 24 |

⚠️ **Observação:** O valor do passo deve ser interpretado pelo próprio programa, se será uma sequência crescente ou decrescente.

discussão
```
fim - começo menor que zero
14 - 20 = - (20 - 14) = -6
```


## Problema 3 (😺 `scratch`)

Objetivo: Jogo com inimigos.

## Etapa 1 - Preencher o cenário

1. Adicione um **personagem principal**. <br>
2. Adicione um **cenário** que seja baseado em plataforma. <br>
3. Adicione **2 inimigos** que possam se movimentar no cenário.

## Etapa 2 - Movimento do personagem principal

1. Torne seu personagem principal capaz de andar para frente e para traz (tanto em WASD quando em setinhas)
2. Adicione o pulo ao seu personagem. Cuidado, ele deve pular e retornar ao chão automaticamente.
3. Adicione um movimento repetivo para seus inimigos.

## Etapa 3 - Reconhecendo colisões

1. Se colidir com um inimigo, deve parar o jogo. 
2. Se colidir com um inimigo por cima, nada deve acontecer.
3. Se colidir com um inimigo por cima, deve dar outro pulo na mesma direçao.

⚠️`WASD` são teclas do teclado de letras que podem ser usadas como movimentação

```
W - frente
A - direita
S - trás
D - esquerda
```