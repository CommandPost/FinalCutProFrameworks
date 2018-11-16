//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsLayoutItemLookupKey : NSObject <NSCopying, NSCoding>
{
    NSString *m_layoutKey;
    NSDictionary *m_layoutItemProperties;
}

- (id)description;
- (id)_layoutItemProperties;
- (id)_layoutItemKey;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 layoutItemKey:(id)arg2;

@end
