//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/OZSuperEllipseOSC.h>

@interface OZMotionSuperEllipseOSC : OZSuperEllipseOSC
{
    BOOL _isObserving;
}

- (void)calculateSnapBounds:(id)arg1;
- (void)cleanupSnapping;
- (void)setupSnapping:(BOOL)arg1;
- (BOOL)hitAnotherShape:(id)arg1;
- (void)drawWithDrawProperties:(id)arg1;
- (_Bool)shouldDisplayOSC;
- (void)notify:(unsigned int)arg1;
- (struct OZShape *)validate:(struct OZShape *)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

