//
// Created by plusl on 2018/2/4.
//

#include "LotteryList.h"
#include <fstream>


bool LotteryList::loadFromFile(const char* fileName) {
    std::ifstream iFile;
    iFile.open(fileName, std::ios::in);
    if (iFile.is_open() == false)
        return false;
    std::string name;
    while(iFile) {
        getline(iFile, name);
        this->nameList.push_back(name);
    }
    return true;
}

LotteryList::iterator LotteryList::prevItreator(iterator nowIterator) {
    if (this->nameList.size() <= 1)
        return nowIterator;
    if (nowIterator != this->nameList.begin())
        return std::prev(nowIterator);
    else
        return std::prev(this->nameList.end());
}

LotteryList::iterator LotteryList::nextItreator(iterator nowIterator) {
    if (this->nameList.size() <= 1)
        return nowIterator;
    if (std::next(nowIterator) != this->nameList.end())
        return std::next(nowIterator);
    else
        return this->nameList.begin();
}

LotteryList::iterator LotteryList::erase(iterator nowIterator) {
    return this->nameList.erase(nowIterator);
}

LotteryList::iterator LotteryList::end() {
    return this->nameList.end();
}

LotteryList::iterator LotteryList::begin() {
    return this->nameList.begin();
}