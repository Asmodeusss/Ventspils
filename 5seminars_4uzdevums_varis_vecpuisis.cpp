#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include <ncurses.h> Was going to try ncurses for making the 2d array dynamically update but couldnt be bothered.
// too sleepy. Also, the website is UGLY.

using namespace std;

//I am aware that these are known as "globally" defined values, but I am used to it, and this is a single
//file of code which itself houses only a very few values. Placing variables here should not be problematic.
//I guess what I'm saying is that I aint no amateur. I know its bad but I like it and its not hurting anyone.
//It just looks so pretty.

// create array and fill it
char m[12][12];

int range(int a, int b, int c)
{
    if ((a>=b) && (a<=c)) {return 1;} else {return 0;}
}

int rng(int a, int b)
{
    if (a==b)
    {
        return 0;
    }
    else
    {
        int x=rand()%(b+1-a)+a;
        return x;
    }
}

void generateBurtuTaka()
{
//clear array
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            m[i][j]='.';
        }
    }
/// DISABLE THIS IF YOU WISH TO HAVE DIAGONAL MOVEMENT AS WELL.
    bool diagonal=false;

// define starting position and main char
    int x = rng(0,9);
    int y = rng(0,9);
    char c;
    c='a';
    m[x][y]=c;

// iterate through all chars
    for (int i=0; i<25; i++)
    {
        c += 1;

        bool the_prophecy = false;
        //while loop in case prophecy is false(get it? :D because we are trying to guess a random space that is free)
        while(!the_prophecy)
        {
            int a,b;
            //randomly select a direction to move
            if (diagonal)
            {
                a=1-rng(0,2);
                b=1-rng(0,2);
            }
            else
            {
                if (rng(0,1))
                {
                    a=1-rng(0,2);
                    b=0;
                }
                else
                {
                    b=1-rng(0,2);
                    a=0;
                }
            }

            //check if our of bounds
            if ((range(x+a,0,9))&&(range(y+b,0,9)))
            {
                //check if location free
                if (m[x+a][y+b]=='.')
                {
                    x+=a;
                    y+=b;
                    m[x][y]=c;
                    the_prophecy=true;
                }
            }
        }

        //check if we are trapped
        if ((m[x+1][y]!='.')&&(m[x-1][y]!='.')&&(m[x][y+1]!='.')&&(m[x][y-1]!='.'))
        {
            if ((diagonal)&&((m[x+1][y+1]!='.')&&(m[x-1][y-1]!='.')&&(m[x-1][y+1]!='.')&&(m[x+1][y-1]!='.')))
            {
                break;
            }
            else
            {
                break;
            }
        }

    }
}

void izvaditBurtuTaka()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{

srand (time(NULL));

while(true)
{
    generateBurtuTaka();
    izvaditBurtuTaka();
    system("pause");
}

    return 0;
}
