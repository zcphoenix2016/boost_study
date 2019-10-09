// boost_study.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <boost/format.hpp>
#include <boost/algorithm/string.hpp>

using namespace std;

int main()
{
    string str = " zcp, , phoenix,  1234 ";
    cout << str << endl;

    vector<string> splitVec;
    boost::algorithm::split(splitVec, str, boost::algorithm::is_any_of(","));
    for (auto iter = splitVec.begin(); iter != splitVec.end(); iter++) {
        boost::algorithm::trim(*iter);
        cout << *iter << "/" << endl;
    }

    cout << endl << boost::format("writing %1%, x = %2% : %3%-th try %1%") % "toto" % 40.23 % 50 << endl;
}
