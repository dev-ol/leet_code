
#include <string>
#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>  


std::string multiply(std::string num1, std::string num2);


int main()
{

    std::cout << multiply("1233","45644") << std::endl;;
    return 0;
}

std::string multiply(std::string num1, std::string num2)
{

    int carry = 0;
    int count = 0, count2=0;
    int sum;
    int result, r2;
    std::string result_string;


    for (int i = num2.length(); i > 0; i--)
    {

        for (int x = num1.length(); x > 0; x--)
        {
            result = ((num1[x - 1] - '0') * (num2[i - 1] - '0')) + carry;

            carry = 0;

            if (result >= 10)
            {
                carry = result / 10;
                result = result % 10;
            }

            if (count == 0)
            {
                sum = result;
            }
            else
            {
                sum = sum + (result * pow(10, count));
            }
            count++;
        }

        count = 0;

        if(count2 != 0){
            r2 = r2 + (sum * pow(10, count2));
        }else{
            r2 = sum;
        }

        count2++;

        result_string = std::to_string(r2) ;
    }

    return result_string;
}
