//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSMutableArray, NSProColor, TLKGuideLayer;

@interface TLKGuide : NSObject
{
    id _owner;
    NSProColor *_backgroundColor;
    NSProColor *_foregroundColor;
    TLKGuideLayer *_layer;
    CALayer *_backgroundLayer;
    NSMutableArray *_parts;
    CDStruct_1b6d18a9 _time;
}

@property(readonly) TLKGuideLayer *layer; // @synthesize layer=_layer;
@property id owner; // @synthesize owner=_owner;
@property CDStruct_1b6d18a9 time; // @dynamic time;
@property NSProColor *foregroundColor; // @dynamic foregroundColor;
@property NSProColor *backgroundColor; // @dynamic backgroundColor;
- (struct CGRect)frameForPart:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

