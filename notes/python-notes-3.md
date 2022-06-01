# Operações e Operadores

## Operação módulo

Calcular o resto. `a mod b` retorna o resto de a por b

- 7 **(mod 3)** = 1
- 9 **(mod 2)** = 1
- 12 **(mod 3)** = 0
- 14 **(mod 3)** = 2

No código:

```py
resto = 14%3 # resto = 14 mod 3
print(resto)
```

Saída:
```
2
```

## Operador `+=`

### Altera o valor : 

```py
a = int(input('digite a: '))
a = 5 # altera pra 5
print(f'retorno: {a}')
```

```
digite a: 29
retorno: 5
```

### Atualiza o valor: 

```py
a = int(input('digite a: '))
a = a + 5 # acrescenta 5
print(f'retorno: {a}')
```

```
digite a: 29
retorno: 34
```

### Melhoria

```py
a = int(input('digite a: '))
a += 5 # acrescenta 5
print(f'retorno: {a}')
```

## Operador `-=`

```
a = a - 2
```

```py
a -= 2
```

A*=2 
A = A*2