//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFAnchoredComponent;

__attribute__((visibility("hidden")))
@interface FFAnchoredComponentProvider : FFProvider
{
    FFAnchoredComponent *_component;
    long long _effectCount;
}

+ (id)extensions;
+ (id)utis;
- (id)object;
- (id)displayName;
- (void)_setupSources;
- (long long)effectCount;
- (void)dealloc;
- (id)initWithAnchoredComponent:(id)arg1 effectCount:(long long)arg2;

@end

