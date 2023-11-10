
    #include<iostream>
    #include<cmath>
    #include<iomanip>
    using namespace std ;


    void calculateTotalResistance(int n);

    main(){

    int n ;
    
    cout<<"Enter the number of resistors in the series circuit: " ;
    cin>> n ;
       
    
    cout<<"Enter the resistance values (in ohms) of the "<<n<< " resistors, one per line:"<<endl;
        
        calculateTotalResistance(n) ;
    }

        void calculateTotalResistance(int n){

                float num[100] , sum = 0.00 ;

            for(int x = 0; x < n ; x++ ){
                cin>> num[x] ;

              sum = sum + num[x] ;
                }

        
                cout<< "The total resistance of the series circuit is " << sum <<fixed<<setprecision(2)  << " ohms.";
        }