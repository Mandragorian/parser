#include <iostream>
#include <string>

using namespace std;


bool parser(string& input)
{
   if ((input.size()==1)&&(input[input.size()-1]>=65)&&(input[input.size()-1]<=90))
      return true;
   else if ((input[input.size()-2]=='~')&&(input[input.size()-1]>=65)&&(input[input.size()-1]<=90))
   {
      input.replace(input.size()-2,2,"A");
      cout << input << endl;
      return parser(input);
   }
   else if ((input[input.size()-3]=='^')||(input[input.size()-3]=='v'))
      if((input[input.size()-1]>=65)&&(input[input.size()-1]<=90)&&(input[input.size()-2]>=65)&&(input[input.size()-2]<=90))
      {         
         //cout<<"MPIKA\n";
         input.replace(input.size()-3,3,"A");
         cout << input << endl;
         return parser(input);
      }
      else return false;
   else return false;

}



int main(int argc, char *argv[])
{
 
  string input="";
  

  cin >> input;
  

//cout << input<< endl ;
//cout << (int)input[input.size()-1] << endl;
//cout << input.size() << endl;

 if(parser(input)) cout <<"YES"<<endl;
 else cout <<"NO"<<endl;

 cout << input<<endl;

}
