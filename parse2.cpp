#include <iostream>
#include <string>

using namespace std;


bool isLetter(char check)
{
   if((check>=65)&&(check<=90))
      return true;
   else return false;
}


bool parser(string& input)
{

   if ((input.size()==1)&&(isLetter(input[0])))
      return true;
   else 
   {
      for(int i=0;i<input.size();i++)
      {
         if((input[i]=='~')&&(isLetter(input[i+1])))
         {
            input.replace(i,2,"A");
	    return parser(input);
	 }
	 else if((input[i]=='^')&&(i+2<=input.size())&&(isLetter(input[i+1])&&(isLetter(input[i+2]))))
         {
	 input.replace(i,3,"A");
         cout << input << " "<< i<< "\n";
	 return parser(input);
	 }
         else if((input[i]=='v')&&(i+2<=input.size())&&(isLetter(input[i+1])&&(isLetter(input[i+2]))))
         {
         input.replace(i,3,"A");
         cout << input << " "<< i<< "\n";
         return parser(input);
         }

      }
   }
}







int main (int argc, char *argv[])
{
  string input="";

  cin >> input;

  if(parser(input)) cout <<"YES"<<endl;
  else cout <<"NO"<<endl;
}

