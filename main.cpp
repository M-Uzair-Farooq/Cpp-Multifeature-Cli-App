#include <iostream>
#include <Windows.h>
#include <cmath>
#include <conio.h>
//#include "MMSystem.h"
#include <mmsystem.h>
#include "printLargeCharacters.h"
using namespace std;

int main() {
// int a ;
 char choice;
 string a;
    do {
	cout<<"--Name: M.Uzair Farooq -- \n";
    cout<<"--Programming Fundamentals Assignments -- \n";
    cout<<"---- Main Menu ----\n\n";
    cout<<" 1) Music Player \n";
    cout<<" 2) Scientific Calculator\n";
    cout<<" 3) Digital to Binary Calculator \n";
	cout<<" 4) Counter  \n";
    cout<<" 5) Piano  \n";
    cout<<" 6) Table with Sound\n";
    cout<<" 7) Print Large Characters\n";
    cout<<"Enter from above menu  ";
    PlaySound(TEXT("./assets/wellcome.wav"),NULL, SND_ASYNC);


    cin>>a;
    cout<<endl;
    
 	  if(a == "1"){
 	  	 system("cls");
 	  	 cout<<" 1)----Music Player---- \n";
 	  	 cout<<"Happy:) or Sad:( (h/s) - ";
		 PlaySound(TEXT("./assets/songs/happy or sad.wav"),NULL, SND_ASYNC);

 	  	 char ch ;
 	  	 cin>>ch;
 	  	 	if(ch=='h'||ch=='h'){
 	  	 	 cout<<"Happy :)\n";
		 	 cout <<"1) holay holay sajna \n";
		 	 cout <<"2) dumb-ways-to-die \n";
 	  	 	 cout <<"3) All is Well \n";
 	  	     cout <<"Enter from above menu (1-3) \n";
			 PlaySound(TEXT("./assets/songs/happy/happy menu.wav"),NULL, SND_ASYNC);

 	  	 	 
			 int happymenu;
 	  	 	 cin>>happymenu;
 	  	 	 
				 if(happymenu == 1){
				  cout <<"1) holay holay sajna \n";
    	          PlaySound(TEXT("./assets/songs/happy/happy1.wav"),NULL, SND_ASYNC);
                  cout << "Do you want to go to main menu  (y/n)? ";
                  cin >> choice;
				 }else if(happymenu == 2){
				  cout <<"2) dumb-ways-to-die\n";
    	          PlaySound(TEXT("./assets/songs/happy/happy2.wav"),NULL, SND_ASYNC);
                  cout << "Do you want to go to main menu  (y/n)? ";
                  cin >> choice;
				 }else if(happymenu == 3){		 	 
				  cout <<"3) All is Well \n";
    	          PlaySound(TEXT("./assets/songs/happy/happy3.wav"),NULL, SND_ASYNC);
                  cout << "Do you want to go to main menu  (y/n)? \n";
                 cin >> choice;
				 }else{

				 cout << "Wrong input! Do you want to go to main menu (y/n)? \n";
				 PlaySound(TEXT("./assets/error.wav"),NULL, SND_ASYNC);

                  cin >> choice;
				 }
				 
			}
			else if(ch=='s'||ch=='s'){
				cout<<"saad :( \n";
				cout<<"1) Give Me Some Sunshine...\n";
				cout<<"2) Pardes Katenda ...\n";
				cout<<"3) let me down slowly...\n";
				cout <<"Enter from above menu (1-3) \n";
				PlaySound(TEXT("./assets/songs/happy/sad menu.wav"),NULL, SND_ASYNC);

				int sadmenu;
				cin>>sadmenu;
				  if(sadmenu==1){
				    cout<<"1) Give Me Some Sunshine...\n";
    	            PlaySound(TEXT("./assets/songs/sad/sad1.wav"),NULL, SND_ASYNC);
                    cout << "Do you want to go to main menu  (y/n)? \n";
                    cin >>choice;
				    }else if(sadmenu==2){
				    cout<<"2) Pardes Katenda...\n";
    	            PlaySound(TEXT("./assets/songs/sad/sad2.wav"),NULL, SND_ASYNC);
                    cout << "Do you want to go to main menu  (y/n)? \n";
                    cin >>choice;
				    }else if(sadmenu==3){
				    cout<<"3) let me down slowly...\n";
    	            PlaySound(TEXT("./assets/songs/sad/sad3.wav"),NULL, SND_ASYNC);
                    cout << "Do you want to go to main menu  (y/n)? \n";
                    cin >>choice;
			    	}else {
			    	cout<< "Sorry we only have 3 songs \n";
					cout << "Do you want to go to main menu  (y/n)? \n";
				    PlaySound(TEXT("./assets/error.wav"),NULL, SND_ASYNC);
					cin>> choice ;
					}
			}else{
				cout<<"Wrong Input\n";
				cout << "Do you want to go to main menu  (y/n)? \n";				 
				PlaySound(TEXT("./assets/error.wav"),NULL, SND_ASYNC);
				cin>> choice ;

			}
 	  	 
	   }
 	
	else if(a == "2"){
	  	 system("cls");
 	     cout<<"----Scientific Calculator----\n\n";
		 cout<<"1) Square Root \n";
 		 cout<<"2) Cube Root \n";
		 cout<<"3) Square\n";
		 cout<<"4) Cube \n";
		 cout<<"5) Sin\n";
		 cout<<"6) Cos\n";
		 cout<<"7) Tan\n";
		 cout<<"8) Round off\n";
		 cout<<"9) Natural log \n";
		 cout<<"Enter the Operation (1-9) and input value respectively..\n";
		 PlaySound(TEXT("./assets/more/calculator.wav"),NULL, SND_ASYNC);

		double operation, value ;
		 cin>>operation >>value ;
 		if (operation == 1 ){
			cout <<"Square Root of "<<value<<" is = "<<sqrt(value)<<endl; 
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if (operation == 2 ){
			cout<<"CubeRoot of "<<value<<" is = "<<cbrt(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if(operation == 3){
			cout<<"Square of "<<value<<" is = "<<pow(value, 2)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if (operation == 4){
			cout <<"Cube of "<<value <<" is = "<<pow(value ,3)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if (operation == 5 ){
			cout<<"Sin of "<<value <<" is = "<<sin(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if (operation == 6){
			cout<<"Cos of "<<value<< " is = "<<cos(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if(operation == 7){
			cout<<"TAngent of "<<value<<" is = "<<tan(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if(operation == 8 ){
			cout<<"Roud off of the "<<value<<" is = "<<round(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else if(operation == 9){
			cout<<"Natural Log of "<<value<<" is = "<<log(value)<<endl;
			cout << "Do you want to go to main menu  (y/n)? ";
			PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}else{
			cout<<"Error! Wrong operation value\n ";
			cout<<"Do you want to go to main menu  (y/n)? \n";		
			PlaySound(TEXT("./assets/error.wav"),NULL, SND_ASYNC);
			cin >> choice;
		}

	  }
	
	else if(a == "3"){
		system("cls");
	     cout<<"3)---- Decimal to Binary Calculator---- \n\n";
	     cout<<"Enter a value whose binary value you want \n";
	     PlaySound(TEXT("./assets/more/binary.wav"),NULL,SND_ASYNC);
	     int n,no,r,value ;
	     int lenght=0;
	     cin>>n;
	    value =n ;
	    no =n; //used oly to Display entered value on screen  
//	     cout<<value;
  		while (value!=0){ //Or we simply use vector insted of array 
 			value>>=1;
			 lenght++;  	
 		}
// 		cout<<"length ="<<lenght<<endl;
		int binary[lenght];
		for (int i = lenght;  i >=0; i--) {
		 r=n%2;
		 n=n/2;
		//  cout<<r;
		 binary[i]=r;
		}
		cout<<"The binary no of "<<no<<" is = ";
		for (int i= 0; i<=lenght; i++){
//		    cout<<"The binary no of "<<n<<" is = "<<binary[i]<<endl;
			cout<<binary [i];
			}
 	     cout << "\n Do you want to go to main menu  (y/n)? ";
		 PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
         cin >> choice;
	  }
	else if(a == "4"){
		system("cls");
		cout<<"4)----Counter---- \n";
		cout<<"Enter c to count  .Enter z to make counter 0 and press any key to exit ";
		PlaySound(TEXT("./assets/counter/counter-enter.wav"),NULL,SND_SYNC);

 		string p="c";
	    int counter=0;
		do{
//		if(p=="c"){
		counter ++;
		cin>>p;	
		PlaySound(TEXT("./assets/counter/count.wav"),NULL,SND_ASYNC);
//		}	
		if (p =="z"){
			counter =0;
		PlaySound(TEXT("./assets/counter/zero.wav"),NULL,SND_ASYNC);
			
		}
		system("cls");
		cout<<"4)----Counter---- \n";
		cout<<"Enter c to add counter by 1 .Enter z to make counter 0 and press any key to exit ";
		cout<<"  "<<counter;
		}while(p == "c" || p=="z");
		cout<< "\nDo you want to go to main menu  (y/n)? ";
		PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
		cin >> choice;
		
	}
	else if(a == "5"){
 		system("cls");
		cout<<"5)----Piano----\n";
	    char ch;
		cout<<"Enter Special Characters if u want to play recorded music ! @ # $ % ^ & * ( )\n";
		cout<<"If you want to exit press ( ` ) \n";
		PlaySound(TEXT("./assets/notes/piano.wav"),NULL,SND_ASYNC );
        while (true) {
          char ch;
          ch = _getch();  
          cout<<ch;
          if (ch=='1'){
			PlaySound(TEXT("./assets/notes/A0.wav"),NULL, SND_ASYNC);
		  }else if (ch == '2'){
			PlaySound(TEXT("./assets/notes/B0.wav"),NULL, SND_ASYNC);
		  }else if (ch == '3'){
			PlaySound(TEXT("./assets/notes/C1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '4'){
			PlaySound(TEXT("./assets/notes/D1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '5'){
			PlaySound(TEXT("./assets/notes/E1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '6'){  
			PlaySound(TEXT("./assets/notes/F1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '7'){
			PlaySound(TEXT("./assets/notes/G1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '8'){
			PlaySound(TEXT("./assets/notes/A1.wav"),NULL, SND_ASYNC);
		  }else if (ch == '9'){
			PlaySound(TEXT("./assets/notes/B1.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'q'){
			PlaySound(TEXT("./assets/notes/C2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'w'){
			PlaySound(TEXT("./assets/notes/D2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'e'){
			PlaySound(TEXT("./assets/notes/E2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'r'){
			PlaySound(TEXT("./assets/notes/F2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 't'){
			PlaySound(TEXT("./assets/notes/G2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'y'){
			PlaySound(TEXT("./assets/notes/A2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'u'){
			PlaySound(TEXT("./assets/notes/B2.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'i'){
			PlaySound(TEXT("./assets/notes/C3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'o'){
			PlaySound(TEXT("./assets/notes/D3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'p'){
			PlaySound(TEXT("./assets/notes/E3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'a'){
			PlaySound(TEXT("./assets/notes/F3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 's'){
			PlaySound(TEXT("./assets/notes/G3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'd'){
			PlaySound(TEXT("./assets/notes/A3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'f'){
			PlaySound(TEXT("./assets/notes/B3.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'g'){
			PlaySound(TEXT("./assets/notes/C4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'h'){
			PlaySound(TEXT("./assets/notes/D4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'j'){
			PlaySound(TEXT("./assets/notes/E4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'k'){
			PlaySound(TEXT("./assets/notes/F4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'l'){
			PlaySound(TEXT("./assets/notes/G4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'z'){
			PlaySound(TEXT("./assets/notes/A4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'x'){
			PlaySound(TEXT("./assets/notes/B4.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'c'){
			PlaySound(TEXT("./assets/notes/C7.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'v'){
			PlaySound(TEXT("./assets/notes/D7.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'b'){
			PlaySound(TEXT("./assets/notes/E7.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'n'){
			PlaySound(TEXT("./assets/notes/F7.wav"),NULL, SND_ASYNC);
		  }else if (ch == 'm'){
			PlaySound(TEXT("./assets/notes/B7.wav"),NULL, SND_ASYNC);
		  }else if (ch == '!'){
		  	cout<<"Intesteller\n";
			PlaySound(TEXT("./assets/notes/recorded/intersteller.wav"),NULL, SND_ASYNC);
		  }else if (ch == '@'){
		  	cout<<" Destroyer of Worlds - Oppenheimer\n";
			PlaySound(TEXT("./assets/notes/recorded/Destroyer-Of-Worlds.wav"),NULL, SND_ASYNC);
		  }else if (ch == '#'){
		  	cout<<" Chopin -The Pionist\n";		  	
			PlaySound(TEXT("./assets/notes/recorded/chopin.wav"),NULL, SND_ASYNC);
		  }else if (ch == '$'){		  	
		    cout<<" Pasoori-Piano-Cover\n"; 
			PlaySound(TEXT("./assets/notes/recorded/Pasoori-Piano-Cover.wav"),NULL, SND_ASYNC);
		  }else if (ch == '%'){
			cout<<" Power-Play\n";
			PlaySound(TEXT("./assets/notes/recorded/power-play.wav"),NULL, SND_ASYNC);
		  }else if (ch == '^'){
		    cout<<" Agar-Tum-Sath-Ho\n";
			PlaySound(TEXT("./assets/notes/recorded/Agar-Tum-Sath-Ho.wav"),NULL, SND_ASYNC);
		  }else if (ch == '&'){
		    cout<<" Enigma-Dream\n";
			PlaySound(TEXT("./assets/notes/recorded/enigma-dream.wav"),NULL, SND_ASYNC);
		  }else if (ch == '*'){
			cout<<" Zara Zara (Piano Cover)\n";
			PlaySound(TEXT("./assets/notes/recorded/Zara-Zara-_Piano-Cover_.wav"),NULL, SND_ASYNC);
		  }else if (ch == '('){
		  	cout<<" Gigachad Piano \n";
			PlaySound(TEXT("./assets/notes/recorded/gigachad.wav"),NULL, SND_ASYNC);
		  }else if (ch == ')'){
		  	cout<<" Happy Birth Day \n";
			PlaySound(TEXT("./assets/notes/recorded/hbd.wav"),NULL, SND_ASYNC);
		  }
        if (ch == '`') {
            break;
          }
    	}
		cout<< "\n\nDo you want to go to main menu  (y/n)? ";
		PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
		cin >> choice;
	}
	else if(a == "6"){
		system("cls");
		
		int n, p;
    	string str,mpath,ppath,npath,ipath;
    	cout << "6)----Tables----";
    	cout << "\nEnter a number from 1-10 : ";
    	mpath= "./assets/tables/tables.wav";
    	PlaySound(mpath.c_str(),NULL, SND_SYNC);

	    cin >> n;

    	for (int i = 1; i <= 10; i++) {
        p = n * i;
        cout << n;
        npath ="./assets/tables/"+to_string(n)+".wav";
//        cout<<npath<<endl;
		PlaySound(npath.c_str(), NULL, SND_SYNC);
        cout << " X ";
        PlaySound(TEXT("./assets/tables/x.wav"), NULL, SND_SYNC);
        cout<<i;
        ipath ="./assets/tables/"+to_string(i)+".wav";
//        cout<<ipath<<endl;
        PlaySound(ipath.c_str(), NULL, SND_SYNC);
        cout << " = ";
        PlaySound(TEXT("./assets/tables/=.wav"), NULL, SND_SYNC);
//        cout<<p<<"    ";
		str = to_string(p); 
//		cout <<str<<endl;
        for (char  e : str ){
        	
        	cout<<e;

//        	cout<<"Product path "<<e;
        	// Sir ..
        	string s(1, e);
//        	cout<<"    "<<to_string(e)<<"   "<<s<<"   ";
        	ppath = "./assets/tables/"+ s +".wav";
//        	cout <<ppath<<endl;	
        	
        	PlaySound(ppath.c_str(), NULL, SND_SYNC);
		}
		cout<<endl;
        
       }
//        str = to_string(p);    //Not working 
//        cout << str << endl;
		
//		int t=2;
//		string path ;
//		for(int j=1 ;j<=10;j++){
//			cout<<t<<"x"<<j<<" = "<<t*j<<endl;
////			path ="./assets/tables/"+ t +".wav";
//			path = "./assets/tables/" + to_string(t) + ".wav";
//
//			cout<<path;
//		}


//		for(int i=)
		cout<< "Do you want to go to main menu  (y/n)? ";
		PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
		cin >> choice;
	}
	else if(a == "7"){
		system("cls");
		cout<<"Enter a character in Capital ";
		PlaySound(TEXT("./assets/alphabets/alphabets.wav"),NULL, SND_ASYNC);

		char cha;
		cin>>cha;
		printLargeCharacter(cha);
		cout<< "Do you want to go to main menu  (y/n)? ";
		PlaySound(TEXT("./assets/do-u-want-to.wav"),NULL, SND_ASYNC);
		cin >> choice;
		
		//mistake ghanta zaya hua .. :(
//		if(cha == true){
////		printLargeCharacter(cha);
//		cout<< "Do you want to go to main menu  (y/n)? ";
//		cin >> choice;	
//		}	
	}
	else{
	  	cout<<"\n Wrong Input! Plz Enter From Above Menu\n";
	    cout<< "Do you want to go to main menu  (y/n)? ";
		PlaySound(TEXT("./assets/error.wav"),NULL, SND_ASYNC);
		cin >> choice;	
	  }

	system("cls");
	}
	
	while (choice == 'y');
//	cout<<"Thank You For your time \n";
//	PlaySound(TEXT("./assets/error.wav"),NULL, SND_SYNC);
    return 0;
}
	
	
//	char cha='D';
//   	printLargeCharacter(cha);

//    	if (a<= 3 && a>=1){
//    	cout<<"1) holay holay sajna \n";
//    	   PlaySound(TEXT("./songs/happy/happy1.wav"),NULL, SND_ASYNC);
//            cout << "Do you want to continue (y/n)? ";
//            cin >> choice;
//		}else {
//		cout<<"Error!Please enter No between 1 to 3 \n";
//		choice= 'y';
//	    }
   //system("pause");
   //system("start notepad.exe");   
   //system("mkdir my_directory");
   //system("rm -r new");
   //system("clear");   
   //system("dir");  
   //system("shutdown /s /t 0");
//    cout<<"Enter a no "<<endl;
//    cin>>a;
//    cout<<"Your no is "<<a<<"\n";
//    system("pause");
