//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CATextLayer, NSMutableArray;

@interface TLKRulerSegmentLayers : NSObject
{
    BOOL _hidden;
    CALayer *_tickLayer;
    CATextLayer *_labelLayer;
    NSMutableArray *_subTicksLayers;
}

@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSMutableArray *subTicksLayers; // @synthesize subTicksLayers=_subTicksLayers;
@property(retain, nonatomic) CATextLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(retain, nonatomic) CALayer *tickLayer; // @synthesize tickLayer=_tickLayer;
- (void)hideSubTicksLayersStartingAt:(unsigned long long)arg1;
- (void)hide;
- (void)dealloc;
- (id)init;

@end

