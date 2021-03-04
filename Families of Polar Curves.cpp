#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <math.h>
#include <graphics.h>

using namespace std;

#define pi 3.1415


double set_Y_axis(double, double, double);
double set_X_axis(double, double, double);
void menu1(void);

int main()
{
    //First Turn
    char ch;
    cout<<"\t\t Press ENTER to start or 0 to exit"<<endl;
    cin.get(ch);
    system("cls");
  	if((ch=='\n'))
  	{
        cout<<"\n\n\n\n\n\t\t\t\t      LOADING\n\n";
        char a=219, b=221;
        cout<<"\t\t\t\t";
        for (double i=0;i<=18;i++)
        cout<<a;
        cout<<"\r";
        cout<<"\t\t\t\t";
        for (double i=0;i<=18;i++)
        {
            cout<<b;
            for (double j=0;j<=18e6;j++);
        }
        menu1();
  	}

    fflush(stdin);
    cout<<"\n\n\n\n\t\t\t\t\t Press ENTER to start or 0 to exit"<<endl;
    fflush(stdin);
    cin.get(ch);
    system("cls");

    while(ch=='\n')
        {
            menu1();
            cout<<"\n\n\n\n\t\t\t\t\t Press ENTER to start or 0 to exit"<<endl;
            cin.get(ch);
            system("cls");
        }

    if(ch!='\n')
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t*** GOOD BYE ***\n\n\n\n\n\n";
        exit(0);
    }

    return 0;
}

