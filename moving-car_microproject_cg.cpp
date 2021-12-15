// using graphics.h library  to draw a moving car

#include <graphics.h>
#include <stdio.h>
 
// function to draw moving car
void moving_car(void) {
 
    int i, j = 0, gd = DETECT, gm;
   
 

    // function to initialize graphics mode
    initgraph(&gd, &gm, "");
    
 
    for (i = 0; i <= 420; i = i + 10) {
 
        // Set color of car as white
        setcolor(WHITE);
 
        // body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
 
        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
 
        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
 
        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
 
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
 
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
        
 
        // more the delay less the speed
        delay(50);
        
 
        // To erase previous drawn car, draw
        // the whole car at same position
        // but color using black
        setcolor(BLACK);
        
        
         
        // Lines for bonnet and body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
 
        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
 
        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
 
        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
 
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
 
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
    }
 
    getch();
 
    closegraph();
}
 
// Driver code
int main()
{
    moving_car();
 
    return 0;
}
