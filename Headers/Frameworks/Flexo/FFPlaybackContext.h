//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFPlaybackContext : NSObject
{
    BOOL _hasTopLevelScopingWindow;
    BOOL _hasTopLevelMixBussScopingWindow;
    struct FFAudioPlaybackMediator *_audioPlaybackMediator;
}

- (struct FFAudioPlaybackMediator *)audioPlaybackMediator;
- (void)deleteAudioPlaybackMediator;
- (void)demandAudioPlaybackMediator:(BOOL)arg1;
- (void)setHasTopLevelMixBussScopingWindow:(BOOL)arg1;
- (BOOL)hasTopLevelMixBussScopingWindow;
- (void)setHasTopLevelScopingWindow:(BOOL)arg1;
- (BOOL)hasTopLevelScopingWindow;
- (void)dealloc;
- (id)init;

@end

