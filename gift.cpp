#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
using namespace std;
void HBR(char [],int,int);
int main()
{   char s1[]="FOR ROBIN";
    char s2[]="PRESS ENTER TO OPEN THE BOX.....";
    char s3[]="HaPpY BiRtHdAy To You";
    int gd=DETECT,gm,i,j;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    int midx=getmaxx()/2,midy=getmaxy()/2;
   bool f= TRUE;
   while(f)
   {  if(GetAsyncKeyState(VK_RETURN))
      {
         HBR(s3,midx,midy);
      }
      else
      {  delay(150);
         setbkcolor(i);
         line(midx-200,midy-100,midx-100,midy-150);
         line(midx+100,midy-100,midx+200,midy-150);
         line(midx-200,midy-100,midx+100,midy-100);
         line(midx-100,midy-150,midx+200,midy-150);
         line(midx+100,midy+150,midx+200,midy+100);
         line(midx-200,midy+150,midx+100,midy+150);
         line(midx-200,midy+150,midx-200,midy-100);
         line(midx+100,midy+150,midx+100,midy-100);
         line(midx+200,midy+100,midx+200,midy-150);
         line(midx-50,midy-100,midx+50,midy-150);
         line(midx,midy-100,midx+100,midy-150);
         line(midx-159,midy-121,midx+142,midy-121);
         line(midx-145,midy-129,midx+156,midy-129);
         line(midx+142,midy-121,midx+142,midy+129);
         line(midx+156,midy-129,midx+156,midy+121);
         line(midx,midy+150,midx,midy-100);
         line(midx-50,midy+150,midx-50,midy-100);

         floodfill(0,0,WHITE);
         setfillstyle(9,1);
         floodfill(midx+145,midy-120,WHITE);
         floodfill(midx,midy-120,WHITE);
         floodfill(midx-125,midy-125,WHITE);
         floodfill(midx+125,midy-125,WHITE);
         floodfill(midx+36,midy-125,WHITE);
         floodfill(midx+48,midy-145,WHITE);
         floodfill(midx-20,midy-20,WHITE);
         settextstyle(6,0,1);
         outtextxy(midx-190,midy,s1);
         settextstyle(0,0,0);
         setcolor(WHITE);
         outtextxy(150,2*midy-50,s2);
         i+=j;
         j++;
      }

   }
   getch();
   closegraph();

}
void HBR(char s3[],int midx,int midy)
{   cleardevice();
    setbkcolor(WHITE);
    settextstyle(5,0,4);
    for(int i=0,j=10;j<900;i++,j+=5)
      {
          delay(100);
          if(i>17)
            i=0;
          setcolor(i);
          arc(midx,midy+200,0,180,j);
          arc(midx,midy-200,180,360,j);
          arc(midx+200,midy,90,270,j);
          arc(midx-200,midy,270,90,j);

          arc(midx+200,midy+200,0,360,j);
          arc(midx-200,midy-200,0,360,j);
          arc(midx+200,midy-200,0,360,j);
          arc(midx-200,midy+200,0,360,j);

          setcolor(RED);
          //outtextxy(midx-200,midy-100,s3);
      }
      getch();
      closegraph();
      exit(0);
}



