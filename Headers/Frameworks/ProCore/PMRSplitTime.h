//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PMRSplitTime : NSObject
{
    unsigned long long _splitTime;
    NSString *_key;
    NSString *_comment;
}

- (id)initWithKey:(id)arg1 comment:(id)arg2;
- (void)dealloc;
@property(nonatomic) unsigned long long splitTime; // @synthesize splitTime=_splitTime;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

