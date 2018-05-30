#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char sq[10];
void board();
void game();
void initializeBoard();
int win();
char ch;
char mark;
int i,choice,player=0,count=0;
void initializeBoard()
{
    char x = '0';
    for(int i =0; i<10; i++)
    {

       sq[i] = x;
       ++x;
    }

}

void main()
{
    clrscr();
    game();
    cout<<'\n'<<'\n'<<"Wanna play another game?"<<'\n';
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
       game();
    }
    else
    {
       cout<<'\n'<<"Press ENTER to exit the game.";
    }
    getch();
}

int win()
{
    if (sq[1]==sq[2] && sq[2]==sq[3])
    return 1;
    else if (sq[4]==sq[5] && sq[5]==sq[6])
    return 1;
    else if (sq[7]==sq[8] && sq[8]==sq[9])
    return 1;
    else if (sq[1]==sq[4] && sq[4]==sq[7])
    return 1;
    else if (sq[2]==sq[5] && sq[5]==sq[8])
    return 1;
    else if (sq[3]==sq[6] && sq[6]==sq[9])
    return 1;
    else if (sq[1]==sq[5] && sq[5]==sq[9])
    return 1;
    else if (sq[3]==sq[5] && sq[5]==sq[7])
    return 1;
    else if (sq[1]!='1' && sq[2]!='2' && sq[3]!='3' && sq[4]!='4' && sq[5]!='5' && sq[6]!='6' && sq[7]!='7'&& sq[8]!='8' && sq[9]!='9')
    return 0;
    else
    return 2;
}

void board()
{
    clrscr();
    cout<<'\t'<<'\t'<<'\t'<<'\t'<<"JEERO KATIIIII"<<'\n';
    cout<<"--------------------------------------------------------------------------------";
    cout<<'\n'<<'\t'<<'\t'<<'\t'<<'\t'<<"|"<<sq[1]<<"|-|"<<sq[2]<<"|-|"<<sq[3]<<"|"<<'\n';
    cout<<"--------------------------------------------------------------------------------";
    cout<<'\n'<<'\t'<<'\t'<<'\t'<<'\t'<<"|"<<sq[4]<<"|-|"<<sq[5]<<"|-|"<<sq[6]<<"|"<<'\n';
    cout<<"--------------------------------------------------------------------------------";
    cout<<'\n'<<'\t'<<'\t'<<'\t'<<'\t'<<"|"<<sq[7]<<"|-|"<<sq[8]<<"|-|"<<sq[9]<<"|"<<'\n';
    cout<<"--------------------------------------------------------------------------------";
    cout<<'\n';
}

void game()
{
    initializeBoard();
    do
    {
	board();

	count++;
	if(count%2!=0)
	{
	    player=1;
	    mark='X';
	}
	else
	{
	    player=2;
	    mark='O';
	}
	cout<<"Player "<<player<<" Enter the choice.==>"<<'\t';
	cin>>choice;
	if (choice == 1 && sq[1] == '1')
	{
	    sq[1] = mark;
	}
	else if (choice == 2 && sq[2] == '2')
	{
	    sq[2] = mark;
	}
	else if (choice == 3 && sq[3] == '3')
	{
	    sq[3] = mark;
	}
	else if (choice == 4 && sq[4] == '4')
	{
	    sq[4] = mark;
	}
	else if (choice == 5 && sq[5] == '5')
	{
	    sq[5] = mark;
	}
	else if (choice == 6 && sq[6] == '6')
	{
	    sq[6] = mark;
	}
	else if (choice == 7 && sq[7] == '7')
	{
	    sq[7] = mark;
	}
	else if (choice == 8 && sq[8] == '8')
	{
	    sq[8] = mark;
	}
	else if (choice == 9 && sq[9] == '9')
	{
	    sq[9] = mark;
	}
	else
	{
	    cout<<"Invalid move ";
	    count--;
	    getch();
	}
	i=win();
	player++;
    }
    while(i==2);
    board();
    if(i==1)
    cout<<'\t'<<'\t'<<'\t'<<'\t'<<"Game won by PLAYER "<<--player;
    else if(i==0)
    cout<<'\t'<<'\t'<<'\t'<<'\t'<<"Game draw"<<'\n';
}