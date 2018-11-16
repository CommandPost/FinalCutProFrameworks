//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserInterfaceValidations.h"

__attribute__((visibility("hidden")))
@interface FFShareHelper : NSObject <NSUserInterfaceValidations>
{
    id <NSObject><FFSharableContent> _owner;
}

- (id)initWithOwner:(id)arg1;
- (void)dealloc;
- (void)exportUsingSelector:(SEL)arg1 sender:(id)arg2;
- (void)missingMediaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_exportUsingSelector:(SEL)arg1 sender:(id)arg2;
- (void)exportMediaBrowser:(id)arg1;
- (void)exportiTunes:(id)arg1;
- (void)burnDVD:(id)arg1;
- (void)burnBluray:(id)arg1;
- (void)publishMobileMe:(id)arg1;
- (void)publishPodcast:(id)arg1;
- (void)sendEmail:(id)arg1;
- (void)publishYouTube:(id)arg1;
- (void)publishFacebook:(id)arg1;
- (void)publishVimeo:(id)arg1;
- (void)publishCNNiReport:(id)arg1;
- (void)exportMovie:(id)arg1;
- (void)exportAudio:(id)arg1;
- (void)exportMedia:(id)arg1;
- (void)exportStillFrame:(id)arg1;
- (void)exportImageSequence:(id)arg1;
- (void)exportHTTPLiveStreaming:(id)arg1;
- (void)openInCompressor:(id)arg1;
- (void)exportUsingCompressorSetting:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(nonatomic) id <NSObject><FFSharableContent> owner; // @synthesize owner=_owner;

@end

