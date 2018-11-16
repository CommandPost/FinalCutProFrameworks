//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBlindDataCustomUIChannelController.h>

__attribute__((visibility("hidden")))
@interface FFColorCorrectionUIChannelController : FFBlindDataCustomUIChannelController
{
    BOOL _isTrackingUndoRedoChanges;
}

+ (BOOL)shouldDisplayAnimIndicator;
- (void)channelCustomUIResized:(id)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)_stopObservingUndoRedoChangeNotifications;
- (void)_startObservingUndoRedoChangeNotifications;
- (void)handleNotification:(id)arg1;

@end

