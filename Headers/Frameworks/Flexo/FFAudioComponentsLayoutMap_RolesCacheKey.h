//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAudioComponentsLayoutItem, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsLayoutMap_RolesCacheKey : NSObject
{
    NSString *m_layoutKey;
    FFAudioComponentsLayoutItem *m_layoutItemKey;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 layoutItemKey:(id)arg2;

@end

