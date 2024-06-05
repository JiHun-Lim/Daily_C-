#include "AccountArray.h"
#include "BankingCommonDecl.h"

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int len) : arrlen(len)
{
    arr = new ACCOUNT_PTR[len];

}

ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[] (int idx)
{
    if(idx <0 || idx >= arrlen)
    {
        cout << "Array Index Out of Range" << endl;
        exit(1);
    }
    return arr[idx];
}

ACCOUNT_PTR BoundCheckAccountPtrArray::operator[] (int idx) const
{
    if(idx <0 || idx >= arrlen)
    {
        cout << "Array Index Out of Range" << endl;
        exit(1);
    }
    return arr[idx];
}

int BoundCheckAccountPtrArray::GetArrLen() const
{
    return arrlen;
}

BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray()
{
    delete []arr;
}