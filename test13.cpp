#include <iostream>
using namespace std;


int findSecondHighest(int numbers[],int size){
int highest = numbers[0];
int secondHighest = 0;
int value;
for(int i = 1; i < size; i++){
if(numbers[i]> highest){
    highest = numbers[i];
   

    }
    for(int i = 0; i < size; i++ ){
        if(numbers[i]> secondHighest && numbers[i]<highest){
    secondHighest = numbers[i];
    secondHighest<highest;
    /* if(highest > secondHighest){
        for (i= 1;i< size;i++){
        secondHighest= numbers[i];*/
    }
}

}return secondHighest;
}

 

int main() {
    int pee[] = {911,552, 3, 21, 558, 433, 546, 45,88,99};
    int size = 10;

    int result = findSecondHighest(pee, size);

    cout << "Het tweedehoogste getal is: " << result << endl;

    return 0;
} 
//comments
// for(int i = 1; i < size; i++ ){
        /*if(numbers[i]> secondHighest){
    secondHighest = numbers[i];
    secondHighest<highest;*/
   /* if(numbers[i] != highest){
        value = (numbers[i] );*/
        
        //&& numbers[i] >= secondHighest