#include<simplecpp>

main_program{

    turtleSim();
    cout<<"Enter the sides of polygon = ";
    int n;
    cin>>n;
    repeat(n){

        forward(50);
        left(360/n);
        wait(1);
    }
    wait(10);
}
