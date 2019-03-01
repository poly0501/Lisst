#include <stdio.h>
#include <time.h>

struct card {
char *name;
char *FIO;
int *RegNomer;
};
typedef struct card Card;

void fillDeck(Card *, char *[],char *[], int *[],int);
void shuffle(Card *,int);
void deal(Card *,int);

int main()
{
    int N,M;
M:    printf("How many person? (<=6)\nPerson:");
    scanf("%d",&N);
    //if(N>6){
      //  goto M;
    //}
//Card deck[N];
Card *deck;
char *FIO[] = { "Eliseeva P.E.","Gubanova K.D.","Kovalev D.A.","Nikonov N.A.", "Bondor L.E.","Kolosvetova O.V." };
char *name[] = { "BMW","Audi","Ferrari","Ford", "Hyundai","Tesla" };
int *RegNomer[] = {117,98,161,71,164,99};
deck =(Card*)malloc(N*sizeof(Card*));
//Card*abb = malloc(N*sizeof(Card*));
srand(time(NULL));
fillDeck(deck,FIO,name,RegNomer,N);
deal(deck,N);
return 0;
}

void fillDeck(Card *wDeck, char *wFIO[],char *wname[], int *wRegNomer[],int N){
int i;
for (i = 0; i < N; i++){
wDeck[i].name = wname[rand() % 6];
wDeck[i].FIO = wFIO[rand() % 6];
wDeck[i].RegNomer = wRegNomer[rand() % 6];
}
}

void deal(Card *wDeck,int N)
{
int i;
for (i = 0; i < N; i++)
printf("%8s - %s #%d\n", wDeck[i].FIO, wDeck[i].name,wDeck[i].RegNomer);
}
