#include <simplecpp>
main_program
{
        initCanvas("sinx graph",1000,1000);
        Line x_axis (100,500,900,500);
        Line y_axis (100,100,100,900);

        double a=0.0;

        while(a<=720.0)
        {
                double x=100+a;
                double y=500-200*sin((PI*a)/180);
                Circle smallpoint(x,y,0.5);
                smallpoint.imprint();
                a=a+0.5;
        }


                //markings of units on x & y axis
                double i=0.0;

                // for y axis
                repeat(15)
                {
                        Rectangle y_axis_UnitMarking(100,150.0+i,20,5);
                        i=i+50.0;
                        y_axis_UnitMarking.setFill();
                        y_axis_UnitMarking.imprint();
                }

                // for x axis
                double n=0.0;
                repeat(9)
                {
                        Rectangle x_axis_UnitMarking(100.0+n,500,5,20);
                        n=n+90.0;
                        x_axis_UnitMarking.setFill();
			x_axis_UnitMarking.imprint();
		}

		wait(10);
}
