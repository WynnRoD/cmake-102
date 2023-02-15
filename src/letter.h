#ifndef __org_letter_h
#define __org_letter_h

class letter
{
private:
    char value;

public:
    static void ready();

    letter();

    ~letter();

    char symbol() const;
};

#endif