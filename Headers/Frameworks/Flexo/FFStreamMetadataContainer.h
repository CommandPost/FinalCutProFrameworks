//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FigTimeRangeObj, NSString;

__attribute__((visibility("hidden")))
@interface FFStreamMetadataContainer : NSObject
{
    NSString *_key;
    id _value;
    FigTimeRangeObj *_range;
}

- (CDStruct_e83c9415)range;
- (id)value;
- (id)key;
- (void)dealloc;
- (id)initWithKey:(id)arg1 value:(id)arg2 range:(CDStruct_e83c9415)arg3;

@end

