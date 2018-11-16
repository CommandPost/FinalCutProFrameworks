//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFContext, FFPlayerModule, FFProvider, NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject>;

@interface FFPlayerItemModule : LKViewModule
{
    struct NSObject *_skimmable;
    FFProvider *_provider;
    FFContext *_context;
    long long _effectCount;
}

- (id)init;
- (id)initWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)dealloc;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)setDelegate:(id)arg1;
@property(readonly) FFPlayerModule *playerModule;
- (void)willStopPlayingWithPlayer:(id)arg1;
- (void)didStartPlayingWithPlayer:(id)arg1;
- (void)didEnterFullScreenMode;
- (void)didExitFullScreenMode;
- (void)updateLabel;
- (id)inspectorClassName;
- (id)selectedItems;
@property(readonly, nonatomic) long long effectCount; // @synthesize effectCount=_effectCount;
@property(readonly, nonatomic) FFContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FFProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject> *skimmable; // @synthesize skimmable=_skimmable;

@end
