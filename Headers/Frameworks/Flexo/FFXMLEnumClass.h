//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FFXMLEnumClass : NSObject
{
    NSDictionary *_strByInt;
    NSDictionary *_intByStr;
}

- (id)stringValueForInt:(int)arg1;
- (int)intValueForString:(id)arg1;
- (void)dealloc;
- (id)initWithValues:(const CDStruct_c22e37be *)arg1;

@end

