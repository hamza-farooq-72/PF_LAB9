
    #include<iostream>
    #include<cmath>
    #include<iomanip>
    using namespace std ;


    void FindLargest(int n);

    main(){

    int n ;
    
    cout<<"Enter the number of elements: " ;
    cin>> n ;
       
    
    cout<<"Enter "<<n<< " numbers, one per line:"<<endl;
        
        FindLargest(n) ;
    }

        void FindLargest(int n){
                int num[100] , largestNum = 0  ;

            for(int x = 0; x < n ; x++ ){
                cin>> num[x] ;

                for(int y = x - 1 ; y  < n ; y--){
                  
                    if(largestNum >= num[x]){

                        largestNum  ;
                    }
                    else if(num[x] > largestNum){

                        largestNum = num[x] ;
                    }
                }

        }
                cout<< "The largest number entered is: " << largestNum ;
        }