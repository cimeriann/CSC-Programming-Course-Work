#include <stdio.h>
#include <string.h>
// struct card {
//     char *face;
//     char *suit;
// };
// struct employee
// {
//     /* data */
//     char firstName[20];
//     char lastName[20];
//     unsigned int age;
//     char gender;
//     double hourlySalary;
// };
// //self referential structures
// // a variable of struct type cannot be declared in the definition
// // of that same struct type
// struct employee2 {
//     char firstName[20];
//     char lastName[20];
//     unsigned int age;
//     char gender;
//     double hourlySalary;
//     //struct employee2 teamLeader;//this yields an error
//     struct employee2 *teamLeaderPtr;
// };
// //The code below:
// // declares aCard to be of type struct card
// // declares  deck to be an array with 52 elements of type struct card
// // declares *cardPtr to be a pointer to struct card
// struct card aCard, deck[52], *cardPtr;
// //the same as doing this:
// struct card aCard;
// struct card deck[52];
// struct card *cardPtr;

//MIGHT AS WELL HAVE DONE THIS INSTEAD
struct card {
    char *face;
    char *suit;
} aCard, deck[52], *cardPtr;

//initializing aCard

struct card aCard = {
    "Three", 
    "Hearts",
};

//i could also do something like this
//struct card anotherCard = aCard;//this is generating an error
// the code above doesnt work because it is not possible to assign a struct type 
// directly to another type using the assignment operator
// // This is the way to go: 
//strcpy(anotherCard.suit, aCard.suit);
//strcpy(anotherCard.face, aCard.face);//also didnt work
int main (void){
    struct card anotherCard;

    anotherCard.face = malloc(strlen(aCard.face) + 1);
    strcpy(anotherCard.face, aCard.face);

    anotherCard.suit = malloc(strlen(aCard.suit) + 1);
    strcpy(anotherCard.suit, aCard.suit);
    //turns out that i needed the main function to assign the variables
}


//Accessing structure members with .(dot operator) and ->(structure pointer operator or the arrow operator)


