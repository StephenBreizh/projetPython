import sys

me = int(input("combien de ml de liquide veut-tu ?\n"))  # afficher la premiere question avec saisie mise dans la variable me
# afficher la deuxieme question avec saisie mise dans la variable bo
bo = int(input("combien de mg par ml veut-tu pour tes booster ? (nous avons du 3mg, 6mg, 9mg ou du 12mg par ml)\n"))  


if bo == 3:  # si bo est strictement égale à 3
    ba = 0.73 * me  # me multiplier par 0.73 attribuer à la variable ba
    bo = 0.15 * me  # me multiplier par 0.15 attribuer à la variable bo
    ar = 0.12 * me  # me multiplier par 0.12 attribuer à la variable ar

elif bo == 6:  # si bo est strictement égale à 6
    ba = 0.58 * me  # me multiplier par 0.58 attribuer à la variable ba
    bo = 0.30 * me  # me multiplier par 0.30 attribuer à la variable bo
    ar = 0.12 * me  # me multiplier par 0.12 attribuer à la variable ar

elif bo == 9:  # si bo est strictement égale à 9
    ba = 0.43 * me  # me multiplier par 0.43 attribuer à la variable ba
    bo = 0.45 * me  # me multiplier par 0.45 attribuer à la variable bo
    ar = 0.12 * me  # me multiplier par 0.12 attribuer à la variable ar

elif bo == 12:  # si bo est strictement égale à 12
    ba = 0.28 * me  # me multiplier par 0.28 attribuer à la variable ba
    bo = 0.60 * me  # me multiplier par 0.60 attribuer à la variable bo
    ar = 0.12 * me  # me multiplier par 0.12 attribuer à la variable ar

else:  # autrement
    print("je n'ai pas ce que tu me demande en stock")  # afficher la réponse si aucune des conditions n'est remplies
    sys.exit(1)

print(f"il te faut {ba}ml de base + {bo}ml de booster + {ar}ml d'arome")  # afficher le retour de la commande