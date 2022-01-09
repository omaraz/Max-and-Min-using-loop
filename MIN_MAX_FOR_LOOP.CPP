#include <iostream.h>
#include <conio.h>

int main(){
	 clrscr();
	 for(int num, max_num, min_num,counter;counter <5;counter++ ){
	 cout<<"Enter the number ";
	 cin>>num;

	 if(counter==0)
	 {min_num=num;
	 max_num=num;}

	 if(num<min_num){
	 min_num=num;}

	 if(num>max_num){
	 max_num=num;}

    	 }

	 cout<<"Max="<<max_num<<endl<<"Min="<<min_num<<endl;
	 cout<<"Enter any char to exit!";

         getch();

return 0;}
