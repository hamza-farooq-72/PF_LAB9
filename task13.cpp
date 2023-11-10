
    #include<iostream>
    using namespace std ;


    void JazzifyChords(string num[],int n);

    main(){

    int n ;
    
    cout<<"Enter the number of chords: " ;
    cin>> n ;
       
    
    cout<<"Enter  "<<n<< " chords, one per line: "<<endl;

    
        string num[n] ;
            
            for(int x = 0; x < n ; x++ ){
                cin>> num[x] ;
                }

                JazzifyChords(num,n) ;


    }

        void JazzifyChords(string num[],int n){
            string res;
            cout<<"Jazzified chords: [" ;
            for(int x = 0; x < n ; x++ ){
                    res = num[x] ;
                 string ans = num[x] ;
                        int a = 0; 
                            while(ans[a] != '\0'){
                                    a++ ;
                            }

                                if(ans[a - 1]!='7'){
                                res = res + "7" ;
                                }
                                if(x == (n-1)){
                                    cout<< res ;
                                    break;
                                }
                                cout<< res << ", " ;
            }
            cout<< "]" ;
        }
                                

