//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAudioUnitEffect, FFContext, FFEffectBundlePart;

__attribute__((visibility("hidden")))
@interface FFEffectBundleWindowControllerInfo : NSObject
{
    BOOL _preferGeneric;
    FFContext *_context;
    FFEffectBundlePart *_effectBundlePart;
    FFAudioUnitEffect *_effect;
}

+ (id)windowControllerInfoWithContext:(id)arg1 preferGeneric:(BOOL)arg2;
- (id)initWithContext:(id)arg1 preferGeneric:(BOOL)arg2;
- (void)dealloc;
@property(retain, nonatomic) FFAudioUnitEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) FFEffectBundlePart *effectBundlePart; // @synthesize effectBundlePart=_effectBundlePart;
@property(readonly, nonatomic) BOOL preferGeneric; // @synthesize preferGeneric=_preferGeneric;
@property(readonly, nonatomic) FFContext *context; // @synthesize context=_context;

@end

