

#include<iostream>
using namespace std ;
void reverser(char word[]) ;


main(){


    char word[100] ;
    cout<<"Enter a string: ";
    cin >> word ;
    reverser(word) ;

}
void reverser(char word[]){
int size = sizeof(word) / sizeof(word[0]);
cout<<"Reversed String: ";
for(int x = size ; x >= 0 ; x--){

cout << word[x] ;
}
}

