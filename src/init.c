/*
 * @Author: RetliveAdore lizaterop@gmail.com
 * @Date: 2024-07-12 20:50:10
 * @LastEditors: RetliveAdore lizaterop@gmail.com
 * @LastEditTime: 2024-07-25 22:28:38
 * @FilePath: \Crystal-Audio\src\init.c
 * @Description: 
 * Coptright (c) 2024 by RetliveAdore-lizaterop@gmail.com, All Rights Reserved. 
 */
#include <AudioDfs.h>

void **CRCoreFunList = NULL;
void **CRThreadFunList = NULL;

extern CRBOOL _inner_craudio_init_();
extern void _inner_craudio_uninit_();

CRAPI CRBOOL CRModInit(void** ptr)
{
    if (ptr[0] == ptr[1])
        return CRFALSE;
    CRCoreFunList = ptr;
    return _inner_craudio_init_();
}

CRAPI void CRModUninit(void)
{
    _inner_craudio_uninit_();
}