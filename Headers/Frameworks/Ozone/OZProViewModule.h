//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import <Ozone/OZObjCObserver-Protocol.h>

@class OZObjCDocument;

@interface OZProViewModule : LKViewModule <OZObjCObserver>
{
    OZObjCDocument *_nsDocument;
    BOOL _queueNotifications;
    unsigned int _queuedNotificationFlags;
}

@property(nonatomic, getter=nsDocument, setter=setNSDocument:) OZObjCDocument *nsDocument; // @synthesize nsDocument=_nsDocument;
- (void)notify:(unsigned int)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (struct OZDocument *)oz_currentOZDocument;
- (id)oz_currentDocument;
- (struct CGSize)viewMaxSize;
- (unsigned long long)revealAnimationStyle;

@end

