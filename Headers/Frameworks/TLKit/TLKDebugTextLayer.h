//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATextLayer.h"

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

