
    #include<iostream>
    using namespace std ;



    main(){

     string sentence;


       
    
    cout<<"Enter a string: ";
    getline(cin, sentence) ;
    // int length = sentence.length() ;
            cout<<"String with vowels removed: ";
            for(int x = 0 ; sentence[x] != '\0'; x++){
                char letter = sentence[x] ;

                if((letter =='a') || (letter =='e') || (letter =='i') || (letter =='o') || (letter =='u') || (letter =='A') || (letter=='E') || (letter =='I') || (letter =='O') || (letter =='U')){

                        cout<<"";
                }
                else {
                    cout<< letter ;
                      

                }
                
            }
    }