void menu1(void)
{
    double inp;
    system("cls");
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\n \t\t\tFAMILIES of POLAR CURVES\t\t\t\t\t\t\t"<<endl;
     cout<<"\nBy : ABDULLAH QADRI(17K-3922) , TALHA JAMAL(17K-3877) , FAHAD QURESHI(17K-3925)\t\t\t\t\t\t\t"<<endl;
    cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\n  1)  Polar Circles              "<<endl;
    cout<<"\n  2)  Lemniscates                "<<endl;
    cout<<"\n  3)  Rose Curves  "<<endl;//delete  -> 9  rose curves
    cout<<"\n  4)  Cardioids and Limacons "<<endl;//delete   ->10 cardiod and limacon
    cout<<"\n  5)   Spirals     "<<endl;//delete   11   ->spirals

    cout<<"\n Press 0 to exit";
    cout<<"\n\n Enter the required type of curve : ";
    cin>>inp;
    system("cls");

    if(inp==0)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t*** GOOD BYE ***\n\n\n\n\n\n";
        exit(0);

    }
    else if(inp == 1)
    {
        double a,b,n,eq;
        double  xn, xp, yn, yp, x, y;
        double theeta, r, start_theeta, end_theeta, phi;

        cout<<"\n-------------------------------------------------------------------------- "<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n *\t\t\t\t\t\t      POLAR CIRCLES\t\t\t\t\t\t\t*"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n--------------------------------------------------------------------------*"<<endl;
        cout<<"\n\n Equation Format :\n\n 1) r = a * cos(&)\n\n 2) r = a * sin(&)\n\n"<<endl;
        cout<<"\n Enter Equation Format : ";
        cin>>eq;
        if(eq==1)
        {
            cout<<"\n\n For perfect output input a = 8";
            cout<<"\n\n Enter value of a : ";

            cin>>a;

            cout<<"\n\n Check Graph\n\n";

            //positive x-axis
            xp = 15;
            //negative x -axis
            xn = -15;
            //positive y-axis
            yp = 15;
            //negative y-axis
            yn = -15;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a * cos(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }
        }

        else if(eq==2)
        {
            cout<<"\n\n For perfect output input a = 8";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";

            //positive x-axis
            xp = 15;
            //negative x -axis
            xn = -15;
            //positive y-axis
            yp = 15;
            //negative y-axis
            yn = -15;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a * sin(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
            cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
            exit(0);
        }
        getch();
        delay(1000);
        cleardevice();
        system("cls");
    }



    else if(inp == 2)
    {
        double a,b,n,eq;
        double  xn, xp, yn, yp, x, y;
        double theeta, r, start_theeta, end_theeta, phi;


        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n *\t\t\t\t\t\t      LEMNISCATES\t\t\t\t\t\t\t*"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<"\n\n Equation Format :\n\n 1) r^2 = a^2sin(2*&)\n\n 2) r^2 = a^2cos(2*&)\n\n"<<endl;
        cout<<"\n Enter Equation Format : ";
        cin>>eq;


        if(eq==1)
        {
            cout<<"\n\n For perfect output input a = 7 ";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";

            //positive x-axis
            xp = 15;
            //negative x -axis
            xn = -15;
            //positive y-axis
            yp = 15;
            //negative y-axis
            yn = -15;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = sqrt( (pow(a,2)) * cos(2 * theeta) );
                x = r * cos(theeta);
                y = r * sin(theeta);
                putpixel(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp),BLACK);
            }

        }
        else if(eq==2)
        {
            cout<<"\n\n For perfect output input a = 7";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 15;
            //negative x -axis
            xn = -15;
            //positive y-axis
            yp = 15;
            //negative y-axis
            yn = -15;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            //initwindow(1366,800,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = sqrt( (pow(a,2)) * sin(2 * theeta) );
                x = r * cos(theeta);
                y = r * sin(theeta);
                putpixel(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp),BLACK);
            }
        }
        else
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
            cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
            exit(0);
        }
        getch();
        delay(1000);
        cleardevice();
        system("cls");
    }

    else if(inp == 3)
    {
        double a,b,n,eq;
        double  xn, xp, yn, yp, x, y;
        double theeta, r, start_theeta, end_theeta, phi;

        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n *\t\t\t\t\t\t      ROSE CURVES\t\t\t\t\t\t\t*"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<"\n\n Equation Format :\n\n 1)  r = a * sin(n * &)\n\n 2)  r = a * cos(n * &)\n\n 3)  r = & + a * sin(n * Pi * &)\n\n 4)  r = & + a * cos(n * Pi * &)\n\n 5)  r = & + a * sin(n * &) - b * cos(n * &)";
        cout<<"\n\n 6)  r = a + sin(n * Pi * &)\n\n 7)  r = a + cos(n * Pi * &)\n\n 8)  r = & + a * sin(n * Pi * &) + b * cos(n * Pi * &)\n\n 9)  r = a * cos(&) + sqrt( abs( b * cos(&)^2 - 3))"<<endl;
        cout<<"\n\n Enter Equation Format : ";
        cin>>eq;
        if(eq==1)
        {
            cout<<"\n\n For perfect output input a = 2 and n = 4 ";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of n : ";
            cin>>n;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 5;
            //negative x -axis
            xn = -5;
            //positive y-axis
            yp = 5;
            //negative y-axis
            yn = -5;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a * cos(n * theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else if(eq==2)
        {
            cout<<"\n\n For perfect output input a = 2 and n = 4";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of n : ";
            cin>>n;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 5;
            //negative x -axis
            xn = -5;
            //positive y-axis
            yp = 5;
            //negative y-axis
            yn = -5;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a * sin(n * theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else if(eq==3)
            {
                cout<<"\n\n For perfect output input a = 2 and n = 4";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";
                //positive x-axis
                xp =  50;
                //negative x -axis
                xn = -50;
                //positive y-axis
                yp =  50;
                //negative y-axis
                yn = -50;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                {
                    r   = theeta + a * sin(n * pi * theeta);
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }

            }
        else if(eq==4)
            {
                cout<<"\n\n For perfect output input a = 4 and n = 5";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";
                //positive x-axis
                xp =  50;
                //negative x -axis
                xn = -50;
                //positive y-axis
                yp =  50;
                //negative y-axis
                yn = -50;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                {
                    r   = theeta + a * cos(n * pi * theeta);
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }

            }


        else if(eq==5)
            {
                cout<<"\n\n For perfect output input a =  6 , b = 3 and n = 6 ";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of b : ";
                cin>>b;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";
                //positive x-axis
                xp =  50;
                //negative x -axis
                xn = -50;
                //positive y-axis
                yp =  50;
                //negative y-axis
                yn = -50;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                    {
                        r = theeta + (a * sin(n * theeta)) - (b * cos(n * theeta));
                        x = r * cos(theeta);
                        y = r * sin(theeta);
                        lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                    }

            }

        else if(eq == 6)
            {
                cout<<"\n\n For perfect output input a = 4 and n = 3";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";
                //positive x-axis
                xp =  10;
                //negative x -axis
                xn = -10;
                //positive y-axis
                yp =  10;
                //negative y-axis
                yn = -10;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                    {
                        r = a + sin(n * pi * theeta);
                        x = r * cos(theeta);
                        y = r * sin(theeta);
                        lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                    }

             }
        else if(eq == 7)
            {
                cout<<"\n\n For perfect output input a = 3 and n = 4";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";
                //positive x-axis
                xp =  10;
                //negative x -axis
                xn = -10;
                //positive y-axis
                yp =  10;
                //negative y-axis
                yn = -10;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                {
                    r = a + cos(n * pi * theeta);
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }

            }
        else if(eq == 8)
            {
                cout<<"\n\n For perfect output input a = 4 , b = 6 and n = 9";
                cout<<"\n\n Enter value of a : ";
                cin>>a;
                cout<<"\n\n Enter value of b : ";
                cin>>b;
                cout<<"\n\n Enter value of n : ";
                cin>>n;
                cout<<"\n\n Check Graph\n\n";


                //positive x-axis
                xp =  70;
                //negative x -axis
                xn = -70;
                //positive y-axis
                yp =  70;
                //negative y-axis
                yn = -70;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
                for(theeta = 0; theeta <= 12*3.1415; theeta += 0.02)
                {
                    r = theeta + a*sin(n*pi*theeta) + b*cos(n*pi*theeta);
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }
                //r = ( 2*cos(theta) + sqrt( abs( 4*cos(theta)^2 -3))

            }
//        else if(eq == 9)
//            {
//
//                cout<<"\n\n For perfect output input a = 2 and b = 4";
//                cout<<"\n\n Enter value of a : ";
//                cin>>a;
//                cout<<"\n\n Enter value of b : ";
//                cin>>b;
//                cout<<"\n\n Check Graph\n\n";
//
//                //positive x-axis
//                xp =  3;
//                //negative x -axis
//                xn = -3;
//                //positive y-axis
//                yp =  3;
//                //negative y-axis
//                yn = -3;
//
//
//                //For Graph Screen
//                initwindow(1280,768,"POLAR CURVES");
//                setbkcolor(8);
//                cleardevice();
//                setcolor(BLACK);
//
//                // Draw the X and Y axps
//                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
//                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());
//
//                //changing current position
//                moveto(set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp));
//                for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
//                {
//                    r = a * cos(theeta) + sqrt((abs(( b *(pow(cos(theeta),2)) - 3))));
//                    x = r * cos(theeta);
//                    y = r * sin(theeta);
//                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
//                }
//
//
//            }

        else
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
                cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
                exit(0);
            }

        getch();
        delay(1000);
        cleardevice();
        system("cls");
    }
    else if(inp == 4)
    {
        double a,b,n,eq;
        double  xn, xp, yn, yp, x, y;
        double theeta, r, start_theeta, end_theeta, phi;

        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n *\t\t\t\t\t      CARDIOIDS and LIMACONS\t\t\t\t\t\t\t*"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<"\n\n Equation Format : \n\n 1) r = a + b * sin(&)\n\n 2) r = a - b * sin(&)\n\n 3) r = a + b * cos(&)\n\n 4) r = a - b * cos(&)\n\n"<<endl;
        cout<<"\n Enter Equation Format : ";
        cin>>eq;


        if(eq==1)
        {
            cout<<"\n\n For perfect output input a = 3 and b = 2";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of b : ";
            cin>>b;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 10;
            //negative x -axis
            xn = -10;
            //positive y-axis
            yp = 10;
            //negative y-axis
            yn = -10;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a + b * sin(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else if(eq==2)
        {
            cout<<"\n\n For perfect output input a = 4 and b = 6";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of b : ";
            cin>>b;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 15;
            //negative x -axis
            xn = -15;
            //positive y-axis
            yp = 15;
            //negative y-axis
            yn = -15;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a - b * sin(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }
        }
        else if(eq==3)
        {
            cout<<"\n\n For perfect output input a = 3 and b = 2 ";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of b : ";
            cin>>b;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 10;
            //negative x -axis
            xn = -10;
            //positive y-axis
            yp = 10;
            //negative y-axis
            yn = -10;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a + b * cos(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else if(eq==4)
        {
            cout<<"\n\n For perfect output input a = 2 and b = 4";
            cout<<"\n\n Enter value of a : ";
            cin>>a;
            cout<<"\n\n Enter value of b : ";
            cin>>b;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 10;
            //negative x -axis
            xn = -10;
            //positive y-axis
            yp = 10;
            //negative y-axis
            yn = -10;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );

            for(theeta = 0; theeta <= 2*3.1415; theeta += 0.02)
            {
                r = a - b * cos(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }
        else
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
            cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
            exit(0);
        }

        getch();
        delay(1000);
        cleardevice();
        system("cls");
    }

    else if(inp == 5)
    {
        cout<<"\n--------------------------------------------------------------------------"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n *\t\t\t\t\t\t       SPIRALS\t\t\t\t\t\t\t\t*"<<endl;
        cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
        cout<<"\n --------------------------------------------------------------------------"<<endl;
        cout<<endl<<endl;

        cout<<"\n 1)   Archimedean Spiral     "<<endl;
        cout<<"\n 2)   Hyperbolic Spiral      "<<endl;
        cout<<"\n 3)   Parabolic Spiral       "<<endl;
        cout<<"\n 4)   Lituus Spiral          "<<endl;
        double inp;
        cout<<"\n\n Enter the requi8 type of curve : ";
        cin>>inp;
        system("cls");
        if(inp == 1)
        {
            double a,b,n;
            float  xn, xp, yn, yp, x, y;
            double theeta, r, start_theeta, end_theeta, phi;

            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<"\n \t\t\t\t\t        ARCHIMEDEAN SPIRAL\t\t\t\t\t\t\t"<<endl;
            cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<"\n\n Equation Format :\n\n r = a(&)\n\n";
            cout<<"\n\n For perfect output input a = 4";
            cout<<"\n\n Enter a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";

            //positive x-axis
            xp = 700;
            //negative x -axis
            xn = -700;
            //positive y-axis
            yp = 700;
            //negative y-axis
            yn = -700;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 20*3.1415; theeta += 0.02)
            {
                r = a * theeta;
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }
            getch();
            delay(1000);
            cleardevice();
            system("cls");
        }
        else if(inp == 2)
        {
            double a,b,n,eq;
            double  xn, xp, yn, yp, x, y;
            double theeta, r, start_theeta, end_theeta, phi;

            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<"\n \t\t\t\t\tHYPERBOLIC SPIRAL \t\t\t\t\t\t\t"<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<"\n\n Equation Format :\n\n 1) r = a / (&)\n\n"<<endl;
            cout<<" 2) r = a * (&)"<<endl;
            cout<<"\n Enter equation format : ";
            cin>>eq;


            if(eq==1)
            {
                cout<<"\n\n For perfect output input a = 18";
                cout<<"\n\n Enter a : ";
                cin>>a;
                cout<<"\n\n Check Graph\n\n";
                xp = 10;
                //negative x -axis
                xn = -10;
                //positive y-axis
                yp = 10;
                //negative y-axis
                yn = -10;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
                for(theeta = 0; theeta <= 20*3.1415; theeta += 0.02)
                {
                    r = a / theeta;
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }

            }
            else if(eq==2)
            {
                cout<<"\n\n For perfect output input a = 8";
                cout<<"\n\n Enter a : ";
                cin>>a;
                cout<<"\n\n Check Graph\n\n";
                xp = 1000;
                //negative x -axis
                xn = -1000;
                //positive y-axis
                yp = 1000;
                //negative y-axis
                yn = -1000;


                //For Graph Screen
                initwindow(1280,768,"POLAR CURVES");
                setbkcolor(8);
                cleardevice();
                setcolor(BLACK);

                // Draw the X and Y axps
                line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
                line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

                //changing current position
                moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
                for(theeta = 0; theeta <= 20*3.1415; theeta += 0.02)
                {
                    r = a * theeta;
                    x = r * cos(theeta);
                    y = r * sin(theeta);
                    lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
                }

            }

            else
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
                cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
                exit(0);
            }
            getch();
            delay(1000);
            cleardevice();
            system("cls");
        }
        else if(inp == 3)
        {
            double a,b,n;
            double  xn, xp, yn, yp, x, y;
            double theeta, r, start_theeta, end_theeta, phi;


            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<"\n \t\t\t\t  PARABOLIC SPIRAL \t\t\t\t\t\t\t"<<endl;
            cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<"\n\n Equation Format :\n\n r = a * (&)^1/2"<<endl;

            cout<<"\n\n For perfect output input a = 7";
            cout<<"\n\n Enter a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";
            //positive x-axis
            xp = 100;
            //negative x -axis
            xn = -100;
            //positive y-axis
            yp = 100;
            //negative y-axis
            yn = -100;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 20*3.1415; theeta += 0.02)
            {
                r = a * sqrt(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }
            getch();
            delay(1000);
            cleardevice();
            system("cls");
        }
        else if(inp == 4)
        {
            double a,b,n;
            double  xn, xp, yn, yp, x, y;
            double theeta, r, start_theeta, end_theeta, phi;


            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
            cout<<"\n *\t\t\t\t\t\t   LITUUS SPIRAL\t\t\t\t\t\t\t*"<<endl;
            cout<<" *\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*";
            cout<<"\n--------------------------------------------------------------------------"<<endl;
            cout<<"\n\n Equation Format :\n\n r = a / (&)^1/2";
            cout<<"\n\n For perfect output input a = 7";
            cout<<"\n\n Enter a : ";
            cin>>a;
            cout<<"\n\n Check Graph\n\n";


            //positive x-axis
            xp = 10;
            //negative x -axis
            xn = -10;
            //positive y-axis
            yp = 10;
            //negative y-axis
            yn = -10;


            //For Graph Screen
            initwindow(1280,768,"POLAR CURVES");
            setbkcolor(8);
            cleardevice();
            setcolor(BLACK);

            // Draw the X and Y axps
            line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
            line(getmaxx()/2, 0,  getmaxx()/2, getmaxy());

            //changing current position
            moveto( set_X_axis(xn, 0, xp), set_Y_axis(yn, 0, yp) );
            for(theeta = 0; theeta <= 20*3.1415; theeta += 0.02)
            {
                r = a / sqrt(theeta);
                x = r * cos(theeta);
                y = r * sin(theeta);
                lineto(set_X_axis(xn, x, xp), set_Y_axis(yn, y, yp));
            }

        }

        else
            {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong key is pressed\n";
                cout<<"\n\t\t\t\t\t\t  *** GOOD BYE ***\n\n\n\n\n\n";
                exit(0);
            }
            getch();
            delay(1000);
            cleardevice();
            system("cls");
        }
        
    }

double set_X_axis(double xn, double x, double xp)
{
	return ( (x - xn) / (xp - xn) * getmaxx() );
}

double set_Y_axis(double yn, double y, double yp)
{
	return ( getmaxy() - (y - yn) / (yp - yn) * getmaxy());
}
