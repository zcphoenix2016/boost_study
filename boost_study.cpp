// boost_study.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <boost/format.hpp>
#include <boost/algorithm/string.hpp>

int main()
{
    std::string str = " zcp, , phoenix,  1234 ";
    std::cout << str << std::endl;

    std::cout << "--------------------------------" << std::endl;
    std::vector<std::string> splitVec;
    boost::algorithm::split(splitVec, str, boost::algorithm::is_any_of(","));

    auto func = [](std::string& str) {boost::algorithm::trim(str); std::cout << str << "/" << std::endl; };
    std::for_each(splitVec.begin(), splitVec.end(), func);
    std::cout << "--------------------------------" << std::endl;

    boost::format fmter("writing %1%, x = %2% : %3%-th try %1%");
    fmter % "toto";
    fmter % 40.23;
    fmter % 50;
    std::cout << fmter << std::endl;

    str = fmter.str();
    std::cout << str << std::endl;
}
