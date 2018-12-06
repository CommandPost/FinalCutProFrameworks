//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMatchTool.h>

@class FFColorMatchHueReference, FFHistoAnalysis, NSMutableDictionary;

@interface FFColorMatchHueTool : FFMatchTool
{
    FFColorMatchHueReference *_referenceObj;
    FFHistoAnalysis *_histoRef;
    NSMutableDictionary *_userInfo;
}

+ (id)displayName;
+ (id)toolbarFacet;
+ (id)cursor;
+ (struct CGColorSpace *)processingColorSpace;
+ (id)newPixelBufferFromMedia:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
+ (id)newPixelBufferFromAnchoredObject:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withEffectCount:(long long)arg3;
- (void)dealloc;
- (void)becomeActiveTool;
- (void)resign:(id)arg1;
- (void)resignActiveTool;
- (void)referenceChanged:(id)arg1;
- (void)completedMatchOnSelection;
- (BOOL)applyMatchToOnAnchoredObject:(id)arg1;

@end

