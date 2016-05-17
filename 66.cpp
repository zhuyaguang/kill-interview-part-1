#include <assert.h>  
#include <iostream>  
using namespace std;  
  
#define     KEY_CHAR            ' '           
  
  
void ReverseString(char *pszStr, int i32FirIndex, int i32EndIndex)  
{  
    assert(NULL != pszStr || i32FirIndex >= 0 || i32EndIndex >= 0);  
    if (i32EndIndex <= i32FirIndex) return;  
  
    char chTemp;  
    int i32FirIdx = i32FirIndex;  
    int i32EndIdx = i32EndIndex;  
  
    for (; i32FirIdx < i32EndIdx; i32FirIdx++, i32EndIdx--)  
    {  
        chTemp = pszStr[i32FirIdx];  
        pszStr[i32FirIdx] = pszStr[i32EndIdx];  
        pszStr[i32EndIdx] = chTemp;   
    }  
}  
  
bool IsNeedReverseString(char *pszStr, int nLen)  
{  
    assert(NULL != pszStr || nLen > 0);  
  
    bool bRet = false;  
    for (int i32I = 0; i32I < nLen; i32I++)  
    {  
        if (KEY_CHAR == pszStr[i32I])  
        {  
            bRet = true;  
            break;  
        }  
    }  
  
    return bRet;  
}  
  
  
int main()  
{  
    char aszStr[] = {"I am a boy."};  
  
    if (IsNeedReverseString(aszStr, strlen(aszStr)))  
    {  
        //Step 1:  
        ReverseString(aszStr, 0, strlen(aszStr) - 1);  
  
        //Step 2:  
        int i32CurIdx = 0;  
        for (int i32I = 0; i32I < (int)strlen(aszStr); i32I++)  
        {  
            if (KEY_CHAR == aszStr[i32I])  
            {  
                ReverseString(aszStr, i32CurIdx, i32I - 1);  
                i32CurIdx = i32I + 1;  
            }  
        }  
        ReverseString(aszStr, i32CurIdx, (int)strlen(aszStr) - 1);  
    }  
  
    cout << aszStr << endl;  

	system("pause");
}  
	

