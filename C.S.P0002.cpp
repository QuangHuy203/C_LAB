#include <iostream>
#include <conio.h>
using namespace std;

/* strings at index 0 is not used, it is to make array 
 indexing simple */
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen "
               }; 
  
/* strings at index 0 and 1 are not used, they're to 
 make array indexing simple */ 
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety "
               }; 
  
// n is 1_ or 2_ digit number 
string numToWords(int n, string s){ 
    string str = ""; 
    // if n is more than 19, divide it 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    // if n is non-zero 
    if (n) 
        str += s; 
    return str; 
} 
  
// Function to print a given number in words 
string convertToWords(long n) 
{ 
    // stores word representation of given number n 
    string out; 
  
    // handles digits from one hundred thousand and below
    out += numToWords(((n / 1000) % 100), "thousand "); 
  
    // handles digit at hundreds places
    out += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
    // handles digits at ones and tens places
    out += numToWords((n % 100), ""); 
  
    return out; 
} 
  
// Driver code 
int main() 
{ 
    // handles upto 5 digit number 
    char choice;
    long n;
    do{
	   cout << "Enter a number: ";
	   cin >> n;
	   
       // convert given number in words 
       cout << "\nThe converted string: ";
       cout << convertToWords(n) << endl; 
       choice=getch();
    }while(choice!=27);
    return 0; 
} 
