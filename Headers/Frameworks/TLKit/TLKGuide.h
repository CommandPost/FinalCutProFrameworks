//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSColor, NSMutableArray, TLKGuideLayer;

@interface TLKGuide : NSObject
{
    id _owner;
    NSColor *_backgroundColor;
    NSColor *_foregroundColor;
    TLKGuideLayer *_layer;
    CALayer *_backgroundLayer;
    NSMutableArray *_parts;
    CDStruct_1b6d18a9 _time;
    BOOL _alignToEnd;
}

@property BOOL alignToEnd; // @synthesize alignToEnd=_alignToEnd;
@property(readonly) TLKGuideLayer *layer; // @synthesize layer=_layer;
@property id owner; // @synthesize owner=_owner;
- (struct CGRect)frameForPart:(id)arg1;
@property CDStruct_1b6d18a9 time; // @dynamic time;
@property NSColor *foregroundColor; // @dynamic foregroundColor;
@property NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

