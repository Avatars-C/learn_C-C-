#ifndef _INTCELL_H_
#define _INTCELL_H_

class IntCell
{
public:
    explicit IntCell(int initValue=0);
    int read() const;
    void write(int x);
    ~IntCell();

private:
    int storedValue;
    /* data */  
};

// Intcell::Intcell(/* args */)
// {
// }

// Intcell::~Intcell()
// {
// }

#endif