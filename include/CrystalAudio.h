/*
 * @Author: RetliveAdore lizaterop@gmail.com
 * @Date: 2024-07-12 20:20:42
 * @LastEditors: RetliveAdore lizaterop@gmail.com
 * @LastEditTime: 2024-07-23 20:45:42
 * @FilePath: \Crystal-Audio\include\CrystalAudio.h
 * @Description: 
 * Coptright (c) 2024 by RetliveAdore-lizaterop@gmail.com, All Rights Reserved. 
 */
#ifndef _INCLUDE_CRYSTALAUTIO_H_
#define _INCLUDE_CRYSTALAUTIO_H_

#include "AudioDfs.h"

extern void** CRAudioFunList;

/**
 * 创建一个音频对象
 */
typedef void(*CRAUDIOCREATE)(CRAudioStreamCbk cbk, CRWWINFO* inf);
#define CRAudioCreate (CRAUDIOCREATE)(CRAudioFunList[0])

#endif
