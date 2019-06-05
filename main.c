/*
3. Consider three dimension system. A point in three dimension system is represented as ( x , y , z ) , where x , y and z are the x , y and z coordinates of the point in three dimension space respectively. Write a program that:
 a) Reads from end user using suitable messages :
    i. Point p1 ( x1 , y1 , z1 ) , and
    ii. Point p2 ( x2 , y2 , z2 )
 b) Prints with suitable message all partial derivatives between the points ( p1 , p2 )

*/

#include <stdio.h>

int main()
{
    //Reading points from user
    //Read point p1
    float x1,y1,z1;
    printf("\nEnter the co-ordinates of point p1\n");
    printf("\nEnter the x1 co-ordinates of point x1= ");
    scanf("%f",&x1);
    printf("\nEnter the y1 co-ordinates of point y1= ");
    scanf("%f",&y1);
    printf("\nEnter the z1 co-ordinates of point z1= ");
    scanf("%f",&z1);

    //Read point p2
    float x2,y2,z2;
    printf("\n\nEnter the co-ordinates of point p2\n");
    printf("\nEnter the x1 co-ordinates of point x2= ");
    scanf("%f",&x2);
    printf("\nEnter the y1 co-ordinates of point y2= ");
    scanf("%f",&y2);
    printf("\nEnter the z1 co-ordinates of point z2= ");
    scanf("%f",&z2);

    //printing values of entered points
    printf("\nPoint p1=p1(%f,%f,%f)\nPoint p2=p2(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2);


    //computing the partial derivatives int between p1 and p2





}

