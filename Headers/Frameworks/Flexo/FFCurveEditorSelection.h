//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface FFCurveEditorSelection : NSObject
{
    unsigned int type;
    struct CGPoint location;
    CDStruct_1b6d18a9 time;
    CALayer *layer;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer;
@property(nonatomic) struct CGPoint location; // @synthesize location;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time;
@property(nonatomic) unsigned int type; // @synthesize type;
- (void)dealloc;
- (void)updateLocation:(struct CGPoint)arg1;
- (id)init;

@end

