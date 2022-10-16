#include<iostream>
#include<string>
using namespace std ;
int main (){
    string i ;
    int vowcounter = 0 ;
    int totalcounter = 0 ;
    int notvowcounter = 0 ;
    int alphacounter = 0 ;
    int digitcounter = 0 ;
    int L[16] = {0} ;
    int counterabc[28] = {0} ;
    int countersame[26] = {0} ;
    char A = 65 ;
    char a = 97 ;
    char Q = 65 ;
    char q = 97 ;

    while ( cin >> i )
{
    switch (i[0])
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        vowcounter = vowcounter + 1 ;
        totalcounter = totalcounter + 1 ;
        break ;
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        notvowcounter = notvowcounter + 1 ;
        totalcounter = totalcounter + 1 ;
        break ;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        digitcounter = digitcounter + 1 ;
        totalcounter = totalcounter + 1 ;
        break ;

        default:
        totalcounter = totalcounter + 1 ;
        break;
    }
    if (i.back() == ','||i.back() == '.'||i.back() == ':')
    {
        L[i.length()-1]++ ;
    }
    else if (i.length()>=15)
    {
        L[15]++ ;
    }
    else
    {
        L[i.length()]++ ;
    }

    
    switch ( i[0])
    {
        case 'a': case 'A':
        counterabc[0] = counterabc[0] + 1 ;
        break ;
        case 'b': case 'B':
        counterabc[1] = counterabc[1] + 1 ;
        break ;
        case 'C': case 'c':
        counterabc[2] = counterabc[2] + 1 ;
        break ;
        case 'd': case 'D':
        counterabc[3] = counterabc[3] + 1 ;
        break ;
        case 'E': case 'e':
        counterabc[4] = counterabc[4] + 1 ;
        break ;
        case 'F': case 'f':
        counterabc[5] = counterabc[5] + 1 ;
        break ;
        case 'G': case 'g':
        counterabc[6] = counterabc[6] + 1 ;
        break ;
        case 'H': case 'h':
        counterabc[7] = counterabc[7] + 1 ;
        break ;
        case 'I': case 'i':
        counterabc[8] = counterabc[8] + 1 ;
        break ;
        case 'J': case 'j':
        counterabc[9] = counterabc[9] + 1 ;
        break ;
        case 'K': case 'k':
        counterabc[10] = counterabc[10] + 1 ;
        break ;
        case 'L': case 'l':
        counterabc[11] = counterabc[11] + 1 ;
        break ;
        case 'M': case 'm':
        counterabc[12] = counterabc[12] + 1 ;
        break ;
        case 'N': case 'n':
        counterabc[13] = counterabc[13] + 1 ;
        break ;
        case 'O': case 'o':
        counterabc[14] = counterabc[14] + 1 ;
        break ;
        case 'P': case 'p':
        counterabc[15] = counterabc[15] + 1 ;
        break ;
        case 'Q': case 'q':
        counterabc[16] = counterabc[16] + 1 ;
        break ;
        case 'R': case 'r':
        counterabc[17] = counterabc[17] + 1 ;
        break ;
        case 'S': case 's':
        counterabc[18] = counterabc[18] + 1 ;
        break ;
        case 'T': case 't':
        counterabc[19] = counterabc[19] + 1 ;
        break ;
        case 'U': case 'u':
        counterabc[20] = counterabc[20] + 1 ;
        break ;
        case 'V': case 'v':
        counterabc[21] = counterabc[21] + 1 ;
        break ;
        case 'W': case 'w':
        counterabc[22] = counterabc[22] + 1 ;
        break ;
        case 'X': case 'x':
        counterabc[23] = counterabc[23] + 1 ;
        break ;
        case 'Y': case 'y':
        counterabc[24] = counterabc[24] + 1 ;
        break ;
        case 'Z': case 'z':
        counterabc[25] = counterabc[25] + 1 ;
        break ;
        case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case '0':
        counterabc[26]++ ; 
        break ; 
        default :
        counterabc[27] = counterabc[27] + 1 ;
        break ;
    }
    if( i.back() == ','|| i.back() == '.'|| i.back() == ':')
    {
        i.pop_back() ;
    }
    if ( i.front() >= 'A' && i.front() <= 'Z')
    {
        i.front() = i.front() + 32 ;
    }
    if ( i.back() >= 'A' && i.back() <= 'Z')
    {
        i.back() = i.back() + 32 ;
    }
    if ( i.front() == i.back() && i.length() > 1 )
    {
        countersame[i.front()-97]++ ;
    }
      
    
}
    
    
    alphacounter = vowcounter + notvowcounter ;
    cout << "Total number of words: "<< totalcounter << endl ;
    cout << "Total number of words starting with a vowel: "<< vowcounter << endl ;
    cout << "Total number of words not starting with a vowel, but with an alphabet: "<< notvowcounter << endl ;
    cout << "Total number of words started with an alphabet: "<< alphacounter << endl ;
    cout << "Total number of words started with a digit: "<< digitcounter << endl ;
    cout << "Distribution of words by word length: "<< endl ; 
    for( int n = 0 ; n <= 15 ; n++ )
    {
    if (n < 15)
    {
        cout << "L = " << n <<"  "; 
        cout << L[n] << endl ;
    }
    else cout << "L >= " << n <<" "<< L[n] << endl ;
    }
    cout << "Distribution of words by first letter: " << endl ;
    for( int n = 0 ; n < 26 ; n++ )
    {
        
        cout << A << "/" << a <<": ";
        cout << counterabc[n] << endl ;
        A++ ;
        a++ ; 
    }
    cout <<"0~9: " << counterabc[26]<<endl ;
    cout <<"Other: " << counterabc[27]<<endl ;
    cout << "Distribution of words whose first and last letters are the same: " << endl ;
    for( int n = 0 ; n < 26 ; n++ ){
    
        cout << Q << "/" << q <<": ";
        cout << countersame[n]<<endl ;
        Q++ ;
        q++ ;
    
    }
    return 0 ;
}