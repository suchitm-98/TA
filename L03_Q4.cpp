#include <simplecpp>
main_program
{
        initCanvas("ChessBoard",1000,1000);

        int n = 0;
        int i = 0;

        repeat(4)
        {

        repeat(4)
        {
        Rectangle box1(150+i,150+n,100,100);     box1.setColor(COLOR(255,0,0));    box1.setFill();   box1.imprint();
        Rectangle box2(250+i,150+n,100,100);     box2.setColor(COLOR(0,0,255));    box2.setFill();   box2.imprint();
        Rectangle box3(150+i,250+n,100,100);     box3.setColor(COLOR(0,0,255));    box3.setFill();   box3.imprint();
        Rectangle box4(250+i,250+n,100,100);     box4.setColor(COLOR(255,0,0));    box4.setFill();   box4.imprint();
        i=i+200;
        }

        n=n+200;
        i=0;
        }
        wait(10);
}
