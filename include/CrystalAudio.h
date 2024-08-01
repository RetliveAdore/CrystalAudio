/*
 * @Author: RetliveAdore lizaterop@gmail.com
 * @Date: 2024-07-12 20:20:42
 * @LastEditors: RetliveAdore lizaterop@gmail.com
 * @LastEditTime: 2024-08-01 22:38:51
 * @FilePath: \Crystal-Audio\include\CrystalAudio.h
 * @Description: 
 * Coptright (c) 2024 by RetliveAdore-lizaterop@gmail.com, All Rights Reserved. 
 */
#ifndef _INCLUDE_CRYSTALAUTIO_H_
#define _INCLUDE_CRYSTALAUTIO_H_

#include "AudioDfs.h"

extern void** CRAudioFunList;

/**
 * 手动初始化额外的依赖项
 */
typedef CRBOOL(*CRAUDIOINIT)(void** alg, void** thr);
#define CrystalAudioInit ((CRAUDIOINIT)CRAudioFunList[0])

/**
 * 创建一个音频对象
 */
typedef void(*CRAUDIOCREATE)(CRAudioStreamCbk cbk, CRWWINFO* inf);
#define CRAudioCreate ((CRAUDIOCREATE)CRAudioFunList[2])

/**
 * 自动加载WAV文件并以动态数组形式存储
 */
typedef CRBOOL(*CRLOADWW)(const CRCHAR* path, CRSTRUCTURE out, CRWWINFO *inf);
#define CRLoadWW ((CRLOADWW)CRAudioFunList[4])

#endif
