#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 ;
    double b1 , b2 , b3 ; 
    
    for( a1 = 1 ; a1 <= 9 ; ++a1 ){
       
       for( a2 = 1 ; a2 <= 9 ; ++a2 ){
          if( a2 == a1 ) continue ; 
          
          for( a3 = 1 ; a3 <= 9 ; ++a3 ){
             if( a3 == a1 || a3 == a2 ) continue ; 
             
             for( a4 = 1 ; a4 <= 9 ; ++a4 ){
                if( a4 == a1 || a4 == a2 || a4 == a3 ) continue ; 
                
                for( a5 = 1 ; a5 <= 9 ; ++a5 ){
                   if( a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4 ) continue ; 
                   
                   for( a6 = 1 ; a6 <= 9 ; ++a6 ){
                      if( a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5 ) continue ; 
                      
                      for( a7 = 1 ; a7 <= 9 ; ++a7 ){ 
                         if( a7 == a1 || a7 == a2 || a7 == a3 || a7 == a4 || a7 == a5 || a7 == a6 ) continue ; 
                         
                         for( a8 = 1 ; a8 <= 9 ; ++a8 ){ 
                            if( a8 == a1 || a8 == a2 || a8 == a3 || a8 == a4 || a8 == a5 
                                || a8 == a6 || a8 == a7 ) continue ; 
                            
                            for( a9 = 1 ; a9 <= 9 ; ++a9 ){ 
                               if( a9 == a1 || a9 == a2 || a9 == a3 || a9 == a4 || a9 == a5 
                                   || a9 == a6 || a9 == a7 || a9 == a8 ) continue ;
                               b1 = static_cast<double>(a1) / (10 * a2 + a3) ;
                               b2 = static_cast<double>(a4) / (10 * a5 + a6) ;
                               b3 = static_cast<double>(a7) / (10 * a8 + a9) ; 
                               if((b1 + b2 + b3) > 1 - 0.0001 && (b1 + b2 + b3) < 1 + 0.0001 )
                               cout << setw(2) << a1 << setw(6) << a4 << setw(6) << a7 << "\n" 
                                    << "--- + --- + --- =  1\n"
                                    << a2 << setw(2) << a3 << setw(4) << a5 << setw(2) << a6
                                    << setw(4) << a8 << setw(2) << a9 << "\n\n" ;
                            }
                         }
                      }
                   }
                }
             }
          }
       }
    }             
    
    return 0 ;
}

        
