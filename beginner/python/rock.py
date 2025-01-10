"""
Ataque Aéreo vs. Pedra: Neste caso, 
o jogador com Ataque Aéreo derrota o jogador com Pedra por razões óbvias.

Pedra vs. Papel: Neste caso, 
o jogador com Pedra derrota o jogador com Papel, porque Pedra dói mais.

Papel vs. Ataque Aéreo: 
Aqui Ataque Aéreo vence porque Ataque Aéreo sempre vence e Papel é patético.

Papel vs. Papel: 
Nesta variação, ambos os jogadores vencem porque Papel é inútil e ninguém enfrentando Papel pode perder.

s
Neste caso, não há vencedor porque depende do que os jogadores decidem fazer com a Pedra e geralmente não fazem nada no final.

Ataque Aéreo vs. 
Ataque Aéreo: Quando isso acontece, todos os jogadores perdem devido à Aniquilação Mútua.
"""

#inputs
count = int(input())

while count > 0:
    player1 = input()
    player2 = input()

    #Airstirker vs Rock
    if player1 == "ataque" and player2 == "pedra":
        print("Jogador 1 venceu")
    elif player1 == "pedra" and player2 == "ataque":
        print("Jogador 2 venceu")

    #Rock vs paper
    elif player1 == "pedra" and player2 == "papel":
        print("Jogador 1 venceu")
    elif player1 == "papel" and player2 == "pedra":
        print("Jogador 2 venceu")

    #Paper vs AirStriker
    elif player1 == "ataque" and player2 == "papel":
        print("Jogador 1 venceu")
    elif player1 == "papel" and player2 == "ataque":
        print("Jogador 2 venceu")

    #Paper vs AirStriker
    elif player1 == "ataque" and player2 == "papel":
        print("Jogador 1 venceu")
    elif player1 == "papel" and player2 == "ataque":
        print("Jogador 2 venceu")

    #Paper vs Paper
    elif player1 == "papel" and player2 == "papel":
        print("Ambos venceram")
    elif player1 == "papel" and player2 == "papel":
        print("Ambos venceram")

    #Rock vs Rock
    elif player1 == "pedra" and player2 == "pedra":
        print("Sem ganhador")
    elif player1 == "pedra" and player2 == "pedra":
        print("Sem ganhador")
        
     #airstriker vs airstriker
    elif player1 == "ataque" and player2 == "ataque":
        print("Aniquilacao mutua")
    elif player1 == "ataque" and player2 == "ataque":
        print("Aniquilacao mutua")
    
    #decrement 
    count = count - 1
