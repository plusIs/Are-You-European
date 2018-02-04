//
// Created by plusl on 2018/2/4.
//

#ifndef ARE_YOU_EUROPEAN_LOTTERYLIST_H
#define ARE_YOU_EUROPEAN_LOTTERYLIST_H

#include <list>
#include <string>

class LotteryList {
public:
    typedef std::list<std::string>::iterator iterator;
    bool loadFromFile(const char* fileName); // 从文件加载名单
    iterator prevItreator(iterator nowIterator); // 若是第一个迭代器 则 循环
    iterator nextItreator(iterator nowIterator); // 若是最后一个迭代器 则 循环
    iterator erase(iterator nowIterator); // nameList.erase()
    iterator begin(); // nameList.begin()
    iterator end(); // nameList.end()


private:
    std::list<std::string> nameList; // 名单

};


#endif //ARE_YOU_EUROPEAN_LOTTERYLIST_H
