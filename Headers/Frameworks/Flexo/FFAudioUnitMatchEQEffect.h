//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioUnitAnalyzingEffect.h>

@class FFAnchoredObject;

__attribute__((visibility("hidden")))
@interface FFAudioUnitMatchEQEffect : FFAudioUnitAnalyzingEffect
{
    int _mode;
    FFAnchoredObject *_matchComponent;
}

- (void)removeSubEffect:(id)arg1;
- (void)addSubEffect:(id)arg1;
- (id)matchObject;
- (void)setMatchObject:(id)arg1;
- (void)setMatchEQMode:(int)arg1;

@end

