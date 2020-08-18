#include<stdio.h>
void display(); // Function Prototype

int main() {
    int a;
    printf("Initializing display function\n");
    display();  //Function call
    printf("Display function finished\n");
    return 0;
}

// Function defination
void display() {
    printf("This is display\n");
}

//****We can call a function in inderect way****

// #include<stdio.h>
// void GoodMorning();
// void GoodAfterNoon();
// void GoodNight();

// int main() {

//     GoodMorning();
//     return 0;
// }

// void GoodMorning(){
//     printf("Good morning Shubham\n");
//     GoodAfterNoon();
// }

// void GoodAfterNoon(){
//     printf("Good after noon Shubham\n");
//     GoodNight();
// }

// void GoodNight(){
//     printf("Good night Shubham\n");
// }