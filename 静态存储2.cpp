//
//  main.cpp
//  静态存储－2
//
//  Created by s20151104710 on 16/10/17.
//  Copyright © 2016年 s20151104710. All rights reserved.
//

#include <iostream>
#include"stdio.h"
#define N 5
struct Node
{
    char name[50];
    int age;
    struct Node *next;
};
int main()
{
    struct Node *head,*p;
    struct Node a={"aaa",22,NULL},b={"bbb",33,NULL},c={"ccc",44,NULL};
    head=&a;
    a.next=&b;
    b.next=&c;
    head=p;
    printf("%s  %d\n",p->name,p->age);
    return 0;
}