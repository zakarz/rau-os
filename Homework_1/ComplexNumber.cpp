#include <cmath>
#include "ComplexNumber.h"
#include <iostream>

using namespace std;

ComplexNumber::ComplexNumber()
{
    re = 0;
    im = 0;
}

 ComplexNumber::ComplexNumber(double r, double i) 
    {
        re = r;
        im = i;
    }

 ComplexNumber::ComplexNumber(ComplexNumber& cmp) 
    {
        re = cmp.re;
        im = cmp.im;
    }

 void ComplexNumber::addValue(double a, double b) 
 {
     re = a;
     im = b;
 }

 void swap(ComplexNumber xp, ComplexNumber yp)
 {
     ComplexNumber temp = xp;
     xp = yp;
     yp = temp;
 }
   

    double ComplexNumber::complexAbs() 
    {
        return sqrt(re * re + im * im);
    }

    void ComplexNumber::print() const {
        if (im == 0) {
            cout << re << endl;
        }
        else if (re == 0) {
            cout << im << 'i' << endl;
        }
        else if (im < 0) {
            cout << re << im << 'i' << endl;
        }
        else {
            cout << re << '+' << im << 'i' << endl;
        }
    }

    ComplexNumber ComplexNumber::operator+ (const ComplexNumber& cmp) 
    {
        ComplexNumber temp;

        temp.re = re + cmp.re;
        temp.im = im + cmp.re;

        return temp;
    }

    ComplexNumber ComplexNumber::operator - (ComplexNumber& cmp) 
    {
        ComplexNumber temp;

        temp.re = re - cmp.re;
        temp.im = im - cmp.re;

        return temp;
    }

    ComplexNumber ComplexNumber::operator * (double numb) 
    {
        ComplexNumber temp;

        temp.re = re * numb;
        temp.im = im * numb;

        return temp;
    }
    void printArray(ComplexNumber arr[], int n)
    {
        for (int i = 0; i < n; i++) {
            arr[i].print();
        }
    }
    void selectionSort(ComplexNumber cmp_arr[],int q)
    {
       
        int i, j, min_idx;

        
        for (i = 0; i < q - 1; i++)
        {
            // Find the minimum element in unsorted complex number array
            min_idx = i;
            for (j = i + 1; j < q; j++)
                if (cmp_arr[j].complexAbs() < cmp_arr[min_idx].complexAbs())
                { 
                    min_idx = j;
                }
            // Swap the found minimum element with the first element
            ComplexNumber tmp = cmp_arr[min_idx];
            cmp_arr[min_idx] = cmp_arr[i];
            cmp_arr[i] = tmp;
        }
    }
    



