//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"

@class FFAnchoredObject, NSString;

__attribute__((visibility("hidden")))
@interface FFChannelObjectReference : FFBaseDSObject <NSCopying>
{
    FFAnchoredObject *_referencedObject;
    NSString *_channelPath;
}

+ (id)copyClassDescription;
- (id)initWithReferencedObject:(id)arg1 andChannelPath:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)referencedObject;
- (void)setReferencedObject:(id)arg1;
- (id)channelPath;
- (void)setChannelPath:(id)arg1;

@end
