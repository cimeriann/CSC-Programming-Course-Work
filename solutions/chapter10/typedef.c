//using typedef creates an alias(synonym) for a previously defined structure
//new instances of that struct can now be created using shorter syntax
//typedef can help with program portability and maintainability

//typedef struct card Card;

typedef struct {
    char *face;
    char *suit;
} Card;

Card deck[52];
//as opposed to doing this
struct card deck[52];

int main(void){

};