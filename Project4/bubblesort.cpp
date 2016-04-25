#include "bubblesort.h"
#include "employee.h"
#include "empdatabase.h"

#include <iostream>

BubbleSort::BubbleSort()
{
   bool compare(empDataBase* empVector, int i, int j);

};
void BubbleSort::Sort(empDataBase* empVector)
{
    bool sorted = false;
    int n = empVector->getSize();
    while(!sorted){
        sorted = true;

        for(int i = 1; i < n; i++){
            if(compare(empVector, i, i-1)){
                empVector->swap(i-1, i);
                sorted = false;
            }
        }
        n--;
    }
}




class BubbleSortFN : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return !empVector->compareFN(i, j);
    }

};

class BubbleSortFNReverse : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return empVector->compareFN(i, j);
    }
};

class BubbleSortLN : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return !empVector->compareLN(i, j);
    }
};
class BubbleSortLNReverse : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return empVector->compareLN(i, j);
    }
};

class BubbleSortSalary : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return !empVector->compareSalary(i, j);
    }
};
class BubbleSortSalaryReverse : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return empVector->compareSalary(i, j);
    }
};

class BubbleSortYear : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return !empVector->compareYR(i, j);
    }
};
class BubbleSortYearReverse : public BubbleSort{
protected:
    virtual bool compare(empDataBase* empVector, int i, int j) const {
        return empVector->compareYR(i, j);
    }
};
