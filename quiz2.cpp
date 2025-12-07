#include <iostream>

using namespace std;

int main (){
  int n;
  int ticketcount;
  double price;
  double totalrevenue;
   double  revenue;

  cout << " Enter the numbers of routes : ";
  cin >> n ;

  for(int i=1; i<=n; i++){
  cout <<" \n Route "<<i<< ":"<<endl;

  cout <<" Enter the ticket count : ";
  cin >> ticketcount;

   cout <<" Enter the price per ticket : ";
   cin >> price;
 
   revenue = ticketcount * price;

   if(ticketcount > 120){
    cout << " Route is busy " <<endl;
   }
    cout << " Revenue for this route is = "<< revenue <<endl;

    totalrevenue += revenue;


  }
     cout << "Total revenue for all routes is = " << totalrevenue <<endl;

 return 0;
}