//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FFEnhanceAudioDelegate <NSObject>
- (id)channelChangeController;

@optional
- (void)analysisDidStart:(id)arg1;
- (void)analysisDidComplete:(id)arg1;
- (void)analysisDidCancel:(id)arg1;
- (id)retrieveContext;
@end
