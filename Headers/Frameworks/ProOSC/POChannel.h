//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface POChannel : POOnScreenControl
{
    struct OZChannelRef *_pChannelRef;
}

- (void)setChannelRef:(struct OZChannelBase *)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

