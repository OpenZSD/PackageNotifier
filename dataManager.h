#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QString>

class DataManager
{
public:
    static DataManager *getDM();
    bool setupExists();
    void updateResidents(QString csvPath);

protected:
    DataManager();

private:
    static DataManager sDM;
};

#endif // DATAMANAGER_H
