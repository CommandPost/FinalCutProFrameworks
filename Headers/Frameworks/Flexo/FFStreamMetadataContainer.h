//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigTimeRangeObj, NSString;

__attribute__((visibility("hidden")))
@interface FFStreamMetadataContainer : NSObject
{
    NSString *_key;
    id _value;
    FigTimeRangeObj *_range;
}

- (id)initWithKey:(id)arg1 value:(id)arg2 range:(CDStruct_e83c9415)arg3;
- (void)dealloc;
- (id)key;
- (id)value;
- (CDStruct_e83c9415)range;

@end
