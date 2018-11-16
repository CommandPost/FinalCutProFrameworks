//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSource.h>

@class FFAnchoredObject;

__attribute__((visibility("hidden")))
@interface FFAnchoredObjectMediaSource : FFMediaSource
{
    FFAnchoredObject *m_object;
    BOOL m_allowAnchoredObjectModifications;
}

- (void)_channelsChanged;
- (struct NSObject *)skimmableObject;
- (id)backingAnchoredObject;
- (void)setRole:(id)arg1;
- (id)role;
- (void)setPlayEnable:(int)arg1;
- (int)playEnable;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (id)sourceType;
- (void)setAllowsAnchoredObjectModifications:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1 referenceSourceChannels:(id)arg2;

@end

