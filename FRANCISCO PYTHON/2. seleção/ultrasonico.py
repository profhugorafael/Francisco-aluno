# trago a capacidade de gerar números aleatórios
import random
import time
from turtle import pos; 

def printLine(robotPosition, side) :

    black_char = u'\u2588'
    robot = f'{black_char}{black_char}'
    print(''.center(26,'.'))

    if int(robotPosition)%3 == 0:
        print(robot.rjust(26, '.'))
        print(robot.rjust(26, '.'))
    elif side == 'direita':
        print('a')
    else:
        print(robot.center(26, '.'))
        print(robot.center(26, '.'))

    print(''.center(26,'.'))
    time.sleep(0.8)

tamanho = int( input('qual e o tamanho da pista? ') )
# leio o tamanho e salvo como inteiro

# criando obstaculo
obstaculo = random.randint(0, tamanho)
# gero a poição do obstaculo baseado no tamanho da pista

print(f'O tamanho da pista é {tamanho} com obstaculo em {obstaculo}')

# para cada i = 0 até o tamanho
for posicaoRobo in range(tamanho):
    printLine(posicaoRobo, 'seguir')
   