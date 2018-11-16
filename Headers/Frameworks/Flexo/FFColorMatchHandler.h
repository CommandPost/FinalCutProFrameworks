//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKTimelineHandler.h"

@class FFContext, FFMedia;

__attribute__((visibility("hidden")))
@interface FFColorMatchHandler : TLKTimelineHandler
{
    FFContext *_context;
    FFMedia *_media;
}

- (void)dealloc;
- (void)startHandling:(id)arg1;
- (void)stopHandling:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)updateSkimming:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)_resetPlayheadSkimming:(id)arg1;

@end

