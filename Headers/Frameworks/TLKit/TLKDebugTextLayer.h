//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class NSSet;

@interface TLKDebugTextLayer : CATextLayer
{
    BOOL _allowsHitTesting;
    NSSet *_disabledAnimationKeys;
}

@property(copy, nonatomic) NSSet *disabledAnimationKeys; // @synthesize disabledAnimationKeys=_disabledAnimationKeys;
@property(nonatomic) BOOL allowsHitTesting; // @synthesize allowsHitTesting=_allowsHitTesting;
- (id)actionForKey:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

@end

