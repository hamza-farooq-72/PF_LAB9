
#include<iostream>
using namespace std ;
void disLocation(char word[]) ;


main(){


    char word[5] ;
    cout<<"Enter a word: ";
    cin>> word ;
    disLocation(word) ;

}
void disLocation(char word[]){

for(int x = 0; word[x] !='\0' ; x++){

cout<< word[x] << " found at position " << x <<"\n";
}

}