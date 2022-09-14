# Estrutura de Seleção

A partir de agora poderemos decidir se iremos ou não tomar uma determinada decisão no código.

```py
cafe = 199

if cafe > 200 :
  print('fazer cafe')
```

## Estrutura `if`

A esturtura `if` consistem em verificar uma condição, e somente se ela for verdadeira o bloco de código que está "dentro" será executado.

```py
if  condição :
  # executa se for verdade
```

## Estrutura `if-else`

é uma extensão do `if`, que só pode existir para pegar os casos nos quais a condição de um (ou mais) `if`'s não é satisfeita.

```py

if condição :
  # código se for verdade
else :
  # código se for falso
```

## Estrutura `elif`

O `elif` serve para melhorarmos nossa estrutura de código quando temos um `else` com um `if` dentro.

> `elif` = `else` + `if`

```py
if nota >= 7.0 :
  print('aprovado')
elif nota >= 4.0 :
  print('recuperacao')
else:
  print('reprovado')
```