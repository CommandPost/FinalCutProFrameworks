//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredSequenceSettingsModule.h>

@class FFVideoFormat;

__attribute__((visibility("hidden")))
@interface FFAnchoredSequenceConfirmSettingsModule : FFAnchoredSequenceSettingsModule
{
    FFVideoFormat *_bestGuess;
    struct CGSize _clipSize;
}

- (void)closingWithCode:(int)arg1;
- (BOOL)loadView;
- (void)changeVideoFormat:(id)arg1;
- (void)setClipSize:(struct CGSize)arg1;
- (void)setBestGuess:(id)arg1;
- (BOOL)isEmptyProject;
- (BOOL)manuallySetProperty;
- (void)dealloc;

@end

