//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class FFCHObservableFolder;

__attribute__((visibility("hidden")))
@interface FFMotionPathOSC : FFProOSC
{
    FFCHObservableFolder *_channelFolder;
    FFProOSC *_resignOnMouseUpToOSC;
}

- (BOOL)shouldDrawUsingDrawProperties:(id)arg1;
- (BOOL)oscDrawsAboveOtherOSCs;
- (void)mouseUp:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setDirty:(BOOL)arg1;
- (BOOL)supportsTool:(Class)arg1;
- (void)dealloc;
- (id)initWithHeXFormEffect:(id)arg1 effectStack:(id)arg2 resignOnMouseUpToOSC:(id)arg3;

@end

