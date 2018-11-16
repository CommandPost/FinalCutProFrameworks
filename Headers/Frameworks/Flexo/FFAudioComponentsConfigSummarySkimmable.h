//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSkimmableProxy.h>

#import "FFMD5Protocol.h"

@class FFAnchoredObject, NSMapTable;

__attribute__((visibility("hidden")))
@interface FFAudioComponentsConfigSummarySkimmable : FFSkimmableProxy <FFMD5Protocol>
{
    FFAnchoredObject *m_object;
    NSMapTable *m_cachedProviderMap;
}

+ (struct NSObject *)skimmableForAnchoredObject:(id)arg1;
- (id)skimmableAudioLevelEffects;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (id)skimmableDefaultProviderOptions;
- (id)newSkimmableProviderWithOptions:(id)arg1;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1;

@end
