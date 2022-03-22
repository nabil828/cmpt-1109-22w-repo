#include <iostream>
#include <fstream>

using namespace std;

class Rational
{
  // todo
};
int main()
{
    

    
    // 1
    /////////////////////
    //.add() Test Cases//
    /////////////////////
    // Rational ob3(1, 2);
    // Rational ob4(1, 4);
    // Rational result = ob3.add(ob4);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 6/8
    

    // 2 
    ////////////////////
    //.sub() Test Cases //
    ////////////////////
    // Rational ob3(1, 2);
    // Rational ob4(1, 4);
    // Rational result = ob3.sub(ob4);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 1/4

    
    // 3
    ////////////////////
    //.mul() Test Cases //
    ////////////////////
    // Rational ob5(1, 2);
    // Rational ob6(1, 4);
    // Rational result = ob5.mul(ob6);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 1/8
    
    // 4
    ////////////////////
    //.div() Test Cases //
    ////////////////////
    // Rational ob7(1, 2);
    // Rational ob8(1, 4);
    // Rational result = ob7.div(ob8);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 2
    
    // 5
    //////////////////////
    //.less() Test Cases//
    //////////////////////
    // // test case 1
    // Rational obj1(1, 3);
    // Rational obj2(1, 2);
    // cout << obj1.less(obj2) << endl; // true
   
    // // test case 2
    // Rational obj3(1, 3);
    // Rational obj4(-1, 2);
    // cout << obj3.less(obj4) <<endl; // false

    // // test case 3
    // Rational obj5(-1, 3);
    // Rational obj6(1, 2);
    // cout << obj5.less(obj6) <<endl; // true

    
    // // test case 4
    // Rational obj7(1, 3);
    // Rational obj8(1, 3);
    // cout << obj7.less(obj8) <<endl; // false
   
   
    // // test case 5
    // Rational obj9(3, 9);
    // Rational obj10(1, 3);
    // cout << obj9.less(obj10) <<endl; // false
   



    // 6 
    //////////////////////
    //.neg() Test Cases//
    //////////////////////
    // Rational obj1(-1,2);
    // cout << obj1.neg().get_numerator() << "/" << obj1.neg().get_denominator();






    ////////////////////////////////////////////////////////////
    //.add() test for inputs from the cin steam                //
    ////////////////////////////////////////////////////////////
    // Rational ob1(1, 3);
    // Rational ob2(1, 2);
    // ob1.input(cin);
    // ob2.input(cin);
    // Rational result ;
    // result = ob1.add(ob2);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 5/6

    ////////////////////////////////////////////////////////////
    //.add() test for inputs from the file steam              //
    ////////////////////////////////////////////////////////////
    // ifstream ifstreamObj1, ifstreamObj2;
    // ifstreamObj1.open("ch10_7_first_number.txt");
    // ifstreamObj2.open("ch10_7_second_number.txt");
    // if(ifstreamObj1.fail()){
    //     cout << "MMMMMM Error opening ifstreamObj1.txt";
    //     exit(1);
    // } 
    // if(ifstreamObj1.fail()){
    //     cout << "MMMMMMM Error opening ifstreamObj2.txt";
    //     exit(1);
    // }   
    // Rational ob11;
    // Rational ob12;
    // ob11.input(ifstreamObj1);
    // ob12.input(ifstreamObj2);
    // Rational result ;
    // result = ob11.add(ob12);
    // cout << result.get_numerator() << "/" << result.get_denominator() << endl; // 5/6

   

    return 0;
}