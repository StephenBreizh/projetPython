#include <stdio.h>

int main(void)
{
    float ba = 0;//initialisation de la variable flottante ba
    float bo = 0;//initialisation de la variable flottante bo
    float ar = 0;//initialisation de la variable flottante ar
    float me = ba + bo + ar;//initialisation de la variable flottante me à qui on attribue les variables ba + bo + ar

    printf("combien de ml de liquide veut-tu ?\n");//on affiche la premier question
    scanf("%f", &me);//saisie de la réponse

    printf("combien de mg par ml de booster veut-tu ? (nous avons du 3mg, 6mg, 9mg ou du 12mg par ml)\n");//on affiche la deuxieme question
    scanf("%f", &bo);//saisie de la réponse

    if (bo == 3)//si bo est strictement égale à 3
    {
        ba = 0.73 * me;//me multiplier par 0.73 attribuer à la variable ba
        bo = 0.15 * me;//me multiplier par 0.15 attribuer à la variable bo
        ar = 0.12 * me;//me multiplier par 0.12 attribuer à la variable ar
    }

    else if (bo == 6)//si bo est strictement égale à 6
    {
        ba = 0.58 * me;//me multiplier par 0.58 attribuer à la variable ba
        bo = 0.30 * me;//me multiplier par 0.30 attribuer à la variable bo
        ar = 0.12 * me;//me multiplier par 0.12 attribuer à la variable ar
    }
    else if (bo == 9)//si bo est strictement égale à 9
    {
        ba = 0.43 * me;//me multiplier par 0.43 attribuer à la variable ba
        bo = 0.45 * me;//me multiplier par 0.45 attribuer à la variable bo
        ar = 0.12 * me;//me multiplier par 0.12 attribuer à la variable ar
    }
    else if (bo == 12)//si bo est strictement égale à 12
    {
        ba = 0.28 * me;//me multiplier par 0.28 attribuer à la variable ba
        bo = 0.60 * me;//me multiplier par 0.60 attribuer à la variable bo
        ar = 0.12 * me;//me multiplier par 0.12 attribuer à la variable ar
    }
    else//autrement
    {
        printf("je n'ai pas ce que tu demande en stock");//afficher la réponse si aucune des conditions n'est remplies
        return 1;
    }
    printf("il te faut %fml de base + %fml de booster + %fml d'arome", ba, bo, ar);//afficher le retour de la commande
}