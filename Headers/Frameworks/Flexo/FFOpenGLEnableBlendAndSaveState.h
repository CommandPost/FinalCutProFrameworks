//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFOpenGLEnableBlendAndSaveState : NSObject
{
    float _saveColor[4];
    unsigned char _saveSmooth;
    unsigned char _saveBlend;
    int _saveBlendSrc;
    int _saveBlendDst;
    unsigned char _wasEnabled;
}

- (void)dealloc;
- (void)restoreStateWithContext:(struct _CGLContextObject *)arg1;
- (id)initWithContext:(struct _CGLContextObject *)arg1;

@end

