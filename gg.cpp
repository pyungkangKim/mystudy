//
//  main.cpp
//  HW2
//
//  Created by 신지현 on 2017. 9. 25..
//  Copyright © 2017년 신지현. All rights reserved.
//
 
#include <iostream>
#include <string>
 
#define SIZE 100
 
int main(){
 std::string s;
 std::string b;
 int sum;
 std::cin>>s;
 std::cin>>b;
 int intValue = atoi(s.c_str());
 int intValue1 = atoi(b.c_str());
 sum=intValue+intValue1;
 std::cout<<sum;
 
}