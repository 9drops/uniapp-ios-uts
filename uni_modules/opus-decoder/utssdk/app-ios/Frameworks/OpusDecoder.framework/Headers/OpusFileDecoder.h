//
//  OpusFileDecoder.h
//  OpusFileDecoder
//
//  Created by drops on 2024/6/16.
//

#ifndef OpusFileDecoder_h
#define OpusFileDecoder_h

enum {
    ErrOpenOpusFile    = -1,
    ErrOpenWavFile     = -2,
    ErrCreatDecoder    = -3,
    ErrReadOpusHeader  = -4,
    ErrReadOpusPayload = -5,
    ErrOpusDecode      = -6,
    ErrDecodedDataSize = -7,
};


/// 将opus文件转换成wav文件
/// - Parameters:
///   - opusFilePath: opus本地文件路径
///   - outPutWavPath: 转换后生成的wav文件路径
///   返回0成功，其他失败
int opus2wav(const char *opusFilePath, const char *outPutWavPath);

#endif
