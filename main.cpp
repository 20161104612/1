//
//  main.cpp
//  1
//
//  Created by 20161104612 on 18/6/26.
//  Copyright © 2018年 20161104612. All rights reserved.
//

/*#include <iostream>

#define N 10
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[N];
    int i;
    int max= -32768;
    int min= 32767;
    double avg=0;
    
    cout <<"请评委打分"<<endl;
    for(i=0;i<N;i++)
    {
        cout<<"第"<<i+1<<"位评委打分：";
        cin>>arr[i];
        
        avg +=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    avg -=min+max;
    avg /=(N-2);
    cout<<"该表演的平均分是："<<avg<<endl;
    return 0;
}*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string Trim(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

int main()
{
    ifstream fin("scoresheet.csv"); //打开文件流操作
    string line;
    while (getline(fin, line))   //整行读取，换行符“\n”区分，遇到文件尾标志eof终止读取
    {
        cout <<"原表字符串："<< line << endl; //整行输出
        istringstream sin(line); //将整行字符串line读入到字符串流istringstream中
        vector<string> fields; //声明一个字符串向量
        string field;
        while (getline(sin, field, ',')) //将字符串流sin中的字符读入到field字符串中，以逗号为分隔符
        {
            fields.push_back(field); //将刚刚读取的字符串添加到向量fields中
        }
    }
    return EXIT_SUCCESS;
}
