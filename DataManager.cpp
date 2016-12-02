#include "DataManager.h"


DataManager DataManager::sDM;

DataManager::DataManager()
{

}

bool DataManager::setupExists()
{
    return false;
}

DataManager *DataManager::getDM()
{
    return &sDM;
}


