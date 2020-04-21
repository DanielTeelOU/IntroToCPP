//
// Created by Danny Teel on 4/21/20.
//

class MyNumber {
public:
    MyNumber(int x = 0) {}

    void setX(int yourNum)
    {
        x = yourNum;
    }

    int getX()
    {
        return x;
    }

protected:
    int x;
};

class MyNumberWithBackup: public MyNumber {
public:
    void makeBackup()
    {
        x = backupX;
    }

    int restore()
    {
        return (backupX);
    }

protected:
    int backupX;
};

int main()
{
    return 0;
}
