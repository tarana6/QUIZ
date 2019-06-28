#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y,z;
	x=y=z=0;
	char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	cout<<"	Guest Enter Your Name : ";
	gets(ch1);

	cout<<"\n Welcome ";
	puts(ch1);
	cout<<" Sobriquet is an unofficial title or name given to someone or something.";
	cout<<"\n Enter answer in form of 'a','b' and 'c'only.";
	cout<<"\n\n 1. What is called as ' THE HOLY LAND'? \n a.Jerusalem \n b.Mathura \n c.Mecca \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();

	cout<<"\n\n 2. What is called as 'THE ROOF OF THE WORLD'? \n a.Nepal\n b.Rom\n c.Tibet \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
				cout<<"Good Job.Your score is "<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();


	cout<<"\n\n 3. What is called as ' THE LAND OF RISING SUN'? \n a.Chicago \n b.Japan \n c.Tibet \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();

	cout<<"\n\n 4. What is called as ' THE GIFT OF NILE'? \n a.Chicago \n b.Egypt \n c.Africa \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();

	cout<<"\n\n 5. What is called as ' THE LAND OF MIDNIGHT SUN'? \n a.Norway \n b.Japan \n c.Australia \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n Your score is "<<x;


	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	cout<<"\n\n 6. What is called as ' THE LAND OF THUNDERBOLT'? \n a.Bhutan \n b.Canada \n c.Arab \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n Your score is "<<x;


	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	cout<<"\n\n 7. What is called as ' THE WINDY CITY? \n a.Jerusalem \n b.Japan \n c.Chicago \n\n Your answer :  ";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n Your score is "<<x;
	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	cout<<"\n\n 8. What is called as ' THE LAND OF WHITE ELEPHANTS'? \n a.Bangladesh \n b.Thailand \n c.India \n\n Your answer :  ";

	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n your score is "<<x;
	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	cout<<"\n\n 9. What is called as ' THE CITY OF SEVEN HILLS'? \n a.Rome \n b.Nilgiri Hills \n c.Tibet \n\n Your answer : ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n Your score is "<<x;


	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	cout<<"\n\n 10. What is called as ' THE DARK CONTIENENT'? \n a.Asia \n b.Australia \n c.Africa \n\n Your answer :  ";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n Your score is "<<x;

	}
	else
	cout<<"\n Sorry wrong answer.";
	getch();

	if(x==100)
	cout<<"\n No cheating...... You have done this earlier also.";
	if(x==90)
	cout<<"\n You are extremely intelligent Your Score is 90";
	if(x==80)
	cout<<"\n You are intelligent Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<"\n You are average  Your Score is "<<x<<"Better luck next time";
	else if(x<=40)
	cout<<"\n No use........ Not even 5 questions right";
	getch();
}
