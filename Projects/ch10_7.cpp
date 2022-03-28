#include <iostream>
#include <fstream>

using namespace std;

class Rational
{
    int numerator;
    int denominator;
public:
    void set_numerator(int a){
        numerator = a;
    }
    
    void set_denominator(int b){
        denominator = b;
    }
    
    int get_numerator(){
        return numerator;
    }
    
    int get_denominator (){
        return denominator;
    }

    Rational()
    {
        // default constructor
    }

    Rational(int a)
    {
        numerator = a;
        denominator = 1;
    }

    Rational(int a, int b)
    {
        numerator = a;
        denominator = b;
    }

    void input(istream &a)
    {
        cout << "Enter the rational number in the format a/b" << endl;
        char x;
        a.get(x);
        char arr1[10];
        char arr2[10];
        bool start_denominator  = false;
        int counter = 0;
       
        while(x != '\n' && !a.eof())
        {
            if(x == '/'){
                start_denominator = true;
                counter = 0;
                a.get(x);
                continue; 
            }else{
                if(start_denominator){
                   arr2[counter++] = x; 
                   arr2[counter] = '\n';
                }else{
                    arr1[counter++] = x;
                    arr1[counter] = '\n';
                }

            }
        a.get(x);
        }
        numerator = atoi(arr1);
        denominator = atoi(arr2);
    }

    void output(ostream &b)
    {
        b<< numerator << "/"<< denominator;
    }

    Rational add(Rational b)
    {
        Rational a = *this;
        Rational tmp;
        tmp.set_numerator(a.numerator * b.denominator + b.numerator * a.denominator); 
        tmp.set_denominator(a.denominator * b.denominator);
        return tmp;
    }

    Rational sub(Rational b)
    {
        Rational a = *this;
        Rational tmp;
        tmp.numerator = (a.numerator * b.denominator - b.numerator * a.denominator);
        tmp.denominator = (a.denominator * b.denominator);
        return tmp;
    }

    Rational mul(Rational b)
    {
        Rational a = *this;
        Rational tmp;
        tmp.numerator = (a.numerator * b.numerator) ;
        tmp.denominator =  (a.denominator * b.denominator);
        return tmp;
    }

    Rational div(Rational b)
    {
        Rational a = *this;
        Rational tmp;
        tmp.numerator = (a.numerator * b.denominator) ;
        tmp.denominator = (a.denominator * b.numerator);
        return tmp;
    }

    bool less(Rational b)
    {
        Rational a(numerator, denominator);
        // rewrite inputs and b in
        // if()
        if (a.denominator < 0)
        {
            a.numerator *= -1;
            a.denominator *= -1;
        }

        if (b.denominator < 0)
        {
            b.numerator *= -1;
            b.denominator *= -1;
        }

        int lcm = lcm_(a.denominator, b.denominator);
        int a_new_numerator = (lcm / a.denominator) * a.numerator;
        int b_new_numerator = (lcm / b.denominator) * b.numerator;

        if (a_new_numerator < b_new_numerator)
            return true;
        else 
            return false;
    }

    Rational neg()
    {
        Rational result;
        result.set_numerator(numerator * -1);
        result.set_denominator(denominator);
        return result;
    }

    ////////////////////
    // HELPER METHODS //
    ////////////////////

    // Recursive method to return gcd of a and b
    int gcd_(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd_(b % a, a);
    }

    // method to return LCM of two numbers
    int lcm_(int a, int b)
    {
        return (a / gcd_(a, b)) * b;
    }
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

   
    // Tests for output() method
    // Test case 1 - ouput to standard output
    Rational ob1(66, 22);
    ob1.output(cout); // printed to the console
    

    // Test case 2 - output to a file
    ofstream ofstream_obj;
    ofstream_obj.open("ch10_7_output.txt");
    if(ofstream_obj.fail())
        cout<< "cannot open ch10_7_output.txt";
    ob1.output(ofstream_obj); // print to ch10_7_output.txt
    return 0;
}