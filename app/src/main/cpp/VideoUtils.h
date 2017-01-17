//
// Created by Mikiller on 2017/1/16.
//

#ifndef NDKTEST_VIDEOUTILS_H
#define NDKTEST_VIDEOUTILS_H

#define TAG "VIDEO_UTILS"

extern "C"{
#include "PrivateUtils.h"
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>


void initYUVSize(int, int);

AVCodecID getVideoCodecId();

AVCodecContext* initVideoCodecContext();

int openVideoEncoder();

AVStream* initAvVideoStream(AVFormatContext*, int *);

int initAvVideoFrame();

AVRational getVideoTimebase();

void analyzeYUVData(uint8_t *yData, uint8_t *uData, uint8_t *vData, int rowStride, int pixelStride);

int encodeYUV(int64_t *);

void writeVideoFrame(AVFormatContext*, int, int64_t);

void freeVideoReference();

};


#endif //NDKTEST_VIDEOUTILS_H