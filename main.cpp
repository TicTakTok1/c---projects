#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int calculate()
{
  int x, y;
  char oper;

  cout << "Enter operator: +, -, *, /: ";
  cin >> oper;

  cout << "Enter two operands: ";
  cin >> x >> y;

  switch (oper)
  {
  case '+':
    cout << x << " + " << y << " = " << x + y;
    break;

  case '-':
    cout << x << " - " << y << " = " << x - y;
    break;

  case '*':
    cout << x << " * " << y << " = " << x * y;
    break;

  case '/':
    cout << x << " / " << y << " = " << x / y;
    break;

  default:
    cout << "Invalid operator";
    break;
  }
  return 0;
}
void * reverse(char *str) 
{
  int i, len;
  len = strlen(str);
  for (i=len;i>=0;i--) 
      printf("%c",str[i]);
  return 0;
  
}
void encrypt()
{
  int i;
  char str[75];
  cout <<"Please enter a string:\t";
  cin>>str;
  for(i=0; (i<75 && str[i]!='\0'); i++)
    str[i]=str[i]+2; // they key for encryption
    cout << "\nEncrypted string is: " << str<<endl;
}

void decrypt()
{
  int i;
  char str[75];
  cout <<"Please enter a string:\t";
  cin>>str;
  for(i=0; (i<75 && str[i]!='\0'); i++)
    str[i]=str[i]-2; // they key for encryption
    cout << "\nDecrypted string is: " << str<<endl;
}

int main(void)
{
  // calculate();
  // encrypt();
  // decrypt();
  // char a[] = "TickerTheGoat";
  // reverse(a);
  return 0;
}
