#include<stdio.h>
//#include <stdlib.h>
int mario_x=8;
int mario_y=1;
int coin=0,coin_taken=0;
int bug_x=8,bug_y=6;
int coin_x=5,coin_y=5;
char input;
char map[10][20];
void mariomap(){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){  //empty space loop
            map[i][j]=' ';
        }
    }
    for(int j=0;j<20;j++){
        map[0][j]='-';     //top and bottom walls loop
        map[9][j]='-';
    }
    for(int i=0;i<20;i++){
        map[i][0]='|';    //left and right walls
        map[i][19]='|';
    }
    map[4][19]=' ';  //Exit gate
    map[mario_x][mario_y]='M';  //Mario posistion
    map[bug_x][bug_y]='*';    //Bug position
    map[coin_x][coin_y]='@';    //coin position

    for(int i=0;i<10;i++){
        for (int j=0;j<20;j++){
            printf(" %c",map[i][j]);
        }
        printf("\n");
    }
    
    }
    //function for movement of mario
    void moveplayer(char input){ 
       
        if(input=='S' || input == 's'){
            mario_x++;
        }
        if(input =='A'||input=='a'){
            mario_x--;
        }
        if(input =='W'||input=='w'){
            mario_y--;
        }
    }
    //function for collision with bugs and coins
    void collision(){
        if(mario_x== bug_x && mario_y==bug_y){
            printf("Game Over...");
        }
        if(mario_x ==coin_x && mario_y==bug_y && coin_taken==0){
            printf("Coin @ collected.\n");
             coin++;
             coin_taken=1;
        }
    }
int main(){
    printf("\nStarting Mario Game\n");
    printf("\nUse keys to move forward:\n");
    printf("S -> To move Forward.\n");
    printf("A -> To move Backward.\n");
    printf("W -> To Jump.\n");
    printf("\n");
    printf("M ITS YOUUUU....");
    printf("- -> WALLS\n");
    printf("= -> PLATFORM\n");
    printf("@ -> COINS\n");
    printf("* -> BUGS\n");
    printf("\n");
    printf("-----RULES OF THE GAME-----\n");
    printf("1. * you touch it,you die,no revive 🙁Sorry\n");
    printf("2. @ collect coins to win,cannot exit without all coins.\n");
    printf("3. You can only stand on wall or platform or else you fall directly to ground.\n");
    printf("\n");
    mariomap();
    /*while(1){
        mariomap();
        //system("clear");
        scanf("%c",&input);
        moveplayer(input);
        mariomap();
    }*/
 return 0;
}