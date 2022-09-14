# Estruturas de repetição em C

Toda estrutura de repetição tem que ter:
1. Inicialização
2. Verificação
3. Atualização

## Estrutura `while` ("Enquanto")

```c
while ( /*condição*/ ) {
  /*código*/
}
```

```c
int cont = 1; // inicialização

while( cont <= 10 ) { // verificação
  printf("%d\n", contador);
  cont++; // atualização
}
```

## Palavras-chave

* `break`: Interrompe o código

* `continue`: Pula a interação atual
