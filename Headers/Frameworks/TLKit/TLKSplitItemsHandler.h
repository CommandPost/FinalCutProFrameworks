//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@interface TLKSplitItemsHandler : TLKTimelineHandler
{
    unsigned int _shouldBlade:1;
}

- (BOOL)respondsToSelector:(SEL)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)startHandling:(id)arg1;
- (void)stopHandling:(id)arg1;
- (BOOL)itemLevelSkimmingEnabled;
- (void)splitAtCurrentLocation:(id)arg1;
- (void)updateSkimming:(id)arg1;

@end

