//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFMediaIdentifierAliasMapEntry : NSObject
{
    NSString *_identifier;
    int _mode;
}

+ (id)newEntryWithIdentifier:(id)arg1 mode:(int)arg2;
@property(readonly) int mode; // @synthesize mode=_mode;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 mode:(int)arg2;

@end

