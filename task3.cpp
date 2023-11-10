


#include<iostream>
using namespace std ;
void shifter(string word) ;


main(){


    string word ;
    cout<<"Enter a string: ";
     getline(cin,word) ;
    shifter(word) ;

}
void shifter(string word){
cout<<"Shifted String: ";
for(int x = 0 ; word[x] != '\0' ; x++){
int asciicode ;
    char character = word[x] ;
       asciicode = character ;
       
       if((asciicode>=65 && asciicode<90) || (asciicode >= 97 && asciicode < 122)){
        asciicode++ ;
        character = asciicode ;
         cout << character ;
       }
       if(asciicode == 90){
        asciicode = 65 ;
        character = asciicode ;
        cout<< character ;
       }
       else if(asciicode == 122){
        asciicode = 97 ;
         character = asciicode ;
        cout<< character ;
       }
       else if(asciicode == 32){
        cout<< " "; 
       }
}
}