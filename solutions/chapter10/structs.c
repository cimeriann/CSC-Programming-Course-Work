#include <stdio.h>

struct card{
    char *face; 
    char *suit;
};

int main (void){
    struct card myCard;
    //initializing memebers
    myCard.face = "Jack";
    myCard.suit = "Spades";

    struct card *myCardPtr = &myCard;
    
    printf("The face of my card is %s\n", (*myCardPtr).face,
            "The suit of my card is %s", myCardPtr->suit);

    printf("%s of %s\n%s of %s\n%s of %s\n", myCard.face, myCard.suit,
    myCardPtr->face, myCardPtr->suit, (*myCardPtr).face, (*myCardPtr).suit);
}