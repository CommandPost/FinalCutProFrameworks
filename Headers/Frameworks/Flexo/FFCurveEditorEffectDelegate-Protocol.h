//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class CHChannelBase, FFEffect, NSArray;

@protocol FFCurveEditorEffectDelegate <NSObject>
- (void)setDefaultEffect:(FFEffect *)arg1 andChannel:(CHChannelBase *)arg2;
- (NSArray *)effectsToDisplay;

@optional
- (BOOL)sender:(id)arg1 willSetChannel:(CHChannelBase *)arg2;
@end

