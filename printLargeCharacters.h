 
#ifndef LARGE_CHAR_PRINTER_H
#define LARGE_CHAR_PRINTER_H

#include <mmsystem.h>
//#include "MMSystem.h"
#include <Windows.h>
using namespace std;


void printLargeCharacter(char character) {
	PlaySound(TEXT("./assets/alphabets/Cocomelon .wav"),NULL, SND_SYNC);
    if (character == 'A') {
    	cout <<"A" <<endl;
    	PlaySound(TEXT("./assets/alphabets/A.wav"),NULL, SND_SYNC);
        cout << "  *  \n * * \n*****\n*   *\n*   *\n*   *\n" << endl;
    } else if (character == 'B') {
    	    PlaySound(TEXT("./assets/alphabets/B.wav"),NULL, SND_SYNC);
        cout << "**** \n*   *\n*   *\n**** \n*   *\n*   *\n**** " << endl;
    } else if (character == 'C') {
    	PlaySound(TEXT("./assets/alphabets/C.wav"),NULL, SND_SYNC);
        cout << " *** \n*   *\n*    \n*    \n*    \n*   *\n *** " << endl;
    } else if (character == 'D') {
    	PlaySound(TEXT("./assets/alphabets/D.wav"),NULL, SND_SYNC);
        cout << "**** \n*   *\n*   *\n*   *\n*   *\n*   *\n**** " << endl;
    } else if (character == 'E') {
    	PlaySound(TEXT("./assets/alphabets/E.wav"),NULL, SND_SYNC);
        cout << "*****\n*    \n*    \n**** \n*    \n*    \n*****" << endl;
    } else if (character == 'F') {
    	PlaySound(TEXT("./assets/alphabets/F .wav"),NULL, SND_SYNC);
        cout << "*****\n*    \n*    \n**** \n*    \n*    \n*    " << endl;
    } else if (character == 'G') {
    	PlaySound(TEXT("./assets/alphabets/G .wav"),NULL, SND_SYNC);
        cout << " ****\n*    \n*    \n* ***\n*   *\n*   *\n *** " << endl;
    } else if (character == 'H') {
    	PlaySound(TEXT("./assets/alphabets/H.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n*   *\n*****\n*   *\n*   *\n*   *" << endl;
    } else if (character == 'I') {
    	PlaySound(TEXT("./assets/alphabets/I.wav"),NULL, SND_SYNC);
        cout << " *** \n  *  \n  *  \n  *  \n  *  \n  *  \n *** " << endl;
    } else if (character == 'J') {
    	PlaySound(TEXT("./assets/alphabets/J.wav"),NULL, SND_SYNC);
        cout << "  ***\n   * \n   * \n   * \n   * \n*  * \n **  " << endl;
    } else if (character == 'K') {
    	PlaySound(TEXT("./assets/alphabets/K.wav"),NULL, SND_SYNC);
        cout << "*   *\n*  * \n* *  \n**   \n* *  \n*  * \n*   *" << endl;
    } else if (character == 'L') {
    	PlaySound(TEXT("./assets/alphabets/L.wav"),NULL, SND_SYNC);
        cout << "*    \n*    \n*    \n*    \n*    \n*    \n*****" << endl;
    } else if (character == 'M') {
    	PlaySound(TEXT("./assets/alphabets/M.wav"),NULL, SND_SYNC);
        cout << "*   *\n** **\n* * *\n*   *\n*   *\n*   *\n*   *" << endl;
    } else if (character == 'N') {
    	PlaySound(TEXT("./assets/alphabets/N.wav"),NULL, SND_SYNC);
        cout << "*   *\n**  *\n* * *\n*  **\n*   *\n*   *\n*   *" << endl;
    } else if (character == 'O') {
    	PlaySound(TEXT("./assets/alphabets/O.wav"),NULL, SND_SYNC);
        cout << " *** \n*   *\n*   *\n*   *\n*   *\n*   *\n *** " << endl;
    } else if (character == 'P') {
    	PlaySound(TEXT("./assets/alphabets/P.wav"),NULL, SND_SYNC);
        cout << "**** \n*   *\n*   *\n**** \n*    \n*    \n*    " << endl;
    } else if (character == 'Q') {
    	PlaySound(TEXT("./assets/alphabets/Q.wav"),NULL, SND_SYNC);
        cout << " *** \n*  * \n* * *\n* * *\n**** \n    * \n    **" << endl;
    } else if (character == 'R') {
    	PlaySound(TEXT("./assets/alphabets/R.wav"),NULL, SND_SYNC);
        cout << "**** \n*   *\n*   *\n**** \n* *  \n*  * \n*   *" << endl;
    } else if (character == 'S') {
    	PlaySound(TEXT("./assets/alphabets/S.wav"),NULL, SND_SYNC);
        cout << " *** \n*    \n*    \n **  \n   * \n   * \n***  " << endl;
    } else if (character == 'T') {
    	PlaySound(TEXT("./assets/alphabets/T.wav"),NULL, SND_SYNC);
        cout << "*****\n  *  \n  *  \n  *  \n  *  \n  *  \n  *  " << endl;
    } else if (character == 'U') {
    	PlaySound(TEXT("./assets/alphabets/U.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n*   *\n*   *\n*   *\n*   *\n *** " << endl;
    } else if (character == 'V') {
    	PlaySound(TEXT("./assets/alphabets/V.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n*   *\n*   *\n * * \n  *  \n  *  " << endl;
    } else if (character == 'W') {
    	PlaySound(TEXT("./assets/alphabets/W.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n*   *\n* * *\n* * *\n** **\n*   *" << endl;
    } else if (character == 'X') {
    	PlaySound(TEXT("./assets/alphabets/X.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n * * \n  *  \n * * \n*   *\n*   *" << endl;
    } else if (character == 'Y') {
    	PlaySound(TEXT("./assets/alphabets/Y.wav"),NULL, SND_SYNC);
        cout << "*   *\n*   *\n * * \n  *  \n  *  \n  *  \n  *  " << endl;
    } else if (character == 'Z') {
    	PlaySound(TEXT("./assets/alphabets/Z.wav"),NULL, SND_SYNC);
        cout << "*****\n   * \n  *  \n  *  \n *   \n*    \n*****" << endl;
    } else {
    	PlaySound(TEXT("./assets/alphabets/error.wav"),NULL, SND_SYNC);
        cout << "Invalid input. Please enter an uppercase letter." << endl;
    }
}

#endif